#include "LinkedList.h"


int main()
{
	LinkedList<int>* stuff = new LinkedList<int>();
	
	//This creates the list
	stuff->initialize();
	stuff->insert(1, 0);
	stuff->pushFront(2);
	stuff->pushFront(3);
	stuff->pushFront(7);
	stuff->pushFront(9);
	stuff->print();
	
}