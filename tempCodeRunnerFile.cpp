#include<iostream>
 using namespace std;

int glo= 45; 

 void sum()
 {
    int a;
    cout<<glo<<endl;
 }

 int main()
 {
    glo =5;
    int glo =9;
    sum();
    cout<<glo;
    return 0;
 }