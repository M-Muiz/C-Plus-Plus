// Method 1

// #include<iostream>

// int main(){
//     std::cout<<"Hello World";
//     return 0;
// }

// Method 2

// #include <iostream>

// using namespace std;

// int main(){
//     cout<<"Hy its me!";
//     return 0;
// }

// #include<iostream>

// int a = 10;

// using namespace std;
// int main(){
//         cout<< a;
//         return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // int a = 23;
    // int b = 35;

    int a = 12, b = 88; // Recommended way to create multiple variable of same type:

    bool is_true = true;

    float pi = 3.14;

    char firstletter = 'M';

    // double name = 'Moiz';

    cout << "The value of a is " << a << " and the value of b is " << b << " and the sum of both is " << a + b + is_true;

    cout << "\nThe value of pi is " << pi;

    cout << "\nThis code is created by " << firstletter;

    return 0;
}