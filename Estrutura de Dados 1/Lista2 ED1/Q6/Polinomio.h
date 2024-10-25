#ifndef LINKLISTADT_H_INCLUDED
#define LINKLISTADT_H_INCLUDED

#include <stdbool.h>

// List ADT Type Definitions
typedef struct node NODE;
typedef struct list LIST;

// Prototype Declarations
LIST* createList(int (*compare)(void* argu1, void* argu2));
LIST* destroyList(LIST* list);

int addNode(LIST* pList, void* constante, void* grau);

bool removeNode(LIST* pList, void* keyPtr, void** dataOutPtr, void** grau);

bool searchList(LIST* pList, void* pArgu, void* pArgu2, void** pDataOut, void** pDataOut2);

bool retrieveNode(LIST* pList, void* pArgu, void* pArgu2, void** dataOutPtr, void** pDataOut2);

bool traverse(LIST* pList, int fromWhere, void** dataOutPtr, void** dataPtrOut2);

static bool _search (LIST*  pList, NODE** pPre, NODE** pLoc,  void*  pArgu);

void _delete (LIST* pList, NODE*  pPre, NODE* pLoc,  void** dataOutPtr, void** dataOutPtr2);

static bool _insert (LIST* pList, NODE* pPre, void* constante, void* grau);

int listCount(LIST* pList);
bool emptyList(LIST* pList);
bool fullList(LIST* pList);

void printPoly(LIST* poly);
LIST* SomaPol(LIST* plist1, LIST* plist2, LIST* newlist);


#endif // LINKLISTADT_H_INCLUDED
