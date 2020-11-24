#pragma once
#include "Basic Includer.h"
#include "make song.h"
#include "make album.h"

int SongMenu() {
	Line();
	cout << "Song Menu\n";
	Line();
	cout << "|1| - Song\n";
	cout << "|2| - Album\n";
	cout << "|3| - Back\n";
	Line();
input:
	cout << sUsername << ": ";
	cin >> iUserInput;
	switch (iUserInput)
	{
	case 1:
		system("cls");
		Song();
	case 2:
		system("cls");
		Album();
	case 3:
		system("cls");
		return 1;
	default:
		cout << DefaultError << endl;
		goto input;
	}
	return 1;
}