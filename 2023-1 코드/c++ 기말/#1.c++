#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> map(5, vector<int>(5));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> map[i][j];
        }
    }

    vector<vector<int>> dp(5, vector<int>(5, 0)); 

    for (int j = 1; j < 5; j++) {
        dp[0][j] = dp[0][j-1] + map[0][j];
    }

    for (int i = 1; i < 5; i++) {
        dp[i][0] = dp[i-1][0] + map[i][0];
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + map[i][j];
        }
    }

    int i = 4, j = 4;
    vector<int> path;
    while (i > 0 || j > 0) {
        path.push_back(i * 5 + j);
        if (i > 0 && j > 0) {
            if (dp[i-1][j] < dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        } else if (i > 0) {
            i--;
        } else {
            j--;
        }
    }
    path.push_back(0);

    for (int k = path.size() - 1; k >= 0; k--) {
        cout << path[k];
        if (k > 0) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}