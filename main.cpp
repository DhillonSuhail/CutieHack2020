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
cout << "The year is 2020..." << endl;
cout << "The Coronavirus disease has the world quarantined." << endl; 
cout << "DoorDash orders are at an all-time high. You, as a Dasher, have to deliver the food to the customer with perfection... " << endl;
cout << "but in doing so, you face many life-threatening obstacles." << endl;
    
    srand(time(0));
    
    while (hp > 0)
    {
        if (alleyEncounter()==0)
        {
            break;
        }
        
    }
cout << "You have not reached the customer satisfaction. 👺" << endl;
    return 0;
}