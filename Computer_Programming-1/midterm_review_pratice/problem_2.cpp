#include <iostream>
using namespace std;

int SumNumbers(int);

int n;
int sum;

int main() {
    cout << "Enter a number: ";
    cin >> n;

    cout << SumNumbers(n);
}

int SumNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}