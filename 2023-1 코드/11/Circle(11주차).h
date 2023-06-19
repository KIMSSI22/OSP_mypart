#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    int centerX, centerY; // 중심 좌표
    int radius; // 반지름

public:
    Circle(int centerX, int centerY, int radius);

    double area() const override;
};

#endif