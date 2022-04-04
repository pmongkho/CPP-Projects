//
//  Shape.cpp
//  PhongsavanhMongkhonvilayProj6
//
//  Created by phongsavanh Mongkhonvilay on 3/23/22.
//

#include "Shape.h"

Shape::Shape(){
    name="";
}

Shape::Shape(string name){
    this->name = name;
}

string Shape::getName(){
    return this->name;
}

void Shape::setName(string newName){
    this->name = newName;
}
