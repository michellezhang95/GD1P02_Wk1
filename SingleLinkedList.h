#pragma once
#ifndef _SINGLE_LINKEDLIST_H__
#define _SINGLE_LINKEDLIST_H__
#include "CNode.h"

class SingleLinkedList {

private:
	CNode* firstNode;

public:
	SingleLinkedList();
	~SingleLinkedList();

	void insertAtTheFront(int data);

	void insertInTheMiddle(int data, int position);

	void insertAtTheEnd(int data);

	void deleteFromTheFront(int data);

	void deleteFromTheMiddle(int data);

	void deleteFromTheEnd(int data);

	bool search(int data);

	void display();
};

#endif