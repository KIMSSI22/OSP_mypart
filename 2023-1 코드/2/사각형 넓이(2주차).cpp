#include<iostream>
#include <cmath>  //sqrt와 pow 이용하려고 사용

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, x4, y4, a, b;

    cout << "x1: ";
    cin >> x1;

    cout << "y1: ";
    cin >> y1;

    cout << "x2: ";
    cin >> x2;

    cout << "y2: ";
    cin >> y2;

    cout << "x3: ";
    cin >> x3;

    cout << "y3: ";
    cin >> y3;

    cout << "x4: ";
    cin >> x4;

    cout << "y4: ";
    cin >> y4;

    a = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));  //(x1,y1)에서 (x3,y3)으로 가는 대각선의 길이
    b = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));  //(x2,y2)에서 (x4,y4)으로 가는 대각선의 길이

    cout << "ans = " << (a + b) / 2 << endl;  //두 대각선을 곱하고 2로 나눔으로써 사각형이 넓이 구함

}