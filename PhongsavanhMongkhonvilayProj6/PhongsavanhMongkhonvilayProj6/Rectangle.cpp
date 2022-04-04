//
//  Rectangle.cpp
//  PhongsavanhMongkhonvilayProj6
//
//  Created by phongsavanh Mongkhonvilay on 3/23/22.
//

#include "Rectangle.h"

Rectangle::Rectangle(): Shape("Rectangle"), width(0), height(0){
    
}

Rectangle::Rectangle(double theWidth, double theHeight): Shape("Rectangle"), width(theWidth), height(theHeight){
    
}

void Rectangle::setWidth(double newWidth){
    this->width = newWidth;
}

void Rectangle::setHeight(double newHeight){
    this->height = newHeight;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getHeight(){
    return height;
}

double Rectangle::getArea(){
    return width*height;
}
