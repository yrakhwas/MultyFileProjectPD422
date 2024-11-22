#pragma once
#include <iostream>
using namespace std;


class Videoadapter
{
	string brand;
	string model;
	int memory;
	int power;
public:
	Videoadapter();
	Videoadapter(string brand, string model, int memory, int power);
	void ShowInfo();
	void AskInfo();
};