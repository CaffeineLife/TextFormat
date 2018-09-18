#include "FileOperation.h"



FileOperation::FileOperation(string inputPath, string outputPath)
{
	this->inputPath = inputPath;
	this->outputPath = outputPath;
	
	this->fin = new ifstream();


	this->inputLines = new vector<string>();
	this->outputLines = new vector<string>();

	this->fin = new ifstream();
	this->fout = new ofstream();

	this->fin->open(inputPath,ios::in);
	if ( !fin->is_open()) {
		cout << "Error opening input file" << endl;
		system("pause");
		exit(-1);
	}

	this->fout->open(outputPath,ios::out|ios::trunc);
	if ( !fout->is_open())
	{
		cout << "Error opening output file" << endl;
		system("pause");
		exit(-1);
	}
	
}


FileOperation::~FileOperation()
{
	this->fin->close();
	this->fout->close();

	free(this->inputLines);
	free(this->outputLines);
	free(this->fin);
	free(this->fout);
}

string FileOperation::readLine()
{	
	string line;
	
	return line;
}

vector<string>* FileOperation::readAll()
{
	string line;
	while (this->fin->peek() != EOF) {
		getline(*this->fin,line);
		this->inputLines->push_back(line);
	}
	return this->inputLines;
}

string FileOperation::writeLine()
{
	string line;
	return line;
}
vector<string> FileOperation::writeAll()
{ 
	vector<string> all;
	return all;
}

void FileOperation :: info()
{
	cout << "The input path is " << this->inputPath << endl;
	cout << "The output path is " << this->outputPath << endl;
}

void FileOperation::printInput()
{
	for (vector<string>::iterator iter = this->inputLines->begin();iter!=this->inputLines->end();iter++)
		cout << *iter << endl;
}

void FileOperation::printOutput()
{

}


