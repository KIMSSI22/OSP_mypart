#include <iostream>
using namespace std;

int main() {
    int n; 
    int input;
    int max_num = -9999999999;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input > max_num) {
            max_num = input;
        }
    }

    cout << max_num << endl;

    return 0;
}