#include <iostream>
using namespace std;
//int hp =main.hp; 
string input;

int alleyEncounter() {
    cout << "You have decided to take a short cut to reduce the delivery time..."<< endl;
    cout << "THE SKETCHY ALLEY WAY" << endl;
    cout << "In the alley, you are faced with a thief and are forced to make a life or death decision..." << endl;
    cout << "Do you:" << endl;
    cout << " 1. Face the thief head-on in a fight!" << endl;
    cout << " 2. Attempt to run away!" << endl;
    cout << " 3. Surrender your wallet and try to leave." << endl;

    cin >> input;

    

    if (input == "1")
    {
      Combat obj;
      if (obj.initializeCombat() == 1)
      {
        cout << "You beat him!! Move on! " << endl;
      }
      else{
         return 0;
      }
      
    }
    else if (input == "2")
    {
      //cout << /*something snarky idk*/;
      int chance = rand() % 10 + 1;
      if (chance <= 3)
      {
        cout << "You weren't fast enough, you got caught! " << endl;
        Combat obj;
        if (obj.initializeCombat() == 1)
      {
        cout << "You beat him!! Move on! " << endl;
      }
      else{
         return 0;
      }
      }
      else
      {
        cout << "You got away! " << endl;
      }
    }
    else if (input == "3")
    {
      
      int chance = rand() % 10 + 1;
      if (chance <= 3)
      {
        cout << "He still wants to fight you! " << endl;
        Combat obj;
        if (obj.initializeCombat() == 1)
      {
        cout << "You beat him and got your wallet back!"
      }
      else
      {
        return 0;
      }
      
    
 
      
    }
    
    




    
    


}
    







/*
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};
*/