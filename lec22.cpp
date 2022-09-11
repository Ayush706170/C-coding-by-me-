//   oops --> classes and objects
//   c++ --> initially called --> c with classes by stroustroup
//   class --> extension of structure (in c++)
//
//   structure had limitations
//   --> member are public
//   --> no methods
//
//   classes --> structures and more
//   classes --> can have method and properties
//   classes --> can  make few member s as private and few as public
//
//   structure in c++ are typedefed
//   you can declare objects along with the class decleration like this :/
//   /* class employee
//   {
//      class definition
//   } ayush, ankit, safain, toushif */
//   harry.salary = 8 makes no sense if salary is private/

//   nesting of member function


#include <iostream>
using namespace std;

class binary
{

    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);

};
void binary :: read(void){
    cout<<"enter a binary no "<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary formate "<<endl;
            exit(0);
        }  
  
    }

}

void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ( s.at(1) == '0')
        {
             s.at(1) = '1';
        }
        else
        {
            s.at(1) = '0';
        }
        
    }
    
}

void binary :: display(void){
    cout<<"displaying your binary number "<<endl;
    for (int i = 0; i< s.length(); i++)
    {
        cout<<s.at(1);
    }
    cout<<endl;
}




int
main()
{
    //   oops --> classes and objects
    //   c++ --> initially called --> c with classes by stroustroup
    //   class --> extension of structure (in c++)
    //
    //   structure had limitations
    //   --> member are public
    //   --> no methods
    //
    //   classes --> structures and more
    //   classes --> can have method and properties
    //   classes --> can  make few member s as private and few as public
    //
    //   structure in c++ are typedefed
    //   you can declare objects along with the class decleration like this :

    //   /* class employee
    //   {
    //      class definition
    //   } ayush, ankit, safain, toushif */
    //   harry.salary = 8 makes no sense if salary is private

    //   nesting of member function

    binary b;
    b.read();
    b.chk_bin();

    return 0;
}