#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int twodimen [4][8];
    int grades;
    int sumgrades [4] = {0};
    float quarterave = 0.0;
    float sumquarterave = 0.0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            cout << "input your grades for " << i + 1 << " quarter grades: ";
            cin >> grades;

            twodimen [i][j] = grades;

            sumgrades[i] += twodimen[i][j];
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

    cout << "\n Averages: \n";

    for (int i = 0; i < 4; i++) {

        quarterave = (float)sumgrades[i] / 8;

        cout << i + 1 << " grades average: " << fixed << setprecision(2) << quarterave;
        sumquarterave += quarterave;
        cout << endl;
    }

    cout << "Final average: "<< fixed << setprecision(2) << (float)sumquarterave /4;
}