#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
    virtual double area() const = 0;
    virtual ~Figure() {}  //Figure 클래스의 가상 소멸자
};

#endif