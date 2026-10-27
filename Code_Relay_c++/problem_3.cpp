#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numCoin;
    int Target;
    int coinVal[10];

    cout << "Enter numCoin and Target: ";
    cin >> numCoin >> Target;

    cout << "Enter " << numCoin << " coin values: ";
    for (int i = 0; i < numCoin; i++) {
        cin >> coinVal[i];
    }

    vector<int> dp(Target + 1, Target + 1);
    dp[0] = 0;

    for(int i = 1; i <= Target; i++) {
        for(int j = 0; j < Target; j++) {
            if (i >= coinVal[j]) {
                dp[i] = min(dp[i], dp[i - coinVal[j]] + 1);
            }
        }
    }

    if (dp[Target] > Target) {
        cout << -1 << endl;
    } else {
        cout << "Least amount of coins needed: " << dp[Target] << endl;
    }
}