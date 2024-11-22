#pragma once
#include "Processor.h"
#include "Videoadapter.h"
#include "RAM.h"
#include "SSD.h"

class MainBoard 
{
	Processor processor;
	Videoadapter videoadapter;
	RAM ram;
	SSD ssd;
public:
	MainBoard();
	MainBoard(Processor processor, Videoadapter videoadapter, RAM ram, SSD ssd);
	void Start();
	void Stop();
	void ShowInfo();
	void AskInfo();
};
