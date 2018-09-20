#include "BinNode.h"



BinNode::BinNode()
{

}

/*
BinNode::BinNode(string info)
{
	BinNode();
	this->original_info = info;
}
*/

BinNode::~BinNode()
{
}

void BinNode::setLocation(int line, int pos)
{
	*(this->location) = line;
	*(this->location + 1)  = pos;
}

void BinNode::traverse_info()
{
	this->vector_info = StringHandling::split(this->original_info);

}

string BinNode::toOutput()
{
	string result;
	result = line1 + line2 + line3 + line4 + line5 + line6 + line7 + line8 + line9;
	return result;
}

string BinNode::generate_name()
{
	string name = (*this->vector_info)[NODE_CODE];
	string comparison = (*this->vector_info)[NODE_COMPARISON].compare("<=") ? "gt" : "le";
	string value = (*this->vector_info)[NODE_VALUE];

	string result = name + comparison + value;
	this->name = result;
	return result;
}

enum BinNode::node_type BinNode::generate_type()
{
	BinNode::node_type result;
	string class_value = (*this->vector_info)[NODE_CLASS_VALUE];
	if (class_value == "") result = BinNode::node_type::Decision;
	else result = BinNode::node_type::Result;
	this->n_type = result;
	return result;
}

int* BinNode::generate_location()
{
	return nullptr;
}

int* BinNode::generate_class_value()
{
	return nullptr;
}
