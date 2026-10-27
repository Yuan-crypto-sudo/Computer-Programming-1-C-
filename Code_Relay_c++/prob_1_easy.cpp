#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    number = abs(number);

    if (number == 0) {
        cout << "The final result is 0";
        return 0; 
    }

    int running_total = number % 10;
    number /= 10;

    bool should_subtract = true;

    while (number > 0) {
        int current_digit = number % 10;

        if (should_subtract) {
            running_total -= current_digit;
        } else {
            running_total += current_digit;
        }

        should_subtract = !should_subtract;

        number /= 10;
    }

    cout << "\nThe final result: " << running_total << endl;
}