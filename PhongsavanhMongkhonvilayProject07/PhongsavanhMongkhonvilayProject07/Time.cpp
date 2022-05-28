//
//  time.cpp
//  PhongsavanhMongkhonvilayProject07
//
//  Created by phongsavanh Mongkhonvilay on 4/13/22.
//

#ifndef Time_cpp
#define Time_cpp

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class Time{
protected:
    int hours;
    int minutes;
    
public:
    Time(){
    }
    
    Time(int hours, int minutes){
        this->hours = hours;
        this->minutes = minutes;
    }
    
    int getHours(){
        return this->hours;
    }
    
    int getMinutes(){
        return this->minutes;
    }
    
    void getTime(){
        cout << this->hours << ":" << this->minutes << endl;
    }
    
    void setHours(int hours){
        this->hours = hours;
    }
    
    void setMinutes(int minutes){
        this->minutes = minutes;
    }
    
    Time convertTo12hr(){
        Time temp(this->hours-12, this->minutes);
        
        return temp;
    }
    
};

class TimeFormatMistake: public Time, public exception{

    virtual const char* what() const throw()
    {
        return "Time is invalid";
    }
};

#endif
