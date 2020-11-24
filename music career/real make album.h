#pragma once
#include "Basic Includer.h"
#include "Functions.h"

int AlbumMaker() {
	start:
	Line();
	cout << "Welcome to Album maker 3000! better than 2000 that's for sure! here you'll make albums instead of seeing them\n";
	Line();
	cout << "|1| - Create\n";
	cout << "|2| - Edit\n";
	cout << "|3| - Back\n";
	Line();
	input:
	cout << sUsername << ": ";
	cin >> iUserInput;
	if (iUserInput == 2) {
		cout << "Game: Feature not available\n";
		//int1 = 0; // this is the counter of the lines of the character.mc file, right now it's reading line 0, which is nothing
		//while (int1 != 1 && getline(In_character, string1)) //what this while is doing is basically looking line by line from 0 to the number you put after "!=" (which is the line you want to read), so it's going to read line zero (which is nothing) and then line 1 (which is what i want to read) and print out, so the line read will be put in a temporary string called string1
		//{
		//	++int1; //this is going to 1 more line to the counter, this is what makes it go from 0 to 1 and so on (in this case only 0 to 1)
		//}

		//if (int1 == 1) {

		//}
		//goto input;
	}
	else if (iUserInput == 1)
	{
		cout << "Name of the album: ";
		cin >> sUserInput;
		ifstream In_albums("albums.mc");
		In_albums >> string1;
		ofstream Out_albums ("albums.mc");
		Out_albums << string1 << endl << sUserInput << endl;
		Out_albums.close();
		In_albums.close();
		cout << "Album " << sUserInput <<" made\n";
		goto input;
	}
	else if (iUserInput == 3) {
		system("cls");
		return 1;
	}
	else {
		cout << DefaultError << endl;
		goto input;
	}

	return 1;
}