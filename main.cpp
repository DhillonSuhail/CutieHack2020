int str = 10;
int dex = 10;
int wis = 10;
int hp = 50;
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include "combat.h"
#include "encounters.h"
using namespace std;


int main() {

    while (hp > 0)
    {
        alleyEncounter();
        hp = 0;
    }

    return 0;
}