#include "BinNode.h"



BinNode::BinNode()
{
	this->location = new int[2];
	this->class_rgb = new int[3]{0,0,0};
}

BinNode::BinNode(string info)
{
	BinNode();
	this->original_info = info;
}


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
	int i = 0;
	string word_temp[9];
	stringstream string_temp;
	string word;

	string_temp << this->original_info;	
	while (string_temp >> word)	word_temp[i++] = word;

}