#include "SSD.h"

SSD::SSD()
{
	capacity = 0;
	type = "No type";
}

SSD::SSD(int capacity, string type) :capacity(capacity), type(type) {}

void SSD::ShowInfo()
{
	cout << "SSD : : " << capacity << " GB" << endl;
	cout << "Type : " << type << endl;
}

void SSD::AskInfo()
{
	cout << "Enter capacity of SSD: ";
	cin >> capacity;
	cout << "Enter type of SSD: ";
	cin >> type;
}
