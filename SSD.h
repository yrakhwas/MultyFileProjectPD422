#pragma once
#include <iostream>
using namespace std;


class SSD
{
	int capacity;
	string type;
public:
	SSD();
	SSD(int capacity, string type);
	void ShowInfo();
	void AskInfo();
};