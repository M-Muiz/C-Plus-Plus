#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    char sign;

    cout << "Welcome To Calculator" << endl;

    cout << "Enter num1: " << endl;
    cin >> num1;

    cout << "Enter Sign: " << endl;
    cin >> sign;

    cout << "Enter num2: " << endl;
    cin >> num2;

    if (sign == 'x')
    {
        cout << "The multiplication of num1 and num2 is: " << num1 * num2;
    }
    else if (sign == '/')
    {
        cout << "The divison of num1 and num2 is: " << num1 / num2;
    }
    else if (sign == '+')
    {
        cout << "The addition of num1 and num2 is: " << num1 + num2;
    }
    else if (sign == '-')
    {
        cout << "The subtraction of num1 and num2 is: " << num1 - num2;
    }
    else
    {
        cout << "Something wrong with program.";
    }

    return 0;
}
