int str = 10;
int dex = 10;
int wis = 10;
int hp = 50;
#include <iostream>
#include "combat.h"
#include "encounters.h"
using namespace std;


int main() {
cout << "The year is 2020, the Coronavirus disease has the world quarantined.  DoorDash orders are at an all-time high. You as a Dasher have to deliver the food to the customer with perfection, but in doing so, you face many life-threatening obstacles." << endl;
    while (hp > 0)
    {
        alleyEncounter();
        hp = 0;
    }

    return 0;
}