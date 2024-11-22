#pragma once
#include <iostream>
using namespace std;


class Processor
{
	string brand;
	string model;
	float rate;
	int corseCount;
public:
	Processor();
	Processor(string brand, string model, float rate, int corseCount);
	void ShowInfo();
	void AskInfo();
};