#include <iostream>
using namespace std;
int main()
{
    //what is pointers?
    int a=3;
    int* b= &a;
    //&Address of operator
    cout << b;
    //*----->dereference operator
    cout<<&a;
    //the value at address b
    cout<<"the value at"<<*b<<endl;
    ///pointer to pointer variable
    int** c= &b;
    cout<<"the address of b is"<<&b<<endl;
    cout << "the address of b id "<<c<<endl;
    cout<<"the value at address c is="<<*c;
    cout<<"the value at adddress value(valueat c"<<**c;
    
    return 0;
}