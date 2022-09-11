//  function overloading 

#include<iostream>
using namespace std;

int sum(int a, int b)  
    {
        cout<<" using function with 2 arguments ";
    return a+b;
    }

int sum(int a, int b, int c)
    {
        cout<<" using function with 3 arguments ";
    return a+b+c;
    }

// calculate the value of cylinder 
int volume(double r, int h){  
    return(3./14*r*r*h);
}

// calculate the volume of a cube
int volume(int a){
    return(a*a*a);
}

// ractangular box 
int volume (int l, int b, int h){
    return(l*b*h);
}

int main()
{
    cout<<":- the sum is 3 and 5 is: "<<sum(3,5)<<endl<<endl;
    cout<<":- the sum is 2, 4 and 6 is: "<<sum(2, 4, 6)<<endl;
    cout<<"the value of cuboid of 2, 4 and 6 is "<<volume(2, 4, 6)<<endl;
    cout<<"the value of cuboid of redius 3 and 5 is "<<volume(3, 5)<<endl;
    cout<<"the volume of cube of side 3 "<<volume(3)<<endl;

    return 0;
}