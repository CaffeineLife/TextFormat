#include "StringHandling.h"

vector<string> StringHandling::bufferArray = vector<string>(9);

vector<string>* StringHandling::initialBuffer()
{
	bufferArray.clear();
	bufferArray.resize(9);
	return &bufferArray;
}

vector<string>* StringHandling::split(const string& str)
{
	int i = 0;
	stringstream string_temp;
	string word;

	StringHandling::initialBuffer();
	string_temp << str;
	while (string_temp >> word)	bufferArray[i++] = word;

	return &bufferArray;
}

