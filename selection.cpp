#include <iostream>
using namespace std;
int main()
{
   int age;
cout << "tell me ur age="<<age;
cin>>age;
switch (age)
{
    case 18:
    cout << " u r 18";
    break;
    case 22:
    cout <<"u r 22";
    break;
    default:
    cout<<"no special case"<<endl;

}
return 0;
}

