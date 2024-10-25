#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

//	List ADT Structure Definitions
	struct node
	{   int*        dataPtr;
	    struct node* link;
	};

	struct list
	{   int   count;
	    NODE* pos;
	    NODE* head;
	    NODE* rear;
	    int    (*compare) (int* argu1, int* argu2);
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
     (int (*compare) (int* argu1, int* argu2))
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
int addNode (LIST* pList, int* dataInPtr)
{
//	Local Definitions
	bool found;
	bool success;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, dataInPtr);
	if (found)
	   // Duplicate keys not allowed
	   return (+1);

	success = _insert (pList, pPre, dataInPtr);
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
                     int* dataInPtr)
{

//	Local Definitions
	NODE* pNew;

//	Statements
	if (!(pNew = (NODE*) malloc(sizeof(NODE))))
	   return false;

	pNew->dataPtr   = dataInPtr;
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
bool removeNode  (LIST*  pList, int*  keyPtr,
                  int** dataOutPtr)
{
//	Local Definitions
	bool found;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, keyPtr);
	if (found)
	   _delete (pList, pPre, pLoc, dataOutPtr);

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
void _delete (LIST* pList, NODE* pPre,
              NODE* pLoc,  int** dataOutPtr)
{
//	Statements
	*dataOutPtr = pLoc->dataPtr;
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
bool searchList (LIST*  pList, int* pArgu,
                 int** pDataOut)
{
//	Local Definitions
	bool  found;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, pArgu);
	if (found)
	    *pDataOut = pLoc->dataPtr;
	else
	    *pDataOut = NULL;
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
              NODE** pLoc,  int*  pArgu)
{
//	Macro Definition
#define COMPARE \
	( ((* pList->compare) (pArgu, (*pLoc)->dataPtr)) )

#define COMPARE_LAST \
	((* pList->compare) (pArgu, pList->rear->dataPtr))

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
                          int*  pArgu,
                          int** dataOutPtr)
{
//	Local Definitions
	bool  found;

	NODE* pPre;
	NODE* pLoc;

//	Statements
	found = _search (pList, &pPre, &pLoc, pArgu);
	if (found)
	   {
	    *dataOutPtr = pLoc->dataPtr;
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
              int** dataPtrOut)
{
//	Statements
	if (pList->count == 0)
	    return false;

	if (fromWhere == 0)
	   {
		 //Start from first node
	    pList->pos  = pList->head;
	    *dataPtrOut = pList->pos->dataPtr;
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
	        *dataPtrOut = pList->pos->dataPtr;
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
LIST* destroyList(LIST* pList)
{
    NODE* deletePtr;

    if(pList)
    {
        while(pList->count > 0)
        {
            free(pList->head->dataPtr);

            deletePtr = pList->head;
            pList->head = pList->head->link;
            pList->count--;
            free(deletePtr);
        }

        free(pList);
    }

    return NULL;
}

void printList(LIST* myList)
{
    NODE* showList = myList->head;

    while(showList != NULL)
    {
        int getValue = *(showList->dataPtr);
        printf("%d ", getValue);
        showList = showList->link;
    }

    printf("\n");
}
