#include <iostream>
using namespace std;

typedef struct student
{

int stu_id;
char favchar;
float num;
}stu;
int main()
{
    struct  student asma;
    struct student ali;
    stu Ahmed;
    
   asma.stu_id=1;
   asma.favchar='a';
   asma.num=12000.0;
   cout << asma.stu_id;

    ali.stu_id=1;
   ali.favchar='a';
   ali.num=12000.0;
   cout << ali.stu_id;


    


    return 0;
}