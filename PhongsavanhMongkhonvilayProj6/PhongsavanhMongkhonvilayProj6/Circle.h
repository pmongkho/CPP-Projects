//
//  Circle.h
//  PhongsavanhMongkhonvilayProj6
//
//  Created by phongsavanh Mongkhonvilay on 3/23/22.
//

#ifndef Circle_h
#define Circle_h

#include "Shape.h"
#include <iostream>

using namespace std;

class Circle : public Shape{
public:
    Circle();
    Circle(double theRadius);
    void setRadius(double newRadius);
    double getRadius();
    virtual double getArea();
private:
    double radius;
};

#endif /* Circle */
