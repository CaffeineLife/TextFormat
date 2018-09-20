#pragma once
#include "Classes.h"
#include "Common.h"

class FileOperation
{
public:
	FileOperation(string inputPath = "./input.txt", string outputPath="./output.txt");
	~FileOperation();

	string readLine();
	vector<string>* readAll();
	string writeLine();
	vector<string> writeAll();

	void info();
	void printInput();
	void printOutput();


protected:
	string inputPath;
	string outputPath;
	ifstream* fin;
	ofstream* fout;
	vector<string>* inputLines;
	vector<string>* outputLines;
};
