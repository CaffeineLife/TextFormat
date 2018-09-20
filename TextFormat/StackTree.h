#pragma once
#include "Common.h"
#include "Classes.h"

class A { 
public:
	enum node_type { Decision, Result };
	string name;
	node_type n_type;
};

class StackTree
{
public:
	StackTree();
	~StackTree();
	
protected:
	stack<A>* tree;
	vector<A>* nodes;

private:

};
