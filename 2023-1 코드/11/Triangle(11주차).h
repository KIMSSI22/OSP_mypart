#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
private:
    int x1, y1; // 좌표 1
    int x2, y2; // 좌표 2
    int x3, y3; // 좌표 3

public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3);

    double area() const override;
};

#endif