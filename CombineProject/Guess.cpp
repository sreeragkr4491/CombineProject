#include "Guess.h"
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include <time.h>
#include <random>
#include<conio.h>




int Guess::check()
{
    // for random number generator
    srand(time(NULL));


    // loop
    do
    {   // ranodom index
        int index = rand() % n;
        // random position
        int ch1 = rand() % 5;
        int ch2 = rand() % 5;
        // chekcing for same
        while (ch2 == ch1)
            ch2 = rand() % 5;

        string str = strList[index];
        string originalStr = str;


        //int n = originalStr.length();
        char hint[6];
        strcpy_s(hint, originalStr.c_str());




        // replacing with *
        str[ch1] = '*';
        str[ch2] = '*';
        // showing 
        cout << "word :  " << str << endl;
        cout << "One missing letter is :" << hint[ch1] << endl;
        cout << "\nEnter your word guess : ";
        cin >> guess;
        // checking for quit
        if (guess.compare("q") == 0)
        {
            cout << "\nYour total correct guess : " << score << endl;
            exit(0);
        }
        // winning condition
        if (guess.compare(originalStr) == 0)
        {
            cout << "\n     YAHOOO!!!!  Your Guess is correct.!!!!!\n";
            score += 10;
            cout << "Score : " << score << endl;
        }
        else
        {
            cout << "\n     UH-OH!!!! Your Guess is Incorrect.\n";
            cout << "Correct word : " << originalStr << endl;
            cout << "Score : " << score << endl;
            exit(0);
        }
    } while (1);
    // returning from main
    return 0;
}
