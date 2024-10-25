#include <stdbool.h>
typedef struct node NODE;
typedef struct list LIST;

LIST* createList (int (*compare)(int* argu1, int* argu2));
LIST* destroyList(LIST *list);
int addNode(LIST* pList, int* dataInPtr);
bool removeNode (LIST* pList, int* keyPtr, int**dataOutPtr);
bool searchList(LIST* pList, int* pArgu, int**dataOutPtr);
bool traverse(LIST* pList, int fromWhere, int** dataOutPtr);

int listCount(LIST* pList);
bool emptyList(LIST* pList);
bool fullList(LIST* pList);

static bool retrieveNode(LIST* pList, int*pArgu, int** dataOutPtr);

static int _insert(LIST* pList, NODE*pPre, int*dataInPtr);

static void _delete(LIST* pList, NODE* pPre, NODE* pLoc, int** dataOutPtr);

static bool _search(LIST* pList, NODE** pPre, NODE**pLoc, int**pArgu);


/////////////
void printList(LIST* pList);


