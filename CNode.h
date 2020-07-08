#pragma once
#ifndef _NODE_H__
#define _NODE_H__
class CNode
{
private: 
	int data;
	CNode* nextNode;

public:
	CNode();
	void setData(int iData);
	int getData() const;
	void setNextNode(CNode* nextNode);
	CNode* getNextNode() const;
};

#endif