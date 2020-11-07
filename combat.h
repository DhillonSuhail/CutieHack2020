#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

class Combat
{
    int enemyhp;
    int enemystr;
    int enemydex;
    int enemywis;

    srand(time(0));

    enemyhp = 10 + (rand() % 5) - 2);
};