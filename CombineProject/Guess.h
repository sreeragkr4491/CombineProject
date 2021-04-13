#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include <time.h>
#include <random>
#include<conio.h>
using namespace std;
#pragma once
class Guess
{
public:
    int ch;
    string strList[75] =
    {
     "about","above","abuse","actor","acute","admit","adopt","adult",
     "after","again","agent","agree","ahead","alarm","album","alert",
     "alike","alive","allow","alone","along","alter","among","anger",
     "began","begin","begun","being","below","civil","claim","class",
     "clean","drawn","dream","dress","drill","drink","drive","drove",
     "dying","error","event","every","flash","fleet","floor","fluid",
     "group","grown","guard","guess","hotel","house","index","inner",
     "input","issue","joint","jones","judge","known","stone","stood",
     "valid","value","video","virus","visit","vital","voice","write"

    };
    // total word

    int n = sizeof(strList) / (sizeof(strList[0]));
    int score = 0;
    string guess;

    int check();
};
