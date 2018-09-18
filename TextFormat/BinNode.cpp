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
	int line_pos_temp_pre = -2;
	int line_pos_temp_post = -1;
	int attr_num = 0;
	vector<string> attrs;

	for (int i = 0; i < this->original_info.length(); i++) {
		if (i < this->original_info.length() - 2 && this->original_info[i + 1] == ' ' && this->original_info[i] == ' ') continue;
		if (attr_num == 3 && this->original_info[i] != ']') continue;
		if (this->original_info[i] == ' ')
		{
			if (line_pos_temp_pre == -2 && line_pos_temp_post == -1) line_pos_temp_pre = i + 1;
			else if ((line_pos_temp_pre != -2 && line_pos_temp_post == -1)) line_pos_temp_post = i - 1;
		} 
		if (line_pos_temp_pre != -2 && line_pos_temp_post != -1) {
			attrs.push_back(this->original_info.substr(line_pos_temp_pre, line_pos_temp_post - line_pos_temp_pre + 1));
			line_pos_temp_pre = -2;
			line_pos_temp_post = -1;
		}
	}

	for (string s : attrs)
		cout << s << endl;
}

