#pragma once
#include "Basic Includer.h"
#include "Functions.h"

int Settings() {
	start:
	Line();
	cout << "|GAME SETTINGS|\n";
	Line();
	cout << "|1| - Delete save\n";
	cout << "|2| - Back\n";
	Line();
	input:
	cin >> iUserInput;
	switch (iUserInput)
	{
	case 1:
		start2:
		cout << "Are you sure you wanna delete all of you save files? there's no recovery after deleting everything\n";
		cout << "USE 'y' FOR YES AND 'n' FOR NO\n";
		cout << sUsername << ": ";
		cin >> char1;
		switch (char1)
		{
		case 'y':
			DeleteSave();
			cout << "The game now requires a restart, press any key and it will close the game\n";
			system("pause");
			exit(1);
		case 'n':
			system("cls");
			goto start;
		default:
			goto start2;
		}
	case 2:
		return 1;
	default:
		cout << DefaultError << endl;
		goto input;
	}
}