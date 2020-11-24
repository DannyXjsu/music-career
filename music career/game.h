#pragma once
#include "Basic Includer.h"
#include "Functions.h"
#include "Character.h"
#include "genre.h"

int Menu() {
	Line();
	cout << "WELCOME TO MUSIC CAREER THE GAME | VERSION ALPHA 0.2\n";
	cout << "INSTRUCTIONS: Choose a genre of music you wanna make, upgrade your equipment, your skills, gain fame, money and lots of other things\n";
	cout << "Enjoy!\n";
	Line();
	cout << "Enter any command to continue: ";
	cin >> iUserInput;
	if (iUserInput < 0) {
		iUserInput = 0;
	}
	if (iUserInput > 0) {
		iUserInput = 0;
	}
	system("cls");
start:
	cout << "MUSIC CAREER | VERSION ALPHA 0.2\n";
	Line();
	cout << "1. Set your character\n";
	cout << "2. Set your genre\n";
	cout << "3. Continue\n";
	Line();
	cout << "TIP: Choose the options by using the number on the given possibility\n";
	cout << sUsername << ": ";
	cin >> iUserInput;
	switch (iUserInput)
	{
	case 1:
		cout << "Loading character creation...";
		system("cls");
		Creation();
		goto start;
	case 2:
		cout << "Loading character creation...";
		system("cls");
		Genre();
		goto start;
	case 3:
		if ((bVisitedName == 1) && (bVisitedUsername == 1) && (bSetAge == 1)) {
			return 1;
		}
		else {
			system("cls");
			cout << "|GAME| You need to setup your character before continuing\n";
			goto start;
		}
	case 0:
		return 1;
	default:
		system("cls");
		cout << "|CONSOLE| " << DefaultError << "\n";
		goto start;
	}
	return 1;
}

