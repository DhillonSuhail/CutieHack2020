#include <iostream>
using namespace std;
//int hp =main.hp; 
string input;

int alleyEncounter() {
    cout << "You have decided to take a short cut through an alleyway to reduce the delivery time..."<< endl;
    cout << "In the alley, you are faced with a thief who is demanding your wallet or your life!" << endl;
    cout << "Do you:" << endl;
    cout << " 1. Face the thief head-on in a fight!" << endl;
    cout << " 2. Attempt to run away!" << endl;
    cout << " 3. Surrender your wallet and try to leave." << endl;

    cin >> input;

    while (input != "1" && input != "2" && input != "3")
        {
          cout << "Enter 1, 2, or 3" << endl;
          cin >> input;
        }
     
    

    if (input == "1")
    {
      Combat obj;
      if (obj.initializeCombat() == 1)
      {
        cout << "You beat him!! Move on! " << endl;
        str++;
        
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
        dex++;
        
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
        cout << "You beat him and got your wallet back!";
        }
        else
        {
          return 0;
        }
      }
      else
      {
        cout << "You got away safetly!" << endl;
        wis++;
      }
      }
      return 1;
  }

  int hitByCar(){
    int chance = rand() % 10 + 1;
    cout << "As you continue your journey, you begin to lose focus until a honk snaps you from your daydreaming." << endl;
    cout << "As you snap back to attention you realize that a car is speeding right towards you!"<< endl;
    cout << endl;
    cout << "Do you..."<< endl;
    cout << "1. Attempt to dodge the car!"<< endl;
    cout << "2. Take the hit!" << endl;
    cin >> input;
    while (input != "1" && input != "2")
    {
      cout << "Enter 1 or 2" << endl;
      cin >> input;
    }
    
    if (input == "1")
    {
      if (chance <= 5)
      {
        cout << "You barely dodged it!" << endl;
        dex++;
      }
      else
      {
        hp = hp/2;
        cout << "Ouch, you survived but that'll leave a mark, you lose half your health" << endl;
      }
    }
    else if (input == "2")
    {
      if (chance <= 5)
      {
        cout << "Brave but you are severelly hurt";
        hp = hp/3;
      }
      else
      {
        cout << "The car hits you dead on, everything fades to black." << endl;
        return 0;
      }
    }
    return 1;
  }

int lost() {
  cout << "Along the way, you have lost your sense of direction..." << endl;
  cout << "You see a stranger and want to ask for directions..." << endl; 
  cout << "but there is a possibility that they could have coronavirus!" << endl;
  cout << "Do you.." <<endl;
  cout << "1. Risk getting covid and ask them" <<endl;
  cout << "2. Risk wandering around to get to your destination"<< endl;
cin >> input;

while (input != "1" && input != "2")
    {
      cout << "Enter 1 or 2" << endl;
      cin >> input;
    }

if (input== "1")
{
  int chance = rand() % 10 + 1;
  if (chance <=5)
  {
    cout << "You catch the coronavirus and become sick" << endl;
    hp =hp-5;
    dex = dex-2;
  }
  else
  {
    cout << "You find your way back to where you were going" << endl;
    wis = wis +2;
  }
}
else
{
  int chance = rand() % 10 + 1;
  if (chance == 1)
  {
    cout << "You happen upon a gang who wants to fight you" << endl;
    Combat obj;
    if (obj.initializeCombat() == 1)
    {
      cout << "You beat them all up and run!";
    }
      else
    {
      return 0;
    }
  }
  
  else if (chance <=5)
  {
    cout << "You eventually make your way back but the food goes cold" << endl;
    wis = wis-2;
  }
  else
  {
    cout << "You found your way!" << endl;
    wis = wis +2;
  } 
}
  return 1; 
}


int approachedByAntiMaskers() {
  cout<< "A large group of people are approaching you." << endl;
  cout << "As you draw nearer you realize that none of the people are wearing a mask!" << endl;
  cout<< endl;
  cout<< "Do you..." << endl;
  cout << "1. Run away!"<<endl;
  cout << "2. Attempt to push through the herd!"<<endl; 

cin >> input;

while (input != "1" && input != "2")
    {
      cout << "Enter 1 or 2" << endl;
      cin >> input;
    }

if (input == "1")
{
  cout << "You get away but drop half your food; no tip for you" << endl;
  dex = dex-5;
}
else
{
  int chance = rand() % 10 + 1;
  
  if(chance == 1){
    cout << "One member of the crows sees that you are wearing a mask and becomes infuriated." << endl;
    cout << "As you are stuck in the crowd, there is little you can do that accept as he challenges you to a fight." << endl;

    Combat obj;
      if (obj.initializeCombat() == 1)
      {
        cout << "As he tumbles to the floor the crowd allows you topass without another word.";
      }
       else
      {
          return 0;
      }
  }
  else if (chance <=8){
    cout << "You catch the coranavirus."<< endl;
    hp = hp-10;
    if (hp <= 0)
    {
      return 0;
    }
  }
  return 1;
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