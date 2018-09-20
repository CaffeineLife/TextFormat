#pragma once
#include "Common.h"
#include "Classes.h"

class BinNode
{
public:
	BinNode();
	//BinNode(string info);
	//BinNode(string info, BinNode* left, BinNode* right);
	~BinNode();

	void setLocation(int line, int pos);
	void traverse_info();
	string toOutput();
protected:

	const int NODE_CODE = 0;
	const int NODE_COMPARISON = 1;
	const int NODE_VALUE = 2;
	const int NODE_CLASS_VALUE = 8;
	
	const string line1 = "begin node";
	const string line2 = "\n  name = ";
	const string line3 = "\n  type = ";
	const string line4 = "\n  location = ";
	const string line5 = "\n  parent name = ";
	const string line6 = "\n  parent decision= ";
	const string line7 = "\n  class value = ";
	const string line8 = "\n  class rgb= ";
	const string line9 = "\nend node";

	BinNode* left;
	BinNode* right;
	BinNode* parent;

	string original_info;
	vector<string>* vector_info;

private:
// class
	enum node_type { Decision, Result };

//---------Node Infomation-----------//
	string name;
	node_type n_type;
	int location[2];
	string parent_name;
	enum parent_decision { Yes, No };
	string expression;
	string class_value;
	int class_rgb[3];

// method
	string generate_name();
	enum node_type generate_type();
	int* generate_location();
	int* generate_class_value();

};
