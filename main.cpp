#include <iostream>
#include "CNode.h"
#include "SingleLinkedList.h"
//written by Michelle Zhang
using namespace std;
int main() {
	//create nodes returns the memory address of the new object


	SingleLinkedList* sl = new SingleLinkedList();
	sl->insertAtTheFront(10);
	sl->insertAtTheFront(20);
	sl->insertAtTheFront(30);

	sl->insertAtTheEnd(99);
	sl->insertInTheMiddle(55, 2);
	sl->display();
	cout << endl;
	
	sl->deleteFromTheFront(1);
	sl->deleteFromTheEnd(1);
	sl->deleteFromTheMiddle(55);
	sl->insertAtTheFront(60);
	sl->insertInTheMiddle(70, 1);
	sl->display();
	cout << endl;
	cout << "Exists node with value of 55?:     ";
	cout << sl->search(55);
	return(0);
}