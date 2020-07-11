#include "SingleLinkedList.h"
#include "CNode.h"
#include <iostream>

//single linked list class already declares the first node
CNode* temp = new CNode();
CNode* temp2 = new CNode();
SingleLinkedList::SingleLinkedList() {
	size = 1;
	counter = 0;
	CNode* temp;
}

SingleLinkedList::~SingleLinkedList() {
	//kill me now

}

//insert node to front of list
void SingleLinkedList::insertAtTheFront(int data) {
	//the new node's next node is the first node
	CNode* node = new CNode();
	node->setData(data);
	node->setNextNode(head); //set current head as next node to push it along
	head = node;
}

//insert node in the middle of the list
void SingleLinkedList::insertInTheMiddle(int data, int position) {
	temp = head;
	CNode* node = new CNode();
	node->setData(data);
	while (temp != NULL) {
		if (counter+1 == position) {
			node->setNextNode(temp->getNextNode());
			temp->setNextNode(node);
		}
		temp = temp->getNextNode();
		counter++;
	}
	counter = 0;
}

//insert node at the end of the list
void SingleLinkedList::insertAtTheEnd(int data) {
	//loop through linked list, if nextnode is null this is the last node so set the current node to point to new node
	CNode* node = new CNode();
	node->setData(data);
	temp = head;
	while (temp->getNextNode() != NULL) {
		temp = temp->getNextNode();	
	}
	if (temp->getNextNode() == NULL) {
		temp->setNextNode(node);
	}
}

//delete from the head of the list
void SingleLinkedList::deleteFromTheFront(int data) {
	temp = head->getNextNode();
	head = temp;
}

//delete node from the middle of the list
void SingleLinkedList::deleteFromTheMiddle(int data) {
	temp = head;
	while (temp->getNextNode() != NULL) {
		if (temp->getNextNode()->getData() == data) {
			temp2 = temp->getNextNode()->getNextNode();
			temp->setNextNode(temp2);
		}
		temp = temp->getNextNode();
	}
}

//delete node from the end of the list
void SingleLinkedList::deleteFromTheEnd(int data) {
	temp = head;
	while (temp->getNextNode() != NULL) {
		temp = temp->getNextNode();
		if (temp->getNextNode()->getNextNode() == NULL) {
			temp->setNextNode(NULL);
		}
	}
	
}

//search for node 
bool SingleLinkedList::search (int data){
	temp = head;
	while (temp != NULL) {
		if (temp->getData() == data) {
			return true;
		}
		temp = temp->getNextNode();
	}
	return false;
}

//display nodes in list visually in console
void SingleLinkedList::display() {
	//while get next is not null display data
	temp = head;
	int next;
	while (temp != NULL) {
		std::cout << temp->getData() << "   ";
		temp = temp->getNextNode();
	} 
}