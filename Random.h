#include <iostream>
using namespace std;

class Random
{
  private:
  int lower_limit;
  int upper_limit;
  int value;

  public:
  Random(int lower_limit, int upper_limit)
  {
      this->lower_limit = lower_limit;
      this->upper_limit = upper_limit;      
  }

  //function for a Random number integer range from min to max
  int random(int min, int max) //range : [min, max]
  {
   bool first = true;
   if (first) 
   {  
      srand(time(NULL)); //seeding for the first time only!
      first = false;
   }
   int _value = min + rand() % (( max + 1 ) - min);
   return _value;
  }

  int getValue()
  {
      value = random(lower_limit, upper_limit);
      return value;
  }
  
};