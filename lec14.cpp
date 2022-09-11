#include<iostream>
using namespace std;
 
//  struct father
//  {
//  int age;
//  char car;
//  float salary;
//  };

//  union money
//  {
//      int rice;     //4
//      char car;     //1
//      float pounds; //4
//  };

int main()
{   enum meal {breakfast, lunch, dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    meal m2 = dinner;
    meal m1 = lunch;
    cout<<(m2==2)<<endl;
    cout<<(m1)<<endl;

//  struct father baliram ;
//  baliram.age = 2;
//  baliram.car = 'a';
//  baliram.salary = 20000

//  cout<<"the value of "<< baliram.age<<endl;
//  cout<<"the value of "<< baliram.car<<endl;
//  cout<<"the value of "<< baliram.salary<<endl

//  union money m1;
//  m1.rice = 12;
//  cout<<m1.rice;


     return 0;
}

 


 
