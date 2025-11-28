#include <iostream>

using namespace std;

// int main()
// {
//     cout<<"Leaning Header File.";
//     return 0;
// }


int c = 35;


int main()
{
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin >> b;

    c = a + b;
    cout << "The sum of a and b is: " << c <<endl;

    cout<<"The value of global c is "<<::c;

    return 0;
}