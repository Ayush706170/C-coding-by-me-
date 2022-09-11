/* arrays in c++ code with harry lec 13 */

#include<iostream>
using namespace std;
int main(){


//  int mathmarks[4];

//  mathmarks[0] = 342;
//  mathmarks[1] = 12;
//  mathmarks[2] = 65;
//  mathmarks[3] = 235;


//  cout<<"these are math marks "<<endl;

//  cout<<mathmarks[0]<<endl; 
//  cout<<mathmarks[1]<<endl;
//  cout<<mathmarks[2]<<endl;
//  cout<<mathmarks[3]<<endl;


//  you can change the value of an array 
//  marks[2] = 455;
    cout<<"these are marks "<<endl;
    int marks[4] = {23, 34, 56, 34};
//  cout<<marks[0]<<endl; 
//  cout<<marks[1]<<endl;
//  cout<<marks[2]<<endl;
//  cout<<marks[3]<<endl;
                  


 for (int i = 0; i < 4; i++)
 {
   cout<<"the value of marks "<<i<<" is: "<<marks[i]<<endl;
 }
   
   

//   int i = 0;
//   int Arr[4] = {23, 45, 455, 89};
  
//   cout<<"Using while loops :-"<<endl;
//   while(i < 4)
//   {
//   cout<<"The value at "<<i<<" is "<<Arr[i]<<endl;
//   i = i+1;
//   } 



//   i = 0;
//   cout<<"Using do-while loops :-"<<endl;
//   do
//   {
//   cout<<"The value at "<<i<<" is "<<Arr[i]<<endl;
//       i = i+1;
//   }while(i < 4);
 
//   cout<<"Using for loops :-"<<endl;
//   for(i = 0; i < 4; i++)
//   {
//   cout<<"The value at "<<i<<" is "<<Arr[i]<<endl;
//   }

   
//    int i = 0;
//    int Arr[4] = {23, 45, 455, 89};
//     
//    
//    cout<<"using while loop :-"<<endl;
//    while (i<4)
//    {
//    cout<<"the value at "<<i<<" is "<<Arr[i]<<endl;
//    i=i++;
//        
//    }  




//   pointer and arrays 
     int* p = marks;
//   cout<<"the value of *p "<<*p<<endl;
//   cout<<"the value of *(p+1) "<<*(p+1)<<endl;
//   cout<<"the value of *(p+2) "<<*(p+2)<<endl;
//   cout<<"the value of *(p+3) "<<*(p+3)<<endl;
     cout<<*(p++)<<endl;
     cout<<*(++p)<<endl;


    return 0;
}

 




 
 
