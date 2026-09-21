#include <iostream>
using namespace std;

int FindFirstMultiple(int);

int n;

int main() {
    cout << "input a number: ";
    cin >> n;

    int output = FindFirstMultiple(n);
    cout << "First multiple: " << output;
}

int FindFirstMultiple (int n) {
    int i = n;
    do {
        i += n;
    } while (i <= 20);
    return i;
}