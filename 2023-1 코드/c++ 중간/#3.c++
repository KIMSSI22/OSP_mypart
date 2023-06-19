#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int evaluate(vector<int>& nums, vector<char>& ops) {
    int res = nums[0];
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == '+') {
            res += nums[i + 1];
        } else {
            res -= nums[i + 1];
        }
    }
    return res;
}

int get_min_result(vector<int>& nums, vector<char>& ops) {
    vector<int> perm = {0, 1, 2};
    int min_val = 999999999; 

    do {
        vector<int> nums_copy = nums;
        vector<char> ops_copy = ops;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < ops_copy.size(); j++) {
                if (ops_copy[j] == '+' && perm[i] == 1) {
                    nums_copy[j] += nums_copy[j + 1];
                    nums_copy.erase(nums_copy.begin() + j + 1);
                    ops_copy.erase(ops_copy.begin() + j);
                    j--;
                } else if (ops_copy[j] == '-' && perm[i] == 2) {
                    nums_copy[j] -= nums_copy[j + 1];
                    nums_copy.erase(nums_copy.begin() + j + 1);
                    ops_copy.erase(ops_copy.begin() + j);
                    j--;
                }
            }
        }

        int val = evaluate(nums_copy, ops_copy);
        if (val < min_val) {
            min_val = val;
        }
    } while (next_permutation(perm.begin(), perm.end()));

    return min_val;
}

int main() {
    string arr = "5-7-3+4";

    vector<int> nums;
    vector<char> ops;
    int num = 0;
    for (int i = 0; i < arr.length(); i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            num = num * 10 + (arr[i] - '0');
        } else {
            nums.push_back(num);
            ops.push_back(arr[i]);
            num = 0;
        }
    }
    nums.push_back(num);

    int min_val = get_min_result(nums, ops);

    cout << min_val << endl;

    return 0;
}