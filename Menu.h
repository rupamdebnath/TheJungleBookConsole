#include "Player.h"
using namespace std;

//creating global pointer objects for players
unique_ptr<Player> player1{ new Mowgli(30,100)};
unique_ptr<Player> player2{ new Mowgli(30,100)};


class Menu
{
  bool Vchoice;  
  public:
  //function to display the Intro to the game
  void DisplayIntro()
  {
    cout << "Hello friends!!!! I am King Louis, the Keeper of this Jungle! Welcome to the Legendary World of the Jungle Book!! This is a 2 player game, so make sure you are sitting there with your partner in crime!!!" << endl;
    sleep(3);
    cout << "Everyone gets certain base health and base damage depending on the type of character, average is 20 and 100 respectively. Healing is an important ability that helps you regain some random value of health, and subsequently the characters with higher healing ability can heal in the greater value range, and characters with higher damaging ability can have damaging numbers in the higher value range and vice versa." << endl;
    sleep(5);
    cout << "Special Ability can be activated every third turn only, each character has one.\nFinally, if you make an invalid selection such as try using special ability on an invalid turn or type in any other random number for the selection, you lose a turn, so be careful to make a valid selection and count your turns." << endl;
    sleep(5);
    cout << "Type the number and hit enter to choose the type of character you want to become, there are five types:" << endl;

    cout << "1.";
    cout << "Mowgli" << endl;    
    cout << "   -  -" << endl;
    cout << "    | " << endl;
    cout << "   \\_/ " << endl;
    cout << "   *** " << endl;
    cout << "  *****" << endl;

    cout << "\\*******/" << endl;
    cout << "  ****" << endl;
    cout << "_**  **_" << endl;

    cout << "Base damage - 30" << endl;
    cout << "Base Health - 100, Base healing - 10 to 20" << endl;  
    cout << "Special ability - Can throw knives as a ranged weapon dealing additional 50-70 damage" << endl;  
    cout << "*******************************************************************\n\n" << endl;
    sleep(3);
    cout << "2.";
    cout << "Bagheera" << endl;    
    cout << "  <-> <->" << endl;
    cout << "     ^ " << endl;
    cout << "   {^^^} " << endl;
    cout << "    *** " << endl;
    // cout << " ******" << endl;
    // cout << "  ****" << endl;
    cout << " _**  **_" << endl;

    cout << "Base damage - 20" << endl;
    cout << "Base Health - 100, Base healing - 10 to 30" << endl;  
    cout << "Special ability - Can pounce from the trees dealing additional of 10-20 damage every third turn, also healing himself by 5-10" << endl;  
    cout << "*******************************************************************\n\n" << endl;
    sleep(3);
    cout << "3.";
    cout << "Baloo" << endl;    
    cout << "   ^^ ^^" << endl;
    cout << "   ``^`` " << endl;
    cout << "    {O} " << endl;
    cout << "   <***> " << endl;
    // cout << " ******" << endl;
    // cout << "  ****" << endl;
    cout << " _**  **_" << endl;

    cout << "Base damage - 20" << endl;
    cout << "Base Health - 200, Base healing - 10 to 20" << endl;  
    cout << "Special ability - Can eat honey from the trees and heal an additional 20-30 every third turn" << endl;  
    cout << "*******************************************************************\n\n" << endl;
    sleep(3);
    cout << "4.";
    cout << "Sher Khan" << endl;    
    cout << "  <-> <->" << endl;
    cout << "    ~^~ " << endl;
    cout << " __[^^^]__ " << endl;
    cout << "  /[vvv]\\" << endl;
    // cout << " ******" << endl;
    // cout << "  ****" << endl;
    cout << " _**  **_" << endl;

    cout << "Base damage - 30" << endl;
    cout << "Base Health - 150, Base healing - 10 to 30" << endl;
    cout << "Special ability - Slashing strike with Claws from the bushes, dealing damage of 40-80 every third turn" << endl;
    cout << "*******************************************************************\n\n" << endl;
    sleep(3);
    cout << "5.";
    cout << "Hathi" << endl;
    cout << "|\\         /|" << endl;    
    cout << "| [-^^ ^^-] |" << endl;
    cout << "|/   ~^~   \\|" << endl;
    cout << "     | |" << endl;
    cout << "     | |" << endl;
    cout << "     | |" << endl;
    cout << "     \\ \\_ / /" << endl;
    cout << "      \\____/" << endl;      
    cout << "Base damage - 20" << endl;
    cout << "Base Health - 220, Base healing - 10 to 20" << endl;
    cout << "Special ability - Using his powerful tusks, Hathi can do a lot of damage 50-60 to his opponent but his tusk can harm himself as well in the process inflicting 20-40 damage.." << endl;  
    cout << "*******************************************************************\n\n" << endl;
  }

  //function to get the Character Choice as input from user
  void GetCharacterChoice(int _choice, int _order)
  {
    switch(_choice)
    {
      case 1:
      if(_order == 1)        
      player1 = make_unique<Mowgli>(30,100);        
      else if (_order == 2)
      player2 = make_unique<Mowgli>(30,100);
      break;

      case 2:
      if(_order == 1)        
      player1 = make_unique<Bagheera>(20,100);        
      else if (_order == 2)
      player2 = make_unique<Bagheera>(20,100);
      break;

      case 3:
      if(_order == 1)
      player1 = make_unique<Baloo>(20,200);
      else if(_order == 2)
      player2 = make_unique<Baloo>(20,200);
      break;

      case 4:
      if(_order == 1)
      player1 = make_unique<SherKhan>(30,150);
      else if(_order == 2)
      player2 = make_unique<SherKhan>(30,150);
      break;

      case 5:
      if(_order == 1)
      player1 = make_unique<Hathi>(20,220);
      else if(_order == 2)
      player2 = make_unique<Hathi>(20,220);
      break;
    }
  }

  //function to display statistics for both players
  void DisplayStats()
  {
    cout << "Stats of Player 1" << " AKA " << player1->getClassType() << endl;
    cout << "------------------" << endl;        
    cout << "Health: " << player1->getHealth() << endl;  
    cout << "Damaging ability: " << player1->getDamage() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Stats of Player 2" << " AKA " << player2->getClassType() << endl;
    cout << "------------------" << endl;        
    cout << "Health: " << player2->getHealth() << endl;
    cout << "Damaging ability: " << player2->getDamage() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "-----------------------------------------" << endl;
  }

};
