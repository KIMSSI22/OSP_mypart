#include "Triangle.h"
#include <cmath>

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}

double Triangle::area() const {
    // 삼각형 넓이 계산
    return std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}