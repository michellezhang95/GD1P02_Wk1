#include "CNode.h"
//written by Michelle Zhang
//Constructor
CNode::CNode() {
	data = 0;
	nextNode = nullptr;
}

// set the value within the node
void CNode::setData(int iData) {
	data = iData;
}

// get data within the node
 int  CNode::getData() const {
	return data;
}

//set the next node the current node points to
void CNode::setNextNode(CNode* p_nextNode) {
	nextNode = p_nextNode;
}

//get the address of the next node the current node points to
CNode* CNode::getNextNode() const {
	return nextNode;
}