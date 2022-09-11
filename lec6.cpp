//class 6 codewithharry  
 
 // << this is called insertion operator
 // >> this is called extration operator


// There are two types of header files:---->

//1: syestem header files: it come with the compiler
//   eg: #include<iostream>

//2: user defined header files: it is written by the programmer
//   eg: #include "this.h" //--> this will produce an error if this.h  is no present in the current directory


#include<iostream>
using namespace std;

int main()
{
                       int a=4, b=5;
             cout<<"operature in c++: "<<endl;
    cout <<"following types of operators in c++: "<<endl;

//  1: Arithmatic operators :--

    cout<<"\n The value of a + b is "<<a+b<<endl;
    cout<<"\n The value of a - b is "<<a-b<<endl;
    cout<<"\n The value of a * b is "<<a*b<<endl;
    cout<<"\n The value of a / b is "<<a/b<<endl;
    cout<<"\n The value of a % b is "<<a%b<<endl;
    cout<<"\n The value of a ++ is " <<a++<<endl;
    cout<<"\n The value of a -- is " <<a--<<endl;
    cout<<"\n The value of ++a is "  <<++a<<endl;
    cout<<"\n The value of --a is "  <<--a<<endl;




// 2:  Assignment operators :--
// :-  used to assign value to variables
//     int a = 3,b = 5;
//     char d="d";




//   3: comparison operators :--

     cout<<"following are the comperision  operators in c++ \n ";   

            cout<<"The value of a == b is "   <<(a==b); 
            cout<<"\n The value of a > b is "  <<(a>b);  
            cout<<"\n The value of a < b is "  <<(a<b);  
            cout<<"\n The value of a <= b is "<<(a<=b);  
            cout<<"\n The value of a >= b is "<<(a>=b);  
            cout<<"\n The value of a != b is "<<(a!=b);  
     


//    4: logical operators:--

    cout<<"following are the logical  operators in c++ \n ";   
    cout<<" The value of this logical and operator((a==b) && (a<b)) is "<<((a==b) && (a<b));
    cout<<" The value of this logical or operator((a==b) && (a<b)) is "<<((a==b) || (a<b));
    cout<<" The value of this logical not operator(!(a==b)) is: "<<(!(a==b)) ;
    


    return 0;


}