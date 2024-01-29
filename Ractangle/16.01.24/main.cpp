//
//  main.cpp
//  16.01.24
//
//  Created by Ralitsa Toneva on 16.01.24.
//

#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"

int main() {
    
    Point p1(5, 5);
    p1.print();
    Point p2(15, 5);
    p2.print();
    Point p3(5, 15);
    p3.print();
    Point p4(15, 15);
    p4.print();
    Rectangle r1(p1, p2, p3, p4);
    std::cout << r1.isRectangle() << std::endl;
    std::cout << r1.isSquare() << std::endl;
    
    
    return 0;
}
