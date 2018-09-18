#include "Common.h"
#include "Classes.h"

int main()
{
	/*
	vector<string> *all;
	FileOperation* fo = new FileOperation();
	all = fo->readAll();
	fo->printInput();
	*/

	string line0 = " 11 22 33 44";
	string line1 = " B15 <= 1,283 [ ģʽ: 5 ]";
	string line2 = "B20 <= -1,136 [ ģʽ: 6 ] => 6.0";
	
	BinNode* node = new BinNode(line1);
	node->traverse_info();



	system("PAUSE");
	return 0;
}