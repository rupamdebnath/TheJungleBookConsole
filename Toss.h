#include <iostream>
#include "Random.h"

using namespace std;

class Toss
{

  string name1, name2;
  int playerChoice;

  public:
  Toss(string _name1, string _name2, int _playerChoice)
  {
    name1 = _name1;
    name2 = _name2;
    playerChoice = _playerChoice;
  }
  bool TossTheCoin()
  {
    //using random function for heads and tails tossing between both
    Random tossCoin(0,1);
    int value = tossCoin.getValue();
    if (value)
    {
        cout << "Throwing up in the air ...:" << endl;
        sleep(1);
        cout << "." << endl ;  
        sleep(1);
        cout << "." << endl ;
        sleep(1);
        cout << "." << endl ;
        cout << "Oh! In my hand now, shows: Heads" << endl;

    }    
    else
    {
        cout << "Chingling up in the air ...:" << endl;
        sleep(1);
        cout << "." << endl ;
        sleep(1);
        cout << "." << endl ;
        sleep(1);
        cout << "." << endl ;
        cout << "Oh! In my hand now, shows: Tails" << endl;
    }  

    if (playerChoice == value)
    {
        cout << "Go ahead, " << name2 << ", You won the toss, you get the first turn :)" << endl;
        return true;
    }
    else 
    {
        cout << "Sorry, " << name2 << ", You lost the toss! " << name1 << ", Congrats!! you get the first turn :)" << endl;
        return false;
    }

  }
};