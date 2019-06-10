/*
CS-3100-C01 - Data Struc & Algorithms
Ethan Dennewitz
(Linked List)
*/


#include "LinkedNode.h"
#include "LinkedSortedList.h"
#include <cstdlib>

// The constructor method is used to create an empty linked list.
template<class Elm>
LinkedSortedList<Elm>::LinkedSortedList()
{
	head = NULL;
}
// The destructor function works by simply calling the clear function.
template<class Elm>
LinkedSortedList<Elm>::~LinkedSortedList()
{
	clear();
}
// The clear function erases the list by deleting all the nodes.
template<class Elm>
void LinkedSortedList<Elm>::clear()
{
	
	LinkedNode<Elm>* oldnode;
	while (head != NULL) {
		oldnode = head;
		head = head->next;
		delete(oldnode);
		
	}
	
}
// The insert function is used to insert the node into the current list as well as sort the list
template<class Elm>
bool LinkedSortedList<Elm>::insert(Elm newvalue)
{
	LinkedNode<Elm>* current = head;
	LinkedNode<Elm>* previous = NULL;

	LinkedNode<Elm>* temp = new LinkedNode<Elm>(newvalue);
	temp->value = newvalue;
	temp->next = NULL;

	while (current != NULL && current->value < newvalue) {
		previous = current;
		current = current->next;
	}

	if (head == current) {
		head = temp;
		temp->next = current;

	}
	else if (current == NULL || current->value != newvalue) {
		previous->next = temp;
		temp->next = current;
	}

	return true;
}
// The getfirst function takes the first entry in the list shows it to the user then deletes the node from the list
template<class Elm>
bool LinkedSortedList<Elm>::getfirst(Elm & returnvalue)
{
	LinkedNode<Elm>* oldhead = head;
	if (head == NULL) { return false; }
	returnvalue = head->value;
	head = head->next;
	delete(oldhead);
	return true;
}
// The print function loops through the list and couts the value of the current nodes, also indicates if the list is empty
template<class Elm>
void LinkedSortedList<Elm>::print()const
{
	LinkedNode<Elm> *temp;
	if (head == NULL)
	{
		cout << "The List is Empty" << endl;
		return;
	}
	temp = head;
	cout << "Elements of list are: " << endl;
	while (temp != NULL)
	{
		cout << temp->value << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}
// The find function loops prompts the user for an entry then loops through the list to see if it is present, also indicates if the list is empty or isnt found
template<class Elm>
bool LinkedSortedList<Elm>::find(Elm searchvalue)const
{
	Elm value, pos = 0;
	bool flag = false;
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return 0;
	}
	cout << "Enter the value to be found: ";
	cin >> value;
	LinkedNode<Elm> *s;
	s = head;
	while (s != NULL)
	{
		pos++;
		if (s->value == value)
		{
			flag = true;
			cout << "Element " << value << " is found at position " << pos << endl;
		}
		s = s->next;
	}
	if (!flag)
		cout << "Element " << value << " not found in the list" << endl;
}

//Size function counts the number of nodes currently in the list
template<class Elm>
int LinkedSortedList<Elm>::size()const
{
	int count = 0;
	LinkedNode<Elm>* p = head;
	while (p != NULL)
	{
		++count;
		p = p->next;
	}
	return count;
}

template class LinkedSortedList<int>;
template class LinkedSortedList<double>;

