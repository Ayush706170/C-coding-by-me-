#include<iostream>
using namespace std;

int main()
{
    string s;
    
    cout<<"Enter a string ";
    getline(cin,s);

    cout<<"you have entered : ";
    cout<<s<<endl;

    s.push_back('y');
    cout<<"after using push back"<<s<<endl;

    s.pop_back();
    cout<<"after using pop back"<<s<<endl;

    return 0;



}
