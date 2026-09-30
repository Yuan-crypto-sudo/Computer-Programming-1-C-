#include <iostream>
using namespace std;

int Square(int);
int SumOfSquare(int);

int n;

int main() {
    cout << "input a number: ";
    cin >> n;
}

int Square(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        i = i * i;
    }
    return i;
}

int SumOfSquare(int i) {
    for (int j = Square(n); j <= n; j++)
}