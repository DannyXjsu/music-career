// music career.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "game.h"
#include "song.h"
#include "Settings.h"

int main()
{
    cout << "Music Career Game Version Alpha 0.2\n";
    cout << "Loading...\n";
    ifstream In_game("game.mcb");
    In_game >> bFirsTime;
    In_game.close();
    cout << "Loaded!\n";
    cout << "Warning: This is an unstable version, bugs and crashes can happen at any time\n";
    cout << "Warning: User input uses integer variable to store its value, using an invalid integer input will result in a crash\n";
    cout << "Warning: This game has special commands enabled, so using the '0' on certain places you'll be able to skip, like the character creation\n";
    if (bFirsTime == true) {
        Menu();
    }
    system("cls");
    bFirsTime = false;
    ofstream Out_game("game.mcb");
    Out_game << bFirsTime;
    Out_game.close();
    cout << "Warning: Album names should NOT have spaces, use '_' or '-' as a space replacer, if you do use space the program will crash\n";
        system("pause");
        cout << "Creating game files...\n";
        /* ####################################################################--|WRITING/READING FILE HELP|--######################################################################
        *  #TO WRITE ALBUMS YOU SHOULD PUT AN ALBUM LINE BY LINE EXAMPLE: ALBUM1 GOES TO LINE 1 AND ALBUM2 GOES TO LINE 2 AND SO ON                                                #
        *  #TO READ ALBUMS YOU SHOULD READ LINE BY LINE                                                                                                                            #
        *  #                                                                                                                                                                       #
        *  #TO WRITE THE CHARACTER INFORMATION, THE FIRST LINE SHOULD BE THE CHARACTERS NAME, SECOND LINE SHOULD BE USERNAME, THIRD AGE, FORTH FOLLOWERS, FITH MONEY, SIXTH PLAYS  #
        *  #TO READ THE CHARACTER INFORMATION, READ LINE BE LINE, TO KNOW WHAT A LINE IS FOLLOW THE WRITING CHARACTER HELP                                                         #
        *  #                                                                                                                                                                       #
        *  #TO WRITE THE CHARACTER SKILLS, THE FIRST LINE SHOULD BE SINGING, SECOND MUSIC THEORY AND THIRD LYRICS FOR READING SHOULD BE THE SAME SEQUENCE                          #
        *  ####################################################################--|WRITING/READING FILE HELP|--######################################################################
        */
        ifstream In_character("character.mcs");
        if (!In_character.is_open()) {
            ofstream Out_character("character.mcs");
            Out_character << sName << endl;
            Out_character << sUsername << endl;
            Out_character.close();
        }

        int1 = 0; // this is the counter of the lines of the character.mc file, right now it's reading line 0, which is nothing
        while (int1 != 1 && getline(In_character, string1)) //what this while is doing is basically looking line by line from 0 to the number you put after "!=" (which is the line you want to read), so it's going to read line zero (which is nothing) and then line 1 (which is what i want to read) and print out, so the line read will be put in a temporary string called string1
        {
            ++int1; //this is going to add 1 more line to the counter, this is what makes it go from 0 to 1 and so on (in this case only 0 to 1)
        }

        if (int1 == 1) { //this checks if the line truly is line 1
            sName = string1; //if line is 1 then it will put the first line (which is the name of the player) to the variable
        }

        while (int1 != 2 && getline(In_character, string1)) // this is basically the above but for the next lines
        {
            ++int1; 
        }

        if (int1 == 2) {
            sUsername = string1;
        }
        In_character.close();

        //now it comes a chain into loading mci files (integer) which is a fucking pain, you can't read line by line when you use integer because the command getline is terrible, so you make a single line with the integer and get around the getline with reading the file and putting what's using the file into the integer

        ifstream In_age("character_age.mci");
        if (!In_age.is_open()) {
            ofstream Out_age("character_age.mci");
            Out_age << iAge;
            Out_age.close();
        }
        In_age >> iAge;
        In_age.close();

        ifstream In_followers("character_follower.mci");
        if (!In_followers.is_open()) {
            ofstream Out_followers("character_follower.mci");
            Out_followers << iFollowers;
            Out_followers.close();
        }
        In_followers >> iFollowers;
        In_followers.close();

        ifstream In_money("character_money.mci");
        if (!In_money.is_open()) {
            ofstream Out_money("character_money.mci");
            Out_money << iMoney;
            Out_money.close();
        }
        In_money >> iMoney;
        In_money.close();

        ifstream In_plays("character_plays.mci");
        if (!In_plays.is_open()) {
            ofstream Out_plays("character_plays.mci");
            Out_plays << iPlays;
            Out_plays.close();
        }
        In_plays >> iPlays;
        In_plays.close();

        ifstream In_sing("skills_sing.mci");
        if (!In_sing.is_open()) {
            ofstream Out_sing("skills_sing.mci");
            Out_sing << iSing;
            Out_sing.close();
        }
        In_sing >> iSing;
        In_sing.close();

        ifstream In_music("skills_music.mci");
        if (!In_music.is_open()) {
            ofstream Out_music("skills_music.mci");
            Out_music << iMusic;
            Out_music.close();
        }
        In_music >> iMusic;
        In_music.close();

        ifstream In_lyrics("skills_lyrics.mci");
        if (!In_lyrics.is_open()) {
            ofstream Out_lyrics("skills_lyrics.mci");
            Out_lyrics << iLyrics;
            Out_lyrics.close();
        }
        In_lyrics >> iLyrics;
        In_lyrics.close();

        //chain ends here ================================================================================================================================================================
        //ps: i know that the file reading system above is fucking terrible but it's the only way i know how to do it with integers and string and everything like that, there's no easy way that i know

        start:
        system("cls");
        CharacterInfo();
        cout << "1. Make a song/Album\n";
        cout << "2. My songs\n";
        cout << "3. Study\n";
        cout << "4. Buy\n";
        cout << "5. Settings\n";
        Line();
    input:
        cout << sUsername << ": ";
        cin >> iUserInput;
        switch (iUserInput)
        {
        case 1:
            system("cls");
            SongMenu();
            goto start;
        case 3:
            cout << "Studying is not supported yet\n";
            goto input;
        case 4:
            cout << "buying is not supported yet\n";
            goto input;
        case 5:
            system("cls");
            Settings();
        default:
            goto start;
        }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
