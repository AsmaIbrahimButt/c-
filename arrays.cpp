#include <iostream>
using namespace std;
int main()
{
int marks[4]={23,33,44};
marks[0]=77;
cout<<marks[0];
//print an array
for(int i=0;i<4;i++)
{
    cout << "array="<<marks[i];
}
   //c++ pointers and array
 int *p=marks;
 cout << *(p++);
 cout << "the value of marks[0] is"<<*p;
cout << "the value of marks[0] is"<<*(p+1);
cout << "the value of marks[0] is"<<*(p+2);

    return 0;
}