// #include<iostream>
// using namespace std;
// 
// int main(){
// 
    //  int marks[6];
// 
    //  for (int i = 0; i < 6; i++)
    //  {
        //  cout<<"enter the marks of "<<i<<"th"<<" students is : "<<endl;
        //  cin>>marks[i];
    //  }
// 
    //  for (int i = 0; i < 6; i++)
    //  {
        //  cout<<"enter the marks of "<<i<<"th"<<" students is : "<<marks[i]<<endl;
        //  
    //  }
    // return 0;
// }

#include<iostream>
using namespace std;

int main(){

     int stu[2][3] = {
         {4, 6, 8},
         {6, 0, 9}
         
     };

     for (int i = 0; i < 2; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cout<<"the value of "<<i<<","<<j<<" is "<<stu[i][j]<<endl;
         }
         
     }
     
    return 0;
}
