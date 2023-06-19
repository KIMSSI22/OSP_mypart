#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reverseString(string& str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    string str = "I am a student";
    vector<vector<int>> reverseNum = {{0, 7}, {4, 6}, {5, 13}, {2, 7}};

    for (int i = 0; i < reverseNum.size(); i++) {
        int start = reverseNum[i][0];
        int end = reverseNum[i][1] - 1;
        reverseString(str, start, end);
    }

    cout << str << endl;

    return 0;
}