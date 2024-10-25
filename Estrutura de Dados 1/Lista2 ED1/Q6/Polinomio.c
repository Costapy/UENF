#include <stdio.h>
#include <stdlib.h>
#include "Polinomio.h"

//	List ADT Structure Definitions
	struct node
	{   void*        constante; //Constante de acompanha variável || -> 3x
        void*        grau; //Grau da variável || 3x² <-
	    struct node* link;
	};

	struct list
	{   int   count;
	    NODE* pos;
	    NODE* head;
	    NODE* rear;
	    int    (*compare) (void* argu1, void* argu2);
	};

/*	=============== createList ==============
	Allocates dynamic memory for a list head
	node and returns its address to caller
	   Pre    compare is address of compare function
	          used to compare two nodes.
	   Post   head has allocated or error returned
	   Return head node pointer or null if overflow
*/
LIST* createList
     (int (*compare) (void* argu1, void* argu2))
{
//	Local Definitions
	LIST* list;

//	Statements
	list = (LIST*) malloc (sizeof (LIST));
	if (list)
	   {
	    list->head    = NULL;
	    list->pos     = NULL;
	    list->rear    = NULL;
	    list->count   = 0;
	    list->compare = compare;
	   } // if

	return list;
}	// createList

/*	================== addNode =================
	Inserts data into list.
	   Pre    pList is pointer to valid list
	          dataInPtr pointer to insertion data
	   Post   data inserted or error
	   Return -1 if overflow
	           0 if successful
	           1 if dupe key
*/
int addNode (LIST* pList, void* constante, void* grau)
{
//	Local Definitions
	bool found;
    bool found2;
	bool success;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, constante);
    found2 = _search (pList, &pPre, &pLoc, grau);
	if (found && found2)
	   // Duplicate keys not allowed
	   return (+1);

	success = _insert (pList, pPre, constante, grau);
	if (!success)
	   // Overflow
	   return (-1);
	return (0);
}	// addNode

/*	=================== _insert ==================
	Inserts data pointer into a new node.
	   Pre    pList pointer to a valid list
	          pPre  pointer to data's predecessor
	          dataInPtr data pointer to be inserted
	   Post   data have been inserted in sequence
	   Return boolean, true  if successful,
	                   false if memory overflow
*/
static bool _insert (LIST* pList, NODE* pPre,
                     void* constante, void* grau)
{
//	Local Definitions
	NODE* pNew;

//	Statements
	if (!(pNew = (NODE*) malloc(sizeof(NODE))))
	   return false;

	pNew->constante   = constante;
    pNew->grau = grau;
	pNew->link      = NULL;

	if (pPre == NULL)
	   {
	    // Adding before first node or to empty list.
	    pNew->link       = pList->head;
	    pList->head      = pNew;
	    if (pList->count == 0)
	       // Adding to empty list. Set rear
	       pList->rear = pNew;
	   } // if pPre
	else
	   {
	    // Adding in middle or at end
	    pNew->link  = pPre->link;
	    pPre->link  = pNew;

	    // Now check for add at end of list
	    if (pNew->link     == NULL)
	         pList->rear   =  pNew;
	   } // if else

	(pList->count)++;
	return true;
}	// _insert

/*	================= removeNode ================
	Removes data from list.
	   Pre    pList pointer to a valid list
	          keyPtr pointer to key to be deleted
	          dataOutPtr pointer to data pointer
	   Post   Node deleted or error returned.
	   Return false not found; true deleted
*/
bool removeNode  (LIST*  pList, void*  keyPtr,
                  void** constante, void** grau)
{
//	Local Definitions
	bool found;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, keyPtr);
	if (found)
	   _delete (pList, pPre, pLoc, constante, grau);

	return found;
}	// removeNode

/*	================= _delete ================
	Deletes data from a list and returns
	pointer to data to calling module.
	   Pre    pList pointer to valid list.
	          pPre  pointer to predecessor node
	          pLoc  pointer to target node
	          dataOutPtr pointer to data pointer
	   Post   Data have been deleted and returned
	          Data memory has been freed
*/
void _delete (LIST* pList, NODE*  pPre,
              NODE* pLoc,  void** dataOutPtr, void** dataOutPtr2)
{
//	Statements
	*dataOutPtr = pLoc->constante;
    *dataOutPtr2 = pLoc->grau;
	if (pPre == NULL)
	   // Deleting first node
	   pList->head = pLoc->link;
	else
	   // Deleting any other node
	   pPre->link = pLoc->link;

	// Test for deleting last node
	if (pLoc->link == NULL)
	    pList->rear = pPre;

	(pList->count)--;
	free (pLoc);

	return;
}	// _delete

/*	================== searchList =================
	Interface to search function.
	   Pre    pList pointer to initialized list.
	          pArgu pointer to key being sought
	   Post   pDataOut contains pointer to found data
	     -or- NULL if not found
	   Return boolean true successful; false not found
*/
bool searchList (LIST*  pList, void* pArgu, void* pArgu2,
                 void** pDataOut, void**pDataOut2)
{
//	Local Definitions
	bool  found;
    bool found2;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, pArgu);
    found2 = _search (pList, &pPre, &pLoc, pArgu2);
	if (found && found2) {
	    *pDataOut = pLoc->constante;
        *pDataOut2 = pLoc->grau;
    }
	else {
	    *pDataOut = NULL;
        *pDataOut2 = NULL;
    }
	return found;
}	// searchList

/*	================== _search =================
	Searches list and passes back address of node
	containing target and its logical predecessor.
	   Pre    pList pointer to initialized list
	          pPre  pointer variable to predecessor
	          pLoc  pointer variable to receive node
	          pArgu pointer to key being sought
	   Post   pLoc points to first equal/greater key
	     -or- null if target > key of last node
	          pPre points to largest node < key
	     -or- null if target < key of first node
	   Return boolean true found; false not found

*/
static bool _search (LIST*  pList, NODE** pPre,
              NODE** pLoc,  void*  pArgu)
{
//	Macro Definition
#define COMPARE \
	( ((* pList->compare) (pArgu, (*pLoc)->constante)) )

#define COMPARE_LAST \
	((* pList->compare) (pArgu, pList->rear->constante))

//	Local Definitions
	int result;

//	Statements
	*pPre  = NULL;
	*pLoc  = pList->head;
	if (pList->count == 0)
	    return false;

	// Test for argument > last node in list
	if ( COMPARE_LAST > 0)
	   {
	    *pPre = pList->rear;
	    *pLoc = NULL;
	    return false;
	   } // if

	while ( (result = COMPARE) > 0 )
	   {
	    // Have not found search argument location
	    *pPre = *pLoc;
	    *pLoc = (*pLoc)->link;
	   } // while

	if (result == 0)
	   // argument found--success
	   return true;
	else
	   return false;
}	// _search

/*	================== retrieveNode ================
	This algorithm retrieves data in the list without
	changing the list contents.
	   Pre    pList pointer to initialized list.
	          pArgu pointer to key to be retrieved
	   Post   Data (pointer) passed back to caller
	   Return boolean true success; false underflow
*/
bool retrieveNode (LIST*  pList,
                          void*  pArgu, void* pArgu2,
                          void** dataOutPtr, void** dataOutPtr2)
{
//	Local Definitions
	bool  found;
    bool  found2;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, pArgu);
    found2 = _search (pList, &pPre, &pLoc, pArgu2);
	if (found && found2)
	   {
	    *dataOutPtr = pLoc->constante;
        *dataOutPtr2 = pLoc->grau;
	    return true;
	   } // if

	*dataOutPtr = NULL;
	return false;
}	// retrieveNode

/*	================= emptyList ================
	Returns boolean indicating whether or not the
	list is empty
	   Pre    pList is a pointer to a valid list
	   Return boolean true empty; false list has data
*/
bool emptyList (LIST* pList)
{
//	Statements
	return (pList->count == 0);
}	// emptyList

/*	================== fullList =================
	Returns boolean indicating no room for more data.
	This list is full if memory cannot be allocated for
	another node.
	   Pre    pList pointer to valid list
	   Return boolean true if full
	                  false if room for node
*/
bool fullList (LIST* pList)
{
//	Local Definitions
NODE* temp;
	if ((temp = (NODE*)malloc(sizeof(*(pList->head)))))
	   {
	    free (temp);
	    return false;
	   } // if

	// Dynamic memory full
	return true;
}	// fullList

/*	================== listCount ==================
	Returns number of nodes in list.
	   Pre    pList is a pointer to a valid list
	   Return count for number of nodes in list
*/
int listCount(LIST* pList)
{ 	return pList->count;
}	// listCount

/*	================== traverse =================
	Traverses a list. Each call either starts at the
	beginning of list or returns the location of the
	next element in the list.
	   Pre    pList       pointer to a valid list
	          fromWhere   0 to start at first element
	          dataPtrOut  address of pointer to data
	   Post   if more data, address of next node
	   Return true node located; false if end of list
*/
bool traverse (LIST*  pList,
              int    fromWhere,
              void** dataPtrOut, void** dataPtrOut2)
{
//	Statements
	if (pList->count == 0)
	    return false;

	if (fromWhere == 0)
	   {
		 //Start from first node
	    pList->pos  = pList->head;
	    *dataPtrOut = pList->pos->constante;
        *dataPtrOut2 = pList->pos->grau;
	    return true;
	   } // if fromwhere
	else
	   {
	    // Start from current position
	    if (pList->pos->link == NULL)
	        return false;
	    else
	       {
	        pList->pos  = pList->pos->link;
	        *dataPtrOut = pList->pos->constante;
            *dataPtrOut2 = pList->pos->grau;
	        return true;
	       } // if else
	   } // if fromwhere else
}	// traverse

/*	================== destroyList =================
	Deletes all data in list and recycles memory
	   Pre    List is a pointer to a valid list.
	   Post   All data and head structure deleted
	   Return null head pointer
*/
LIST* destroyList (LIST* pList)
{
//	Local Definitions
	NODE* deletePtr;

//	Statements
	if (pList)
	   {
	    while (pList->count > 0)
	       {
	        // First delete data
	        free (pList->head->constante);
            free (pList->head->grau);

	        // Now delete node
	        deletePtr    = pList->head;
	        pList->head  = pList->head->link;
	        pList->count--;
	        free (deletePtr);
	       } // while
	    free (pList);
	   } // if
	return NULL;
}	// destroyList


LIST* SomaPol(LIST* plist1, LIST* plist2, LIST* newlist) {
    // Define nodeA e nodeB para percorrer ambas listas

    NODE* nodeA = plist1->head;
    NODE* nodeB = plist2->head;

    // Enquanto nodeA e NodeB nao forem nulos:
    while (nodeA && nodeB) {
            //Pega grau de ambos
        int grauA = *((int*)nodeA->grau);
        int grauB = *((int*)nodeB->grau);

        if (grauA > grauB) { // Se A > B
            // É adcionado Grau A na nova lista
            addNode(newlist, nodeA->constante, nodeA->grau);
            nodeA = nodeA->link; // Vai para o proximo link da lista
        } else if (grauA < grauB) {
            // Se B for maior, adiciona na lista
            addNode(newlist, nodeB->constante, nodeB->grau);
            nodeB = nodeB->link; // Atualiza node
        } else {
            // Caso contrario, é feito soma
            int* pSoma = (int*)malloc(sizeof(int)); // É criado um ponteiro de soma
            *pSoma = *((int*)nodeA->constante) + *((int*)nodeB->constante); // Soma as constantes
            addNode(newlist, pSoma, nodeA->grau); // Adiciona a soma na lista
            // Atualiza node
            nodeA = nodeA->link;
            nodeB = nodeB->link;
        }
    }

    // Pode haver termos restantes
    while (nodeA != NULL) {
            //Adiciona termos restantes
        addNode(newlist, nodeA->constante, nodeA->grau);
        nodeA = nodeA->link;
    }

    while (nodeB != NULL) {
        addNode(newlist, nodeB->constante, nodeB->grau);
        nodeB = nodeB->link;
    }

    return newlist;
}

void printPoly(LIST* poly) {
    if (poly->head == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }

    NODE* current = poly->head;
    while (current != NULL) {
        int* coeficiente = (int*)current->constante;
        int* grau = (int*)current->grau;
        printf("%dx^%d ", *coeficiente, *grau);
        if (current->link != NULL) {
            printf("+ ");
        }
        current = current->link;
    }
    printf("\n");
}
