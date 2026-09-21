#include <iostream>
using namespace std;

int main () {
    int num;
    do {
        cout << "Input a number: ";
        cin >> num;
        
        switch (num) {
            case -1:
                cout << "End.";
                break;
            default:
                cout << num << " is ";
                if (num < 0) {
                    cout << "negative.";
                } else if (num > 0){
                    cout << "positive.";
                } else {
                    cout << "neither positive nor negative.";
                }
        }
    cout << endl;
    } while (num != -1);
}