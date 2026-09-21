#include <iostream>
using namespace std;

void PrintEvenNumbers(int);

int n;

int main () {

    cout << "Enter a number: ";
    cin >> n;

    PrintEvenNumbers(n);
}

void PrintEvenNumbers(int n)
{
    for (int i = 2; i <= n; i+=2) {
        cout << i << " ";
    }
}