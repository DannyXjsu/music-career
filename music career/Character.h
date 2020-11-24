#pragma once
#include "Functions.h"
//#include "game.h"

int Creation() {
	start:
	cout << "CHARACTER SETUP | NAME: " << sName << " | USERNAME: " << sUsername << " | AGE: " << iAge << endl;
	Line();
	cout << "1. Set your name\n";
	cout << "2. Set your social media username\n";
	cout << "3. Set your age\n";
	cout << "4. Back\n";
	Line();
input:
	cout << "Enter command: ";
	if (iAge <= 0) {
		system("cls");
		cout << "|CONSOLE| AGE IS SET TO AN INVALID NUMBER!\n";
		iAge = 12;
		cout << "|CONSOLE| TO AVOID CRASHING, AGE WAS SET TO 12\n";
		goto start;
	}
	cin >> iUserInput;
	switch (iUserInput)
	{
	case 1:
		cout << "Name: ";
		cin >> sName;
		bVisitedName = true;
		system("cls");
		//cout << "|GAME| Name set to: " << sName << "\n";
		//goto input;
		goto start;
	case 2:
		cout << "Username: ";
			cin >> sUsername;
			sUsername = "@" + sUsername;
			bVisitedUsername = true;
			system("cls");
		//cout << "|GAME| Username set to: " << sUsername << "\n";
		//goto input;
			goto start;
	case 3:
		cout << "Age: ";
		cin >> iAge;
		if ((iAge <= 12) || (iAge > 65)) {
			//system("cls");
			cout << "Warning: Age must have a minimum of 12 and a maximum of 65\n";
			bSetAge = false;
			iAge = 1;
			//Creation();
			goto input;
		}
		bSetAge = true;
		//out << "Age set to: " << iAge << "\n";
		system("cls");
		goto start;
		//goto input;
	case 4:
		system("cls");
		//Menu();
		return 1;
	default:
		system("cls");
		cout << "|CONSOLE| " << DefaultError << "\n";
		goto start;
	}
	return 1;
}