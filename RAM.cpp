#include "RAM.h"

RAM::RAM()
{
	capacity = 0;
	type = "No type";
}

RAM::RAM(int capacity, string type) :capacity(capacity), type(type) {}

void RAM::ShowInfo()
{
	cout << "RAM : : " << capacity << " GB" << endl;
	cout << "Type : " << type << endl;
}

void RAM::AskInfo()
{
	cout << "Enter capacity of RAM: ";
	cin >> capacity;
	cout << "Enter type of RAM: ";
	cin >> type;
}
