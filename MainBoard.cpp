#include "MainBoard.h"

MainBoard::MainBoard()
{
	processor = Processor();
	videoadapter = Videoadapter();
	ram = RAM();
	ssd = SSD();
}

MainBoard::MainBoard(Processor processor, Videoadapter videoadapter, RAM ram, SSD ssd)
{
	this->processor = processor;
	this->videoadapter = videoadapter;
	this->ram = ram;
	this->ssd = ssd;
}

void MainBoard::Start()
{
	cout << "MainBoard is starting" << endl;
}

void MainBoard::Stop()
{
	cout << "MainBoard is stopping" << endl;
}

void MainBoard::ShowInfo()
{
	processor.ShowInfo();
	videoadapter.ShowInfo();
	ram.ShowInfo();
	ssd.ShowInfo();
}

void MainBoard::AskInfo()
{
	processor.AskInfo();
	videoadapter.AskInfo();
	ram.AskInfo();
	ssd.AskInfo();
	MainBoard mainboard(processor, videoadapter, ram, ssd);
}
