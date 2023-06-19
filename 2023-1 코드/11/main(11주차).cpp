#include <iostream>
#include <vector>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
    std::vector<Figure*> figures;

    // 삼각형 입력
    for (int i = 0; i < 3; ++i) {
        int x1, y1, x2, y2, x3, y3;
        std::cout << "삼각형\n";
        std::cout << "좌표 : ";
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        Figure* triangle = new Triangle(x1, y1, x2, y2, x3, y3);
        figures.push_back(triangle);
    }

    // 사각형 입력
    for (int i = 0; i < 2; ++i) {
        int x1, y1, x2, y2;
        std::cout << "사각형\n";
        std::cout << "좌표 : ";
        std::cin >> x1 >> y1 >> x2 >> y2;

        Figure* rectangle = new Rectangle(x1, y1, x2, y2);
        figures.push_back(rectangle);
    }

    // 원 입력
    std::cout << "원\n";
    int centerX, centerY, radius;
    std::cout << "좌표 : ";
    std::cin >> centerX >> centerY >> radius;

    Figure* circle = new Circle(centerX, centerY, radius);
    figures.push_back(circle);

    // 넓이 및 합 출력
    std::cout << "\n삼각형\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "넓이: " << figures[i]->area() << std::endl;
    }
    std::cout << "합: " << figures[0]->area() + figures[1]->area() + figures[2]->area() << std::endl;

    std::cout << "\n사각형\n";
    for (int i = 3; i < 5; ++i) {
        std::cout << "넓이: " << figures[i]->area() << std::endl;
    }
    std::cout << "합: " << figures[3]->area() + figures[4]->area() << std::endl;

    std::cout << "\n원\n";
    std::cout << "중심, 반지름: " << centerX << ", " << centerY << ", " << radius << std::endl;
    std::cout << "넓이: " << figures[5]->area() << std::endl;

    // 동적 할당한 메모리 해제
    for (auto figure : figures) {
        delete figure;
    }

    return 0;
}