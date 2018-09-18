#pragma once
#include "Common.h"
class BinNode
{
public:
	BinNode();
	BinNode(string info);
	//BinNode(string info, BinNode* left, BinNode* right);
	~BinNode();

	void setLocation(int line, int pos);
	void traverse_info();
protected:
	BinNode* left;
	BinNode* right;
	BinNode* parent;

	string original_info;


private:
//---------Node Infomation-----------//
	string name;
	enum type { Decision, Result };
	int* location;
	string parent_name;
	enum parent_decision { Yes, No };
	string expression;
	string class_value;
	int* class_rgb;

};

