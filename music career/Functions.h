#pragma once

int iUserInput; //User input, used for cin mostly
string sUserInput; //string replacer for iUserInput
string sUsername = "@user3549087"; //username of the player
string sName = "Daniel"; //the players name
int iAge = 12; //the players age
string DefaultError = "INPUT ERROR! USE THE GIVEN NUMBERS"; //Default error message, should be use as a print out, prints: "INPUT ERROR! USE THE GIVEN NUMBERS"
bool bVisitedName = false; //Boolean used to check if the player already set his name in the character setup
bool bVisitedUsername = false; //Boolean used to check if the player already set his username in the character setup
bool bSetAge = false; //Boolean used to check if the player already set his age in the character setup
bool bSetGenre = false; //Boolean used to check if the player already set his genre in the character setup (this feature is likely to get removed)
bool bRock = false; //this feature is likely to get removed
bool bRap = false; //this feature is likely to get removed
bool bPop = false; //this feature is likely to get removed
bool bFirsTime = true; //Booled used to check if this is the first time the player is initializing the game
int iFollowers = 0; //Amount of followers the player has
int iMoney = 0; //Amount of money the player has
int iPlays = 0; //Amount of plays the player has
int iSing = 0; //Amount of singing skill the player has
int iMusic = 0; //Amount of music theory skill the player has
int iLyrics = 0; //Amount of making lyrics skill the player has
string line; //string used to store lines when reading a file, can be used like string1
string string1; //it's a temporary string, store whatever you want, use it as if it was RAM memory
int int1 = 0; //it's a temporary integer, store whatever you want, use it as if it was RAM memory
int int2 = 0; //it's a temporary integer, store whatever you want, use it as if it was RAM memory
//stringstream sstream1; //it's a temporary string stream, store whatever you want, use it as if it was RAM memory
char char1; //it's a temporary char, store whatever you want, use it as if it was RAM memory

void Line() {
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
}

void CharacterInfo() {
	Line();
	cout << "|CHARACTER|" << endl << "NAME: " << sName << " | USERNAME: " << sUsername << " | AGE: " << iAge << endl;
	Line();
	cout << "|SKILLS|" << endl << "SINGING: " << iSing << " | MUSIC THEORY: " << iMusic << " | LYRICS: " << iLyrics << endl;
	Line();
	cout << "|FAME|" << endl << "FOLLOWERS: " << iFollowers << " | MONEY: " << iMoney << " | PLAYS: " << iPlays << endl;
	Line();
}

void DeleteSave()
{
	cout << "Deleting files...\n";
	remove("character.mcs");
	remove("character_age.mci");
	remove("character_follower.mci");
	remove("character_plays.mci");
	remove("character_money.mci");
	remove("game.mcb");
	remove("skills_sing.mci");
	remove("skills_music.mci");
	remove("skills_lyrics.mci");
	cout << "Files deleted!\n";
}