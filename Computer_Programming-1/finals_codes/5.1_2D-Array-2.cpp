#include <iostream>
using namespace std;

int main() {
    int twodimen [4][8];
    float grades;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            cout << "input your grades for " << i + 1 << " quarter grades: ";
            cin >> grades;

            twodimen [i][j] = grades;
        }
    }

    cout << "\nYour grades in table format: \n";

    for (int i = 0; i < 4; i++) {
        cout << i + 1 << " grades: ";
        for (int j = 0; j < 8; j++) {
            cout <<  twodimen[i][j] << " ";
        }
        cout << endl;
    }
}