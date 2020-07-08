#include "SingleLinkedList.h"
#include "CNode.h"

CNode* temp = new CNode();

SingleLinkedList::SingleLinkedList() {

}

SingleLinkedList::~SingleLinkedList() {
	//kill me now

}

//insert node to front of list
void SingleLinkedList::insertAtTheFront(int data) {
	temp->setNextNode(firstNode);
}

//insert node in the middle of the list
void SingleLinkedList::insertInTheMiddle(int data, int position) {

}

//insert node at the end of the list
void SingleLinkedList::insertAtTheEnd(int data) {

}

//delete from the head of the list
void SingleLinkedList::deleteFromTheFront(int data) {

}

//delete node from the middle of the list
void SingleLinkedList::deleteFromTheMiddle(int data) {

}

//delete node from the end of the list
void SingleLinkedList::deleteFromTheEnd(int data) {

}

//search for node 
bool search (int data){
	return true;
}

//display nodes in list visually in console
void display() {

}