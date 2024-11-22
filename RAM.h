#pragma once
#include <iostream>
using namespace std;


class RAM 
{
	int capacity;
	string type;
public:
	RAM();
	RAM(int capacity, string type);
	void ShowInfo();
	void AskInfo();
};