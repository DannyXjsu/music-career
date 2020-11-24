#pragma once
#include "Basic Includer.h"
#include "Functions.h"
#include "real make album.h"

int Album() {
start:
	ifstream In_albums("albums.mc");
	cout << "Welcome to Album Maker 2000! Here you'll see a list of albums you've made and create and even delete albums!\n";
	Line();
	if (In_albums.is_open())
	{
		while (getline(In_albums, line))
		{
			cout << line << endl;
		}
		In_albums.close();
		
	}
		Line();
		cout << "1. Make Album\n";
		cin >> iUserInput;
		switch (iUserInput)
		{
		case 1:
			system("cls");
			AlbumMaker();
			goto start;
		default:
			break;
		}
	
		return 1;
}