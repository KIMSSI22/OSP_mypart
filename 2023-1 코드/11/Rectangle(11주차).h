#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {
private:
    int x1, y1; // 좌상단 좌표
    int x2, y2; // 우하단 좌표

public:
    Rectangle(int x1, int y1, int x2, int y2);

    double area() const override;
};

#endif