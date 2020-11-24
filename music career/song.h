#pragma once
#include "Basic Includer.h"
#include "make song.h"
#include "make album.h"

int SongMenu() {
	cout << "1. Song\n";
	cout << "2. Album\n";
	cin >> iUserInput;
	switch (iUserInput)
	{
	case 1:
		Song();
	case 2:
		Album();
	default:
		break;
	}
	return 1;
}