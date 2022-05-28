//
//  Book.h
//  PhongsavanhMongkhonvilayProject09
//
//  Created by phongsavanh Mongkhonvilay on 4/26/22.
//

#ifndef Book_h
#define Book_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <set>

using namespace std;

class Book{
//***********************
//private data members
//***********************
private:
    string title;
    string author;
    string date;
    set<Book> bookList;
    
//***********************
//public member functions
//***********************
public:
    //***********************
    //constructors
    //***********************
    Book(): author(""), title(""), date(""){};
    Book(string author, string title, string date){
        this->title = title;
        this->author = author;
        this->date = date;
    }
    
    //***********************
    //Accessors
    //***********************
    string getTitle () {
        return title;
    }
    
    string getAuthor () {
        return author;
    }
    
    string getDate () {
        return date;
    }
    
    void printBookList(){
        
        cout << "The books sorted alphabetically by author are:" << endl << endl;
        for(Book element: bookList){
            cout << "\t" <<element.getAuthor() << ". ";
            cout << "\"" << element.getTitle() << "\". ";
            cout << element.getDate() << ". " << endl;
        }
        cout << endl;
    }
    
    //***********************
    //Mutators
    //***********************
    void setTitle(string title){
        this->title = title;
    }
    
    void setAuthor(string author){
        this->author = author;
    }
    
    void setDate(string date){
        this->date = date;
    }
    
    void enterBook(){
        string newTitle, newAuthor, newDate;
        cout << "\nEnter Book Title: ";
        getline(cin,newTitle);
        cout << "Enter Book Author: ";
        getline(cin,newAuthor);
        cout << "Enter Book Publishing Date: ";
        getline(cin,newDate);
        cout << endl;
        bookList.insert(Book(newAuthor, newTitle, newDate));
    }
    
    //***********************
    //Operator overload
    //***********************
    friend bool operator<(const Book& b1,const Book& b2);
    
};

#endif /* Book_h */
