#include "Laba7h.h"


using namespace std;


int main()
{
	srand(time(0));

	Node node;
	Node* pnode;
	List* list;

	list = CreateList();

	for (int i = 0; i < 10; i++)
	{
		node.data = rand() % 6;
		pnode = AddValueEnd(list, node.data);
	}

	
	PrintList(list);
	SearchandInsert(list, pnode);
	PrintList(list);

}

