#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

double Rectangle::area() const {
    // 사각형 넓이 계산
    return std::abs((x2 - x1) * (y2 - y1));
}