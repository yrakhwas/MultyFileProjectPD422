#include "Processor.h"

Processor::Processor()
{
	brand = "No brand";
	model = "No model";
	rate = 0;
	corseCount = 0;
}

Processor::Processor(string brand, string model, float rate, int corseCount)
{
	this->brand = brand;
	this->model = model;
	this->rate = rate;
	this->corseCount = corseCount;
}

void Processor::ShowInfo()
{
	cout << "Processor : " << brand << " " << model << endl;
	cout << "Rate : " << rate << " GHz" << endl;
	cout << "Cores : " << corseCount << endl;
}

void Processor::AskInfo()
{
	cout << "Enter brand of processor: ";
	cin >> brand;
	cout << "Enter model of processor: ";
	cin >> model;
	cout << "Enter rate of processor: ";
	cin >> rate;
	cout << "Enter cores count of processor: ";
	cin >> corseCount;
}
