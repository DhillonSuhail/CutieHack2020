int str = 10;
int dex = 10;
int wis = 10;
int hp = 50;
int numEncounters = 0;
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;
#include "combat.h"
#include "encounters.h"


int main() {
cout << "The year is 2020..." << endl;
cout << "The Coronavirus disease has the world quarantined." << endl; 
cout << "DoorDash orders are at an all-time high. You, as a Dasher, have to deliver the food to the customer with perfection... " << endl;
cout << "But in doing so, you face many life-threatening obstacles." << endl;
cout << endl; 
    
    srand(time(0));
    int encounter = 0;

    while (hp > 0)
    {
        encounter = (rand() % 4) + 1;

        if (encounter == 1)
        {
            if (alleyEncounter()==0)
            {
                break;
            }
        }
        
        else if (encounter == 2)
        {
            if (hitByCar()==0)
            {
                break;
            }
        }

        else if (encounter == 3)
        {
            if (lost()==0)
            {
                break;
            }
        }

        else if (encounter == 4)
        {
            if (approachedByAntiMaskers()==0)
            {
                break;
            }
        }
        
        numEncounters++;

        if (numEncounters >= 10)
        {
            break;
        }
    }

    if (numEncounters >= 10)
    {
        cout << "You have successfully delivered the order." << endl;
    }
    else
    {
        cout << "You have not reached the customer satisfaction. " << endl;
    }
    return 0;
}