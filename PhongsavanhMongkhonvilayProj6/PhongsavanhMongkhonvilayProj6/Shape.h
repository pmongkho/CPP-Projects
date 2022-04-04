//
//  Shape.cpp
//  PhongsavanhMongkhonvilayProj6
//
//  Created by phongsavanh Mongkhonvilay on 3/23/22.
//

#ifndef Shape_h
#define Shape_h

#include <iostream>

using namespace std;

class Shape{
public:
    Shape();
    Shape(string name);
    string getName();
    void setName(string newName);
    virtual double getArea() = 0;
private:
    string name;
    
};

#endif
