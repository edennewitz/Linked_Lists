/*
CS-3100-C01 - Data Struc & Algorithms
Ethan Dennewitz
(Linked List)
*/

#include "LinkedNode.h"
#include "LinkedSortedList.h"

#include <cstdlib>
#include <string>
#include <iostream>


using namespace std;

int main()
{
	
	int choice;
	double doubleValue = 0.0;
	int intValue = 0;

	LinkedSortedList<int> intTest;
	LinkedSortedList<double> doubleTest;
	
	while (1)
	{
		cout << endl << "---------------------------------" << endl;
		cout << endl << "LinkedSortedList Menu" << endl;
		cout << endl << "---------------------------------" << endl;
		cout << "1.Insert Entries into lists" << endl;
		cout << "2.Clear Entries" << endl;
		cout << "3.Get the first Entry" << endl;
		cout << "4.Destructor Test" << endl;
		cout << "5.Printing Test" << endl;
		cout << "6.Find an Entry" << endl;
		cout << "7.Find the size of the list" << endl;
		cout << "8.Exit " << endl;
		cout << "Enter your choice : ";
		cin >> choice;
		
		switch (choice)
		{
		case 1:
			cout << "Inserting entries into the int linked list: " << endl;
			intTest.insert(2);
			intTest.insert(1);
			intTest.insert(2);
			intTest.insert(3);
			intTest.insert(2);
			intTest.insert(4);
			intTest.insert(2);
			cout << "Inserting entries into the double linked list: " << endl;
			doubleTest.insert(2.2);
			doubleTest.insert(1.1);
			doubleTest.insert(2.2);
			doubleTest.insert(3.3);
			doubleTest.insert(2.2);
			doubleTest.insert(4.4);
			doubleTest.insert(2.2);

			
			cout << endl;
			break;
		case 2:
			cout << "Clearing the int list:" << endl;
			intTest.clear();

			cout << "Clearing the double list:" << endl;
			doubleTest.clear();

			cout << endl;
			break;
		case 3:
			
			intTest.getfirst(intValue);
			cout << "The first entry in the int linked list: " << intValue << endl;

			
			doubleTest.getfirst(doubleValue);
			cout << "The first entry in the double linked list: " << doubleValue << endl;

			cout << endl;
			break;

		case 4:
			cout << "Destructor Test on int linked list: " << endl;
			intTest.clear();

			cout << "Destructor Test on int linked list: " << endl;
			doubleTest.clear();
			
			cout << endl;
			break;
		case 5:
			cout << "Printing the int linked list:" << endl;
			intTest.print();

			cout << "Printing the double linked list:" << endl;
			doubleTest.print();
			break;
		case 6:
			cout << "Search for a specific entry in the int list: " << endl;
			intTest.find(0);

			cout << "Search for a specific entry in the int list: " << endl;
			doubleTest.find(0);
			cout << endl;
			break;
		case 7:
			cout << "The size of the int list is:" << endl;
			cout << intTest.size() << endl;

			cout << "The size of the double list is:" << endl;
			cout << doubleTest.size() << endl;
			cout << endl;
			break;
		case 8:
			cout << "Exiting..." << endl;
			exit(1);
			break;
		default:
			cout << "Wrong choice" << endl;
		}
	}
}