#include <iostream>
using namespace std;
//int hp =main.hp; 
string input;

void alleyEncounter() {

 cout << "You have decided to take a short cut to reduce the delivery time..."<< endl;
    cout << "THE SKETCHY ALLEY WAY" << endl;
    cout << "In the alley, you are faced with a theif and are forced to make a life or death decision..." << endl;
    cout << "Do you:" << endl;
    cout << " A) Face the theif head-on in a fight!" << endl;
    cout << " B) Attempt to run away!" << endl;
    cout << " C) Surrender your wallet!" << endl;

    cin >> input;

    Combat obj;
    obj.initializeCombat();


}
    







/*
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};
*/