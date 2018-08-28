#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Text;

[Serializable]	
public ref struct savefile
{
public:
	int key;
	int type;
	double x;
	double y;
	double height;
	double width;
	double angle;
	int num;
};
