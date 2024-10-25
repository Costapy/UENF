
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    Node* tail;
} LinkedList;

LinkedList* createLinkedList() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node* createNode(int coefficient, int exponent) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

void addNode(LinkedList* list, int coefficient, int exponent) {
    Node* newNode = createNode(coefficient, exponent);
    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

LinkedList* sumPolynomials(LinkedList* poly1, LinkedList* poly2) {
    LinkedList* result = createLinkedList();
    Node* node1 = poly1->head;
    Node* node2 = poly2->head;

    while (node1 != NULL && node2 != NULL) {
        if (node1->exponent > node2->exponent) {
            addNode(result, node1->coefficient, node1->exponent);
            node1 = node1->next;
        } else if (node1->exponent < node2->exponent) {
            addNode(result, node2->coefficient, node2->exponent);
            node2 = node2->next;
        } else {
            int sum = node1->coefficient + node2->coefficient;
            addNode(result, sum, node1->exponent);
            node1 = node1->next;
            node2 = node2->next;
        }
    }

    // Append remaining nodes from poly1, if any
    while (node1 != NULL) {
        addNode(result, node1->coefficient, node1->exponent);
        node1 = node1->next;
    }

    // Append remaining nodes from poly2, if any
    while (node2 != NULL) {
        addNode(result, node2->coefficient, node2->exponent);
        node2 = node2->next;
    }

    return result;
}

void displayPolynomial(LinkedList* poly) {
    if (poly->head == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }

    Node* current = poly->head;
    while (current != NULL) {
        printf("%dx^%d ", current->coefficient, current->exponent);
        if (current->next != NULL) {
            printf("+ ");
        }
        current = current->next;
    }
    printf("\n");
}

void destroyLinkedList(LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(list);
}

int main() {
    LinkedList* poly1 = createLinkedList();
    LinkedList* poly2 = createLinkedList();
    LinkedList* result;

    // Create polynomial 1
    addNode(poly1, 5, 3);
    addNode(poly1, 4, 2);

        // Create polynomial 1 (continued)
    addNode(poly1, 4, 2);
    addNode(poly1, 9, 1);
    addNode(poly1, 0, 0);

    // Create polynomial 2
    addNode(poly2, 2, 3);
    addNode(poly2, 6, 2);
    addNode(poly2, 7, 1);
    addNode(poly2, 1, 0);

    // Sum polynomials
    result = sumPolynomials(poly1, poly2);

    // Display polynomials
    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    printf("Sum: ");
    displayPolynomial(result);

    // Clean up memory
    destroyLinkedList(poly1);
    destroyLinkedList(poly2);
    destroyLinkedList(result);

    return 0;
}

