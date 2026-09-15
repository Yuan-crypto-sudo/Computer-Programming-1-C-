#include<iostream> 
using namespace std;

void Difference (int , int);
void Quotient(int, int);
void Modulus(int, int);
void Lowest(int, int, int);

int num1, num2, num3;
int diff = 0, quot = 0, mod = 0, lowest = 0;   

int main()
{  

cout<<" ********************************************";
cout<<"\n * Name: ALCUETAS, Yuan Carlo S.            *";
cout<<"\n * Section: CYB11S1                         *";
cout<<"\n ********************************************";
    
   cout << "\nEnter the first number: ";     cin >> num1;
   cout << "\nEnter the second number: ";      cin >> num2;
   cout << "\nEnter the third number: ";      cin >> num3;


    Difference(num1,num2);
    cout << "\nThe difference between the first number and the second number is " << diff;

    Quotient(num3, num2);
    cout << "\nThe quotient of the third number and the second number is " << quot;

    Modulus(num1, num3);
    cout << "\nThe modulus of the first number and the third number is " << mod;

    Lowest(num1, num2, num3);
    cout << "\nThe lowest number is " << lowest;

    return 0;
}

void Difference (int a, int b)
{
    diff = a - b;
}

void Quotient (int a, int b)
{
    quot = a / b;
}

void Modulus (int a, int b)
{
    mod = a % b;
}

void Lowest (int a, int b, int c)
{
    lowest = a;

    if (b < lowest) {
        lowest = b;
    }
    if (c < lowest) {
        lowest = c;
    }
}