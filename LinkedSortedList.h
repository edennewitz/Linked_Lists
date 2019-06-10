/*
CS-3100-C01 - Data Struc & Algorithms
Ethan Dennewitz
(Linked List)
*/


#include "LinkedNode.h"
#include <cstdlib>
#include "SortedList.h"

template <class Elm> class LinkedSortedList : public SortedList<Elm>
{
private:
	LinkedNode<Elm>* head;
public:
	LinkedSortedList();
	~LinkedSortedList();

	void clear();
	bool insert(Elm newvalue);
	bool getfirst(Elm &returnvalue);
	void print()const;
	bool find(Elm searchvalue)const;
	int size()const;
};



