#include <iostream>
using namespace std;

int CountMultiple(int, int, int);

int main() {

    int start, endnum, divisor;

    cout << "Input start: ";
    cin >> start;

    cout << "\nInput end: ";
    cin >> endnum;

    cout << "\nInput divisor: ";
    cin >> divisor;

    int result = CountMultiple(start, endnum, divisor);

    cout << result;
}

int CountMultiple(int start, int endnum, int divisor) {
    int count = 0;

    for (int i = start; i <= endnum; i++) {
        if (i % divisor == 0) {
            count++;
        }
    }
    return count;
}