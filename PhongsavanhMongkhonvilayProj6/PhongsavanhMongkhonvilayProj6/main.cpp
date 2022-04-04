//Date: 03-24-2022
//Author: Phongsavanh Mongkhonvilay
//Course: CSCI 221 VA Computer Science
//Description: Project 06
//Chapter: Inheritance

#include "Circle.h"
#include "Rectangle.h"

//********************************************
//main
//********************************************
int main() {
    
    //test1 for circle class
    //**************************************
    cout << "Testing Circle Class:" << endl;
    double testCircle1 = 23.2;
    
    Circle c(testCircle1);
    cout << "We have created a circle with radius " << testCircle1 << endl << endl;
    
    //result
    cout << "*" << c.getName() << " has radius "
                << c.getRadius() << " and area "
                << c.getArea() << endl << endl;
    
    //if test passed
    bool cTest1Passed = c.getRadius()==testCircle1
                     && c.getName()=="Circle";
    
    if(cTest1Passed){
        cout << "setName() has passed the test." << endl;
        cout << "Initialization has passed the test." << endl << endl;
    }
    
    //test2 for circle class
    //**************************************
    double testCirle2 = 12;
    
    cout << "We will test setRadius() with a value of " << testCirle2 << ", lets see how this goes.." << endl;
    c.setRadius(testCirle2);
    
    //result
    cout << "*" << "The new radius is: " << c.getRadius() << endl;
    cout << "*" << "The new area is: " << c.getArea() << endl << endl;
    
    //calculate area for test
    double area = 3.14159*testCirle2*testCirle2;
    
    //if passed test
    bool cTest2Passed = c.getRadius()==testCirle2
                     && c.getArea() == area;
    
    if(cTest2Passed){
    cout << "setRadius() has passed the test." << endl;
    cout << "getRadius() has passed the test." << endl;
    cout << "getArea() has passed the test.\n" << endl;
    }
   
    //test1 for rectangle class
    //**************************************
    cout << "Testing Rectangle Class:" << endl;
    double testWidth1 = 56;
    double testHeight1 = 45;
    
    Rectangle r(testWidth1,testHeight1);
    cout << "We have created a rectangle with width of "
         << testWidth1 << " and height of "
         << testHeight1 << endl << endl;
    
    //result
    cout << "*" << r.getName() << " has width "
         << r.getWidth() <<  " and height "
         << r.getHeight() << " and area "
         << r.getArea() << endl << endl;
    
    //if test passed
    bool rTest1Passed = r.getWidth()==testWidth1
                     && r.getHeight()==testHeight1
                     && r.getName()=="Rectangle";
    
    if(rTest1Passed){
        cout << "setName() has passed the test." << endl;
        cout << "Initialization has passed the test." << endl << endl;;
    }
    
    //test2 for rectangle class
    //**************************************
    double testWidth2 = 49.2;
    double testHeight2 = 66.6;
    
    cout << "We will test setWidth() with a value of "
         << testWidth2 <<", lets see how this goes.." << endl;
    
    r.setWidth(testWidth2);
    
    cout << "We will test setHeight() with a value of "
         << testHeight2 <<", lets see how this goes.." << endl;
    
    r.setHeight(testHeight2);
    
    //result
    cout << "*" << "The new width is: " << r.getWidth() << endl;
    cout << "*" << "The new height is: " << r.getHeight() << endl;
    cout << "*" << "The new area is: " << r.getArea() << endl << endl;
    
    //if test passed
    bool rTest2Passed = r.getArea()==testWidth2*testHeight2
                     && r.getWidth() == testWidth2
                     && r.getHeight()==testHeight2;
    
    if(rTest2Passed){
    cout << "setWidth() has passed the test." << endl;
    cout << "setHeight() has passed the test." << endl;
    cout << "getWidth() has passed the test." << endl;
    cout << "getHeight() has passed the test." << endl;
    cout << "getArea() has passed the test.\n" << endl;
    }
    
    return 0;

}

//output:
//
//    Testing Circle Class:
//    We have created a circle with radius 2
//
//    *Circle has radius 2 and area 12.5664
//
//    setName() has passed the test.
//    Initialization has passed the test.
//
//    We will test setRadius() with a value of 5, lets see how this goes..
//    *The new radius is: 5
//    *The new area is: 78.5397
//
//    setRadius() has passed the test.
//    getRadius() has passed the test.
//    getArea() has passed the test.
//
//    Testing Rectangle Class:
//    We have create a rectangle with width of 3 and height of 4
//
//    *Rectangle has width 3 and height 4 and area 12
//
//    setName() has passed the test.
//    Initialization has passed the test.
//
//    We will test setWidth() with a value of 8, lets see how this goes..
//    We will test setHeight() with a value of 6, lets see how this goes..
//    *The new width is: 8
//    *The new height is: 6
//    *The new area is: 48
//
//    setWidth() has passed the test.
//    setHeight() has passed the test.
//    getWidth() has passed the test.
//    getHeight() has passed the test.
//    getArea() has passed the test.
//
//    Program ended with exit code: 0
//
//
//
//    Testing Circle Class:
//    We have created a circle with radius 8
//
//    *Circle has radius 8 and area 201.062
//
//    setName() has passed the test.
//    Initialization has passed the test.
//
//    We will test setRadius() with a value of 0, lets see how this goes..
//    *The new radius is: 0
//    *The new area is: 0
//
//    setRadius() has passed the test.
//    getRadius() has passed the test.
//    getArea() has passed the test.
//
//    Testing Rectangle Class:
//    We have created a rectangle with width of 88 and height of 100
//
//    *Rectangle has width 88 and height 100 and area 8800
//
//    setName() has passed the test.
//    Initialization has passed the test.
//
//    We will test setWidth() with a value of 45, lets see how this goes..
//    We will test setHeight() with a value of 65.5, lets see how this goes..
//    *The new width is: 45
//    *The new height is: 65.5
//    *The new area is: 2947.5
//
//    setWidth() has passed the test.
//    setHeight() has passed the test.
//    getWidth() has passed the test.
//    getHeight() has passed the test.
//    getArea() has passed the test.
//
//    Program ended with exit code: 0
//
//
//
//    Testing Circle Class:
//    We have created a circle with radius 10
//
//    *Circle has radius 10 and area 314.159
//
//    setName() has passed the test.
//    Initialization has passed the test.
//
//    We will test setRadius() with a value of 12, lets see how this goes..
//    *The new radius is: 12
//    *The new area is: 452.389
//
//    setRadius() has passed the test.
//    getRadius() has passed the test.
//    getArea() has passed the test.
//
//    Testing Rectangle Class:
//    We have created a rectangle with width of 56 and height of 45
//
//    *Rectangle has width 56 and height 45 and area 2520
//
//    setName() has passed the test.
//    Initialization has passed the test.
//
//    We will test setWidth() with a value of 49.2, lets see how this goes..
//    We will test setHeight() with a value of 66.6, lets see how this goes..
//    *The new width is: 49.2
//    *The new height is: 66.6
//    *The new area is: 3276.72
//
//    setWidth() has passed the test.
//    setHeight() has passed the test.
//    getWidth() has passed the test.
//    getHeight() has passed the test.
//    getArea() has passed the test.
//
//    Program ended with exit code: 0
