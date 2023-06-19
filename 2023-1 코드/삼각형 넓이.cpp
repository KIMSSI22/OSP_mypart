#include<iostream>
#include <cmath>  //sqrt와 pow 이용하려고 사용

using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3, a, b, c;

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

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));  //(x1,y1)에서 (x2,y2)으로 가는 직선의 길이
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));  //(x2,y2)에서 (x3,y3)으로 가는 직선의 길이
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));  //(x3,y3)에서 (x1,y1)으로 가는 직선의 길이

    cout << "ans = " << (a + b + c) / 2 << endl;  //헤론의 공식을 이용하여 삼각형의 넓이 구함

}