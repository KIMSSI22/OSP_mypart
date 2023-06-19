#include <iostream>
#include <string>
#include <algorithm>

std::string addBigIntegers(const std::string& num1, const std::string& num2) {
    std::string result;
    int carry = 0;

    std::string paddedNum1(std::max(num1.size(), num2.size()), '0');
    std::string paddedNum2(std::max(num1.size(), num2.size()), '0');
    std::copy(num1.rbegin(), num1.rend(), paddedNum1.begin());
    std::copy(num2.rbegin(), num2.rend(), paddedNum2.begin());

    for (int i = 0; i < paddedNum1.size(); i++) {
        int digit1 = paddedNum1[i] - '0';
        int digit2 = paddedNum2[i] - '0';

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        result.push_back(sum % 10 + '0');
    }

    if (carry > 0) {
        result.push_back(carry + '0');
    }

    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::string num1, num2;
    std::cin >> num1;

    std::cin >> num2;

    std::string sum = addBigIntegers(num1, num2);
    std::cout << sum << std::endl;

    return 0;
}