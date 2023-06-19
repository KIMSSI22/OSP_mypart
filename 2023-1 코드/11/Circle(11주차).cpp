#include "Circle.h"
#define M_PI 3.14159265358979323846

Circle::Circle(int centerX, int centerY, int radius) : centerX(centerX), centerY(centerY), radius(radius) {}

double Circle::area() const {  // 원 넓이 계산
    return M_PI * radius * radius;
}