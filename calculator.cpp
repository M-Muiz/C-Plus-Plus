#include <iostream>

using namespace std;

// int main()
// {

//     int num1, num2;
//     char sign;

//     cout << "Welcome To Calculator" << endl;

//     cout << "Enter num1: " << endl;
//     cin >> num1;

//     cout << "Enter Sign: " << endl;
//     cin >> sign;

//     cout << "Enter num2: " << endl;
//     cin >> num2;

//     if (sign == 'x')
//     {
//         cout << "The multiplication of num1 and num2 is: " << num1 * num2;
//     }
//     else if (sign == '/')
//     {
//         cout << "The divison of num1 and num2 is: " << num1 / num2;
//     }
//     else if (sign == '+')
//     {
//         cout << "The addition of num1 and num2 is: " << num1 + num2;
//     }
//     else if (sign == '-')
//     {
//         cout << "The subtraction of num1 and num2 is: " << num1 - num2;
//     }
//     else
//     {
//         cout << "Something wrong with program.";
//     }

//     return 0;
// }

int main()
{
    int age;

    cout << "Enter your age: " << endl;
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "Your are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;

    default:
        cout << "How are you doing";
        break;
    }

    return 0;
}
