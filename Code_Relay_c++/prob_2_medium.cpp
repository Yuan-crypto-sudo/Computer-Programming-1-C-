#include <iostream>
using namespace std;

int main() {
    int array[2][3];
    int rowsum = 0, colsum = 0;

    cout << "Input" << endl;

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 3; b++) {
            cin >> array[a][b];
        }
    }

    cout << "Row sum: "; 

    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 3; b++) {
            rowsum += array[a][b];
        }
        cout << rowsum << " ";
        rowsum = 0;
    }
    cout << endl << "Colsum: ";

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 2; b++) {
            colsum += array[b][a];
        }
        cout << colsum << " ";
        colsum = 0;
    }
}