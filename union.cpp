#include <iostream>
using namespace std;
// in pounds 
union money
{

int rice;
char car;
float pounds;

};

//union for better memory mangement
int main()
{
  union  money m1;
  m1.pounds=88.8;
  enum Meal{breakfast,lunch,dinner};
  cout<<breakfast;
  cout << lunch;
  Meal m1=breakfast;

  


    


    return 0;
}