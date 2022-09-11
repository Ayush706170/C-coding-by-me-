//CWH LEC: 15;

#include<iostream>
using namespace std;

//  int sum (int a, int b){
//  int c = a+b;
//  return c;
//  }


//  int main(){
//      int num1, num2;
//      cout<<"enter the value of num1 "<<endl;
//      cin>>num1;  
//  
//      cout<<"enter the value of num2 "<<endl;
//      cin>>num2;
//      cout<<"the sum is "<<sum(num1, num2);

 

 

//      function prototype
//      type function-name (arguments);
        int sum(int a, int b);
        void g(void);

//  int sum(int a, int b);  //-->acceptable
//  int sum(int a, b);  //-->not acceptable
//  int sum(int, int);  //-->    acceptable

   int main()
   {
       int num1, num2;
   
       cout<<"enter the value of num1"<<num1<<endl;
       cin>>num1;
   
       cout<<"enter the value of num2"<<num2<<endl;
       cin>>num2;
   
       cout<<"the sum is "<<sum(num1, num2);
       g();

       return 0;       
   } 


//     num1, num2 ARE ACTUAL PARAMETER
//     formal parameter a and b will be taking
//     value from actual parameter num1, num2



       int sum (int a, int b)
       {
       int c = a+b;
       return c;
       }
       void g()
       {
       cout<<"\n hello, good morning ";
       }


    