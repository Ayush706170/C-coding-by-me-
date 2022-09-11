 #include<iostream>
 using namespace std;

     inline int product(int a, int b){
     return a*b;
     }

     float moneyRecived(int currentMoney, float factor = 1.04){
     return currentMoney * factor;
 }




 int main(){
     int a, b;
//   cout<<"enter the value of a and b: ";
//   cin>>a>>b;
     int money = 100000;
     cout<<"if you have "<<money <<" Rs in your bank account, you will recived "<<moneyRecived(money)<<" rS after 1 year "<<endl;
     cout<<"for vip: you have "<<money <<" Rs in your bank account, you will recived "<<moneyRecived(money, 1.1)<<" rS after 1 year "<<endl;


//   cout<<"the product of a and b is "<<product(a,b)<<endl;
//   cout<<"the product of a and b is "<<product(a,b)<<endl;
//   cout<<"the product of a and b is "<<product(a,b)<<endl;
//   cout<<"the product of a and b is "<<product(a,b)<<endl;
//   cout<<"the product of a and b is "<<product(a,b)<<endl;
      
     return 0;
 }