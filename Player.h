#include<iostream>
#include<memory>
//#include "Random.h"

using namespace std;

//random values for healing and special ability for Mowgli
Random mowgli_sp(50,70);
Random mowgli_heal(10,20);

//random values for healing and special ability for Bagheera
Random bagheera_sp(10,20);
Random bagheera_heal(10,30);

//random values for healing and special ability for Baloo
Random baloo_sp(20,30);
Random baloo_heal(10,20);

//random values for healing and special ability for Sher Khan
Random sher_sp(40,80);
Random sher_heal(10,20);

//random values for healing and special ability for Hathi
Random hathi_sp(50,70);
Random hathi_heal(5,10);
Random halthi_self(20, 40);
//Creating abstract class Player that will just be a template to hold the properties of different types of players that the users can become
class Player
{ 
  protected:
  string name;
  int health;
  int damage;
  int heal;  
  string type;
  
  public:
  virtual void TakeDamage(int _damage) = 0;  
  virtual void RestoreHealth(int _health) = 0;  
  virtual void SpecialAbility() = 0;
  //virtual void SpecialPower(int _damage) = 0;
  virtual ~Player(){};
  virtual int getDamage() = 0;
  virtual int getHealth() = 0;
  virtual int getHealValue() = 0;
  virtual string getClassType() = 0;

  void setPlayerName(int _playerOrder)
  {
    cout << "Player" << _playerOrder <<", what is your name?" << endl;
    cin >> name;
  }
  string getPlayerName()
  {
    return name;
  }
};

//Mowgli derived class
class Mowgli : public Player
{     
    public:
    Mowgli(int _damage, int _health)
    {
      damage = _damage;
      health = _health;      
    }
    void TakeDamage(int _damage)
    {
      health = health - _damage;
      cout << "Dealing physical damage" << endl;
      sleep(1);
      cout << "..**" << endl;
      sleep(1);
      cout << "***" << endl;
      sleep(1);
      cout << "****" << endl;
      sleep(1);
      // return health;
    }

    void RestoreHealth(int _health)
    {
      health = health + _health;
      cout << "Restoring health" << endl;
      sleep(1);
      cout << "++" << endl;
      sleep(1);
      cout << "++++" << endl;
      sleep(1);
      //return health;
    }

    void SpecialAbility()
    {
      cout << "Mowgli throws boomerang at the opponent.." << endl;
      sleep(1);
      cout << "~~>~~>" << endl;
      sleep(1);
      cout << "~~>~~>~~>~~>" << endl;
      sleep(2); 
    }

    int getHealth()
    {            
      return health;
    }
    
    int getDamage()
    {         
      return damage;
    }
    string getClassType()
    {
      type = "Mowgli";
      return type;
    } 

    int getHealValue()
    {
      return mowgli_heal.getValue();
    }
};

//Bagheera derived class
class Bagheera : public Player
{     
    public:
    Bagheera(int _damage, int _health)
    {
      damage = _damage;
      health = _health;      
    }
    void TakeDamage(int _damage)
    {
      health = health - _damage;
      cout << "Dealing physical damage" << endl;
      sleep(1);
      cout << "..**" << endl;
      sleep(1);
      cout << "***" << endl;
      sleep(1);
      cout << "****" << endl;
      sleep(1);
      // return health;
    }

    void RestoreHealth(int _health)
    {
      health = health + _health;
      cout << "Restoring health" << endl;
      sleep(1);
      cout << "++" << endl;
      sleep(1);
      cout << "++++" << endl;
      sleep(1);
      //return health;
    }

    void SpecialAbility()
    {      
      cout << "Master of the shadows, Bagheera Pounces from the trees at the opponent with his sharp bite" << endl;
      sleep(1);
      cout << "/-\\/-\\/-\\" << endl;
      cout << " |  |  | " << endl;
      sleep(1);
      cout << ". . . . . ." << endl;
      cout << "<a> <a> <a>" << endl;
      sleep(1);
      cout << "Bagheers also sucks a bits of opponent's blood restoring some health" << endl;
      sleep(1);
      cout << "++++++++" << endl;
      sleep(1);
      //return health;
    }

    int getHealth()
    {            
      return health;
    }
    
    int getDamage()
    {         
      return damage;
    }
    string getClassType()
    {
      type = "Bagheera";
      return type;
    } 
    int getHealValue()
    {
      return bagheera_heal.getValue();
    }

};

//Baloo Derived class
class Baloo : public Player
{     
    public:
    Baloo(int _damage, int _health)
    {
      damage = _damage;
      health = _health;      
    }
    void TakeDamage(int _damage)
    {
      health = health - _damage;
      cout << "Dealing physical damage" << endl;
      sleep(1);
      cout << "..**" << endl;
      sleep(1);
      cout << "***" << endl;
      sleep(1);
      cout << "****" << endl;
      sleep(1);      
    }

    void RestoreHealth(int _health)
    {
      health = health + _health;
      cout << "Restoring health" << endl;
      sleep(1);
      cout << "++" << endl;
      sleep(1);
      cout << "++++" << endl;
      sleep(1);
      //return health;
    }

    void SpecialAbility()
    {      
      cout << "Baloo eats honey to restore health" << endl;
      sleep(1);
      cout << "^ ^ ^ ^ ^ ^ " << endl;
      cout << " o   o   O" << endl;
      sleep(1);
      cout << "+++++++++" << endl;
      sleep(2);
      //return health;
    }

    int getHealth()
    {            
      return health;
    }
    
    int getDamage()
    {         
      return damage;
    }
    string getClassType()
    {
      type = "Baloo";
      return type;
    }    
    
    int getHealValue()
    {
      return baloo_heal.getValue();
    }
};

//Sher Khan derived class
class SherKhan : public Player
{     
    public:
    SherKhan(int _damage, int _health)
    {
      damage = _damage;
      health = _health;      
    }
    void TakeDamage(int _damage)
    {
      health = health - _damage;
      cout << "Dealing physical damage" << endl;
      sleep(1);
      cout << "..**" << endl;
      sleep(1);
      cout << "***" << endl;
      sleep(1);
      cout << "****" << endl;
      sleep(1);
      // return health;
    }

    void RestoreHealth(int _health)
    {
      health = health + _health;
      cout << "Restoring health" << endl;
      sleep(1);
      cout << "++" << endl;
      sleep(1);
      cout << "++++" << endl;
      sleep(1);
      //return health;
    }

    void SpecialAbility()
    {
      cout << "Sher Khan, master of disguises, jumps from behind the bushes at the opponent..." << endl;
      sleep(1);
      cout << "`{^^^}`" << endl;
      cout << "_{vvv}_" << endl;
      sleep(1);
      cout << "~~~~~" << endl;
      sleep(1); 
      cout << "~~~~~~~~~" << endl;
      sleep(1); 
    }

    int getHealth()
    {            
      return health;
    }
    
    int getDamage()
    {         
      return damage;
    }
    string getClassType()
    {
      type = "SherKhan";
      return type;
    } 
    int getHealValue()
    {
      return sher_heal.getValue();
    }
};


//Hathi Derived class
class Hathi : public Player
{     
    public:
    Hathi(int _damage, int _health)
    {
      damage = _damage;
      health = _health;      
    }
    void TakeDamage(int _damage)
    {
      health = health - _damage;
      cout << "Dealing physical damage" << endl;
      sleep(1);
      cout << "..**" << endl;
      sleep(1);
      cout << "***" << endl;
      sleep(1);
      cout << "****" << endl;
      sleep(1);      
    }

    void RestoreHealth(int _health)
    {
      health = health + _health;
      cout << "Restoring health" << endl;
      sleep(1);
      cout << "++" << endl;
      sleep(1);
      cout << "++++" << endl;
      sleep(1);
      //return health;
    }

    void SpecialAbility()
    {      
      cout << "Hathi uses his tusk to inflict a lot of damage of opponent but sometimes, the tusk can harm Hathi itself, thereby decreasing some of his own health" << endl;
      sleep(1);
      cout << "VV" << endl;
      cout << ">>>>>" << endl;
      sleep(1);
      cout << ">>>---->>>>--->>>>" << endl;
      sleep(2);
      //return health;
    }

    int getHealth()
    {            
      return health;
    }
    
    int getDamage()
    {         
      return damage;
    }
    string getClassType()
    {
      type = "Hathi";
      return type;
    } 
    int getHealValue()
    {
      return hathi_heal.getValue();
    }
};