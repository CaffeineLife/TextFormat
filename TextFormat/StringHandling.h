#pragma once
#include "Classes.h"
#include "Common.h"

class StringHandling
{
public:
	static vector<string>* split(const string& str);

protected:
	static vector<string>* initialBuffer();

private:
	static vector<string> bufferArray;
};
