#ifndef CLASS_H
#define CLASS_H

class Point {  //좌표 클래스
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
    double distanceTo(const Point& other) const;
};

class Triangle {  //삼각형 클래스
private:
    Point points[3];

public:
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    double getArea() const;
};

class Rectangle {  //사각형 클래스
private:
    Point points[4];

public:
    Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
    double getArea() const;
};

#endif