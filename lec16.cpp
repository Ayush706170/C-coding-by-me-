#include<iostream>
using namespace std;
 

    int sum(int a, int b){
    int c = a+b;
    return c;
    }

////  ----->>  This will swap a and b using pointer referance <<-----
//
 void swapPointer(int* a, int* b){ //temp  a  b
        int temp =*a;              // 4    4  5
        *a = *b;                   // 4    5  5
        *b = temp;                 // 4    5  4
   }   

   int main()
   {   int x =4, y=5;
    //  cout<<"the sum of 4 and 5 is "<<sum(4,5);
       cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
       swapPointer(&x, &y); 
       cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//
//
//
//
//
////  ---->> this will swap a and b using reference variables <<---
//
//    void swapReferencevar(int &a, int &b){  //temp  a  b
//         int temp = a;                      // 4    4  5
//         a = b;                             // 4    5  5
//         b = temp;                          // 4    5  4
//    }  
//
//    int main()
//    {   int x =4, y=5;
////      cout<<"the sum of 4 and 5 is "<<sum(4,5);
//        cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//        swapReferencevar(x, y);  
//        cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
// 
 
 
      





  //  ------> THIS WILL NOT SWAP <------

//   int sum(int a, int b){
//        int c = a+b;
//        return c;
//    }
//
//   void swap(int a, int b){         //temp  a  b
//        int temp = a;               // 4    4  5
//        a = b;                      // 4    5  5
//        b = temp;                   // 4    5  4
//   
//   }   
//   int main()
//   {   int x =4, y=5;
//       //cout<<"the sum of 4 and 5 is "<<sum(4,5);
//       cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
//       swap(x, y); 
//       cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
 
   
   return 0;


   }
      