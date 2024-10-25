#include <stdbool.h>

//	List ADT Type Definitions
typedef struct node NODE;
typedef struct list LIST;

//	Prototype Declarations
	LIST* createList   (int (*compare)
	                   (void* argu1, void* argu2));
	LIST* destroyList  (LIST* list);

	int   addNode   (LIST* pList, void* dataInPtr);

	bool  removeNode   (LIST*  pList,
	                    void*  keyPtr,
	                    void** dataOutPtr);

	bool  searchList   (LIST*  pList,
	                    void*  pArgu,
	                    void** pDataOut);

	bool  retrieveNode (LIST*  pList,
	                    void*  pArgu,
	                    void** dataOutPtr);

	bool  traverse     (LIST*  pList,
	                    int    fromWhere,
	                    void** dataOutPtr);

	int   listCount    (LIST*  pList);
	bool  emptyList    (LIST*  pList);
	bool  fullList     (LIST*  pList);

	static bool _insert   (LIST* pList,
	                      NODE* pPre,
	                      void* dataInPtr);

	static void _delete  (LIST*  pList,
	                      NODE*  pPre,
	                      NODE*  pLoc,
	                      void** dataOutPtr);
	static bool _search  (LIST*  pList,
	                      NODE** pPre,
	                      NODE** pLoc,
	                      void*  pArgu);

    LIST* cria_lista (void);

    void mostra_lista(LIST* list);

    int cmpPopulacao (void* pPopulacao1, void* pPopulacao2);

//	End of List ADT Definitions
