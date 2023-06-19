#include "class.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    Point p1(0, 0);
    Point p2(5, 0);
    Point p3(5, 2);
    Point p4(0, 2);
    Point p5(7, 2);
    Point p6(7, 0);

    Triangle triangles[2] = { Triangle(p1, p2, p3), Triangle(p4, p5, p6) };  //배열 2개 생성
    Rectangle rectangles[2] = { Rectangle(p1, p2, p3, p4), Rectangle(p4, p5, p6, p1) };  //배열 2개 생성

    cout << fixed << setprecision(2); // 소수점 자리 설정


    cout << "a-b의 거리: " << p1.distanceTo(p2) << endl;  //거리 출력
    cout << "a-c의 거리: " << p1.distanceTo(p3) << endl;
    cout << "b-c의 거리: " << p2.distanceTo(p3) << endl;

    cout << "판별: 삼각형" << endl;

    Triangle tri1(p1, p2, p3);  
    int q = tri1.getArea();  //넓이 구하는 함수
    cout << "넓이: " << q << endl;


    cout << "a-b의 거리: " << p4.distanceTo(p5) << endl;  //거리 출력
    cout << "a-c의 거리: " << p4.distanceTo(p6) << endl;
    cout << "b-c의 거리: " << p5.distanceTo(p6) << endl;

    cout << "판별: 삼각형" << endl; 

    Triangle tri2(p4, p5, p6);  
    int w = tri2.getArea();  //넓이 구하는 함수
    cout << "넓이: " << w << endl;


    cout << "a-b의 거리: " << p1.distanceTo(p2) << endl;  //거리 출력
    cout << "a-c의 거리: " << p1.distanceTo(p3) << endl;
    cout << "b-d의 거리: " << p2.distanceTo(p4) << endl;
    cout << "c-d의 거리: " << p3.distanceTo(p4) << endl;

    cout << "판별: 사각형" << endl;

    Rectangle rect1(p1, p2, p3, p4);  
    int e = rect1.getArea();  //넓이 구하는 함수
    cout << "넓이: " << e << endl;


    cout << "a-b의 거리: " << p4.distanceTo(p5) << endl;  //거리 출력
    cout << "a-c의 거리: " << p4.distanceTo(p6) << endl;
    cout << "b-d의 거리: " << p5.distanceTo(p1) << endl;
    cout << "c-d의 거리: " << p6.distanceTo(p1) << endl;

    cout << "판별: 사각형" << endl;

    Rectangle rect2(p4, p5, p6, p2);
    int r = rect2.getArea();  //넓이 구하는 함수
    cout << "넓이: " << r << endl;

    vector<double> v({ 5, 14, 10, 6 });  //넓이 값

    sort(begin(v), end(v));  //오름차순 정렬
    for (auto& x : v) cout << x << " ";


    return 0;
}