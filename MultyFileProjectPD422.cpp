#include <iostream>
#include <vector>
#include "MainBoard.h"
using namespace std;



int main()
{
	MainBoard mainboard;
	//mainboard.Start();
	//.ShowInfo();
	//mainboard.Stop();

	//cout << "************************************" << endl;
	MainBoard myBoard;
	myBoard.AskInfo();
	//myBoard.ShowInfo();
	//cout << "************************************:" << endl;
	MainBoard myBoard2;
	myBoard2.AskInfo();
	//myBoard2.ShowInfo();
	//cout << "************************************:" << endl;

	vector <MainBoard> mainboards;
	mainboards.push_back(myBoard);
	mainboards.push_back(mainboard);
	mainboards.push_back(myBoard2);


	for (int i = 0; i < mainboards.size(); i++)
	{
		mainboards[i].ShowInfo(); 
		cout << "************************************:" << endl;
	}
	
	for (auto elem : mainboards)
	{
		elem.ShowInfo();
	}



}
