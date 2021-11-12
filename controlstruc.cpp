#include <iostream>
using namespace std;
int main()
{
/*sequence structure
//selection structure
loop structure*/

int age;
cout << "tell me ur age="<<age;
cin>>age;
if((age<18)&&(age>0))
{
    cout << "u r not able "<<endl;
}
else if(age==18)
{
    cout << "able"<<endl;
}
else
{
cout << "not"<<endl;
}
return 0;
}