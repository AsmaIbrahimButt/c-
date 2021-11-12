#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=44;
cout <<"the valueof a was"<<setw(4)<<a;
a=47;
cout << "the value of a is="<<setw(4)<<a;
//costant in c ++
const int b=10;


//manipulators
//endl ,setw
//operator precedence
int s=3,g=8;
int z=a*5+g;
int x=(a*5)+g-87;
cout << z;
cout << x;



   


    return 0;
}