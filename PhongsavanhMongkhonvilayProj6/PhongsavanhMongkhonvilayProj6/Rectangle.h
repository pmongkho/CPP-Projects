//
//  Rectangle.h
//  PhongsavanhMongkhonvilayProj6
//
//  Created by phongsavanh Mongkhonvilay on 3/23/22.
//

#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle: public Shape{
public:
    Rectangle();
    Rectangle(double theWidth, double theHeight);
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double getWidth();
    double getHeight();
    virtual double getArea();
private:
    double width;
    double height;
};

#endif /* Rectangle_h */
