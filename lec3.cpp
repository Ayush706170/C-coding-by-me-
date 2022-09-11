//  this is tutorial 4
// int sum = 34; means sum is an integer variable which holds value 34 in meomory


#include<iostream>
using namespace std;
  
    int glo= 34;
    void sum()
    {
        int a;
       cout<<glo<<endl;
    }

    int main()
{

    int glo = 45;
    glo = 23;
 // int a=12;
 // int b=13;
 // float si=3.331;
 // char c='g';
 // bool sh = false;

 // cout<<"The value of a is "<<a<<endl;
 // cout<<"The value of b is "<<b<<endl;
 // cout<<"The value of c is "<<c<<endl;
 // cout<<"The value of sh is "<<sh<<endl;
 // cout<<"The value of si is "<<si<<endl;

    sum();
    cout<<glo<<endl;
    
    return 0;
}




// 1; variable name in c++ can range from 1 to 255 characters.
// 2; all  variable names must begain with a letter of the alphabet or anunderscore()
// 3; after the first initial letter, variable names can also contain letters and numbers.
// 4; variable names are case sensitive.
// 5; no space or special charcters are allowed.
// 6; you cannot use keyword (a reserved word) as a variable name.