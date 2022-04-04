//
//  Circle.cpp
//  PhongsavanhMongkhonvilayProj6
//
//  Created by phongsavanh Mongkhonvilay on 3/23/22.
//

#include "Circle.h"

Circle::Circle(): Shape("Circle"), radius(0){
    
}

Circle::Circle(double theRadius) : Shape("Circle"), radius(theRadius){
    
}

void Circle::setRadius(double newRadius){
    this->radius = newRadius;
}

double Circle::getRadius(){
    return radius;
}

double Circle::getArea(){
    return 3.14159*radius*radius;
}
