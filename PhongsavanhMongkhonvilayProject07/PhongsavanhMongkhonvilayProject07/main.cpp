//
//  main.cpp
//  PhongsavanhMongkhonvilayProject07
//
//  Created by phongsavanh Mongkhonvilay on 4/13/22.
//

#include <iostream>
#include <regex>
#include "Time.cpp"
using namespace std;

int main() {
    int hours;
    int minutes;
    char colon;

    //while loop to replay
    while(true){
        cout << "Enter time in 24-hour notation: " << endl;
        cin >> hours >> colon >> minutes;
            
        //initialize Time
        Time time(hours, minutes);
        
        //bool to see if incorrect time
        bool incorrectTime =  !cin         ||
                             (hours < 0    ||
                              hours > 24)  ||
                             (minutes < 0  ||
                              minutes > 59)||
                              colon != ':';
        //try - catch block
        try{
            //throw class in exception
            if(incorrectTime){
            throw TimeFormatMistake();
                
            }else{
                cout << "That is the same as: ";
                time.convertTo12hr().getTime();
            }

        //catch
        }catch(exception& e){
            cout << "There is no such time format as: ";
            cout << hours << colon << minutes << endl;
        }

        //user input to play again
        char answer;
        cout << "Try Again? (y/N): ";
            cin >> answer;
            if(answer == 'N' || answer == 'n'){
                break;
            }
    }//end while
    
    return 0;
}

//output:
//
//Enter time in 24-hour notation:
//12:23
//That is the same as: 0:23
//Try Again? (y/N): y
//Enter time in 24-hour notation:
//24:45
//That is the same as: 12:45
//Try Again? (y/N): y
//Enter time in 24-hour notation:
//12*45
//There is no such time format as: 12*45
//Try Again? (y/N): 56-89
//Enter time in 24-hour notation:
//There is no such time format as: 6-89
//Try Again? (y/N): n
//Program ended with exit code: 0
