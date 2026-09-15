#include <iostream>
using namespace std;

int Difference(int, int);
int Quotient(int, int);
int Modulus(int, int);
int Lowest(int, int, int);

int num1, num2, num3;
int diff = 0, quot = 0, mod = 0, lowest = 0;
int main()
{
    cout << " ********************************************";
    cout << "\n * Name: ALCUETAS, Yuan Carlo S.            *";
    cout << "\n * Section: CYB11S1                         *";
    cout << "\n ********************************************";

    cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    diff = Difference(num1, num2);
    cout << "\nThe difference between the first number and the second number is " << diff;

    quot = Quotient(num3, num2);
    cout << "\nThe quotient of the third number and the second number is " << quot;

    mod = Modulus(num1, num3);
    cout << "\nThe modulus of the first number and the third number is " << mod;

    lowest = Lowest(num1, num2, num3);
    cout << "\nThe lowest number is " << lowest;

    return 0;
}

int Difference(int a, int b) {
    return a - b;
}

int Quotient(int a, int b) {
    return a / b;
}

int Modulus(int a, int b) {
    return a % b;
}

int Lowest(int a, int b, int c) {
    lowest = a;

    if (b < lowest) {
        lowest = b;
    }
    if (c < lowest) {
        lowest = c;
    }
    return lowest;
}