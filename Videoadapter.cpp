#include "Videoadapter.h"

Videoadapter::Videoadapter()
{
	brand = "No brand";
	model = "No model";
	memory = 0;
	power = 0;
}

Videoadapter::Videoadapter(string brand, string model, int memory, int power) :brand(brand), model(model), memory(memory), power(power) {}

void Videoadapter::ShowInfo()
{
	cout << "Videoadapter : " << brand << " " << model << endl;
	cout << "Memory : " << memory << " GB" << endl;
	cout << "Power : " << power << " W" << endl;
}

void Videoadapter::AskInfo()
{
	cout << "Enter brand of videoadapter: ";
	cin >> brand;
	cout << "Enter model of videoadapter: ";
	cin >> model;
	cout << "Enter memory of videoadapter: ";
	cin >> memory;
	cout << "Enter power of videoadapter: ";
	cin >> power;
}
