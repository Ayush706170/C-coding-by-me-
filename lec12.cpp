/*  pointer lec 12

 what is pointer ? ----> pointer is data types which holds the adress
 of other deta types
 
*/

#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int* b = &a;
    // & --> (adress of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    
    // * --->(value at) dereference operator
    cout<<"the value at address b is "<<*b<<endl;
    
    // pointer to pointer
    int**c =&b;
    cout<<"the adress of b is "<<&b<<endl;
    cout<<"the addres of b is "<<c<<endl;
    cout<<"the addres of c is "<<*c<<endl;
    cout<<"the addres of c is "<<**c<<endl;

    return 0;
}