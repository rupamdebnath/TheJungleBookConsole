#include <unistd.h>
#include "Toss.h"
//#include "Menu.h"
#include "PlayGame.h"
using namespace std;

int player1_turn = 0, player2_turn = 0;
int main() 
{
  Menu intro;    
  int tossChoice;
  int player1_character;
  int player2_character;
  int player1_choice;
  int player2_choice;
  intro.DisplayIntro();

  player1->setPlayerName(1);   

  string player1_name = player1->getPlayerName();
  
  cout << player1_name << ", Nice to meet you" << ". Please forgive me if I pronounce it incorrectly, I am still learning you know :)" << endl;

  do
  {
    cout << "Please select your character for the game" << endl;
    cin >>  player1_character;
    if (player1_character >5 || player1_character<1)
    cout << "Please enter a valid option from 1 to 5" << endl;
  }while(player1_character >5 || player1_character<1);

  intro.GetCharacterChoice(player1_character, 1);

  player2->setPlayerName(2);

  string player2_name = player2->getPlayerName();
  
  cout << player2_name << ", Pleased to meet you too!! " << player2_name << ". Please forgive me if I repeat what I am saying, I am still learning you know :)" << endl;

  do
  {
    cout << "Please select your character for the game" << endl;
    cin >>  player2_character;
    if (player1_character >5 || player1_character<1)
    cout << "Please enter a valid option from 1 to 5" << endl;
  }while(player1_character >5 || player1_character<1); 

  intro.GetCharacterChoice(player2_character, 2);

  cout << "The toss begins.., " << player2_name << ", You get to choose for the toss, Type 0 for Tails - type 1 for Heads and hit enter!!" << endl;
  cin >> tossChoice;
  
  Toss toss(player1_name, player2_name, tossChoice);
  bool winner = toss.TossTheCoin();
  //if (winner)player2 gets the choice else player 1

  //calling the PlayGame Object that runs the logic for calculating the health and damage values
  PlayGame play; 

  if (winner)
  {
    do
    {
      intro.DisplayStats();
      play.DisplayQuestion(player2_name);
      cin >> player2_choice;
      player2_turn ++;
      play.RunLogic(player2_choice, 2, player2_turn, player2->getClassType());
      if(player1->getHealth() < 1 || player2->getHealth() < 1)
      break;           

      intro.DisplayStats();
      play.DisplayQuestion(player1_name);
      cin >> player1_choice;
      player1_turn ++;
      play.RunLogic(player1_choice, 1, player1_turn, player1->getClassType());
      if(player2->getHealth() < 1 || player1->getHealth() < 1)
      break;        
    }while(player1_choice != 4 && player2_choice != 4 && (player1->getHealth() > 0 && player2->getHealth() > 0));
    //keep playing the game until either player chooses option 4 or either player's health becomes 0
    winner = false;
  }
  else
  {
    do
    {
      intro.DisplayStats();
      play.DisplayQuestion(player1_name);
      cin >> player1_choice;
      player1_turn ++;
      play.RunLogic(player1_choice, 1, player1_turn, player1->getClassType()); 
      if(player1->getHealth() < 1 || player2->getHealth() < 1)
      break;        

      intro.DisplayStats();
      play.DisplayQuestion(player2_name);
      cin >> player2_choice;
      player2_turn ++; 
      play.RunLogic(player2_choice, 2, player2_turn, player2->getClassType());
      if(player2->getHealth() < 1 || player1->getHealth() < 1)
      break;        
    }while(player1_choice != 4 && player2_choice != 4 && (player1->getHealth() > 0 && player2->getHealth() > 0));    

      winner = false;
  }
  intro.DisplayStats();
  if (player1->getHealth() <= 0)
  {
    cout << "Congratulations " << player2_name << "!!! You have won, successfully defeating " << player1_name << endl;
  } 
  else if (player2->getHealth() <= 0)
  {
    cout << "Congratulations " << player1_name << "!!! You have won, successfully defeating " << player2_name << endl;
  }
  if (player1_choice == 4 || player2_choice == 4)
  cout << "You have quit the game!" << endl; 

  cout << "Thank you for playing this game, both of you. Till next time. Cheers and Have a great day!! Remember you can run this again anytime to play again :):):)" << endl;
  
  return 0;
}