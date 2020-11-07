#include <iostream>
#include "combat.h"
#include "encounters.h"
using namespace std;

int str = 10;
int dex = 10;
int wis = 10;
int hp = 50;

int main() {

    while (hp > 0)
    {
        alleyEncounter();
        hp = 0;
    }

    return 0;
}