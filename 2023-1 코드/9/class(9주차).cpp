#include "class.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}  //좌표 클래스

double Point::getX() const {  //x
    return x;
}

double Point::getY() const {  //y
    return y;
}

double Point::distanceTo(const Point& other) const {  //좌표 간 거리 구함
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3) {  //삼각형 좌표 변수에 넣음
    points[0] = p1;
    points[1] = p2;
    points[2] = p3;
}

double Triangle::getArea() const {  //삼각형 넓이 구함
    double a = points[0].distanceTo(points[1]);
    double b = points[1].distanceTo(points[2]);
    double c = points[2].distanceTo(points[0]);
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

Rectangle::Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4) {  //사각형 좌표 변수에 넣음
    points[0] = p1;
    points[1] = p2;
    points[2] = p3;
    points[3] = p4;
}

double Rectangle::getArea() const {  //사각형 넓이 구함
    double length = points[0].distanceTo(points[1]);
    double width = points[1].distanceTo(points[2]);
    return length * width;
}
