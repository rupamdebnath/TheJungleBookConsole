#include <iostream>
#include "Menu.h"

class PlayGame
{ 
  int playerchoice;
  char _CclassType;

  public:
  void DisplayQuestion(string playername)
  {
    cout << "What do you want to do? " << playername << endl;
    cout << "1.Normal Attack 2.Normal heal 3.Special ability 4.Quit" << endl;
  }

  //switch case to get the player choices for all 4 options and calculate health and damage respectively
  void RunLogic(int playerchoice, int player_number, int player_turn, string _classType)
  {
    if (_classType == "Mowgli")
    _CclassType = 'M';
    else if (_classType == "Bagheera")
    _CclassType = 'B';
    else if (_classType == "Baloo")
    _CclassType = 'O';
    else if (_classType == "SherKhan")
    _CclassType = 'S';
    else if (_classType == "Hathi")
    _CclassType = 'H';
    switch(playerchoice)
    {
      case 1:
      if (player_number == 2)
      player1->TakeDamage(player2->getDamage());
      else
      player2->TakeDamage(player1->getDamage());
      break;

      case 2:
      if (player_number == 2)
      player2->RestoreHealth(player2->getHealValue());   
      else 
      player1->RestoreHealth(player1->getHealValue());    
      break;

      case 3:
      if (player_turn%3 != 0)
      { 
        cout << "Invalid move, Only on every third turn you get the special ability!" << endl;
        cout << " Unfortunately you lose this turn! " << endl;
        sleep(1);
        cout << "^ ^" << endl;
        cout << " ^ " << endl;
        sleep (1);
        break;
      }
      if (player_number == 2)
      {
        switch(_CclassType)
        {
          case 'M':
          player2->SpecialAbility();
          player1->TakeDamage(mowgli_sp.getValue());          
          break;

          case 'B':
          player2->SpecialAbility();
          player2->RestoreHealth(bagheera_heal.getValue());
          player1->TakeDamage(bagheera_sp.getValue());
          break;

          case 'O':
          player2->SpecialAbility();
          player2->RestoreHealth(baloo_sp.getValue());
          break;          
  
          case 'S':
          player2->SpecialAbility();
          player1->TakeDamage(sher_sp.getValue());
          break;

          case 'H':
          player2->SpecialAbility();
          player2->TakeDamage(halthi_self.getValue());
          player1->TakeDamage(hathi_sp.getValue());
          break;
        }
      }
      else  if (player_number == 1)
      {
        switch(_CclassType)
        {
          //if player is Mowgli
          case 'M':
          player1->SpecialAbility();
          player2->TakeDamage(mowgli_sp.getValue());
          break;

          //if player if Bagheera
          case 'B':
          player1->SpecialAbility();
          player1->RestoreHealth(bagheera_heal.getValue());
          player2->TakeDamage(bagheera_sp.getValue());  
          break;

          //if player is Baloo
          case 'O':
          player1->SpecialAbility();
          player1->RestoreHealth(baloo_sp.getValue());
          break;   

          //if player is SherKhan
          case 'S':
          player1->SpecialAbility();
          player2->TakeDamage(sher_sp.getValue());
          break;

          //if player is Hathi
          case 'H':
          player1->SpecialAbility();
          player2->TakeDamage(hathi_sp.getValue());
          player1->TakeDamage(halthi_self.getValue());
          break;      
        }
      }      
      break;

      //quit option
      case 4:        
      break;

      //default invalid option
      default:
      cout << "Invalid selection, you lose this turn.." << endl;
      sleep(1);
      cout << "^ ^" << endl;
      cout << " ^ " << endl;
      sleep (1);
      break;
    }
  }
};
