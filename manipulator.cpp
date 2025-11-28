#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

// const int a = 22;

// a = 3;

// cout<<"The value of a is "<<a;


int a = 98, b=65, c=4734;


cout<<"The value of a without setw is: "<<a<<endl;
cout<<"The value of b without setw is: "<<b<<endl;
cout<<"The value of c without setw is: "<<c<<endl;


cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;



    return 0;
}
