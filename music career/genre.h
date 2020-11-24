#pragma once
#include "Functions.h"
#include "Basic Includer.h"
//#include "game.h"


int Genre() {
start:
	cout << "GENRE SETUP\n";
	Line();
	cout << "1. Rock/Alternative Rock\n";
	cout << "2. Rap/Trap\n";
	cout << "3. Pop\n";
	cout << "4. Back\n";
	Line();
	cin >> iUserInput;
	switch (iUserInput)
	{
	case 1:
		bRock = true;
	case 2:
		cout << "Not yet supported\n";
		goto start;
	case 3:
		cout << "Not yet supported\n";
		goto start;
	case 4:
		system("cls");
		return 1;
		//Menu();
	default:
		system("cls");
		cout << "|CONSOLE| " << DefaultError << "\n";
		goto start;
	}
	return 1;
}