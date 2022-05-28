//
//  main.cpp
//  PhongsavanhMongkhonvilayProject09
//
//  Created by phongsavanh Mongkhonvilay on 4/26/22.
//

#include "Book.h"

//define operator overload
bool operator<(const Book& b1,const Book& b2){
    return(b1.author<b2.author);
}

//***********************
//main
//***********************
int main() {
    
    //Book object
    Book books;
    
    //loop for program
    while(true){
    //menu
    cout << "Select from the following choices:" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Print Listing Sorted by Author" << endl;
    cout << "3. Quit" << endl << endl;
    
    //choice
    int answer;
        cout << "Enter choice here: ";
    cin >> answer;
    cin.ignore();
    
        //if 1 enterbook, 2 print, else exit loop
        if(answer==1){
            books.enterBook();
        }else if (answer==2){
            books.printBookList();
        }else{
            break;
        }
        
    }// end while
}//end main

//output:
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: c++
//Enter Book Author: walter
//Enter Book Publishing Date: 1980
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 2
//The books sorted alphabetically by author are:
//
//walter. "c++". 1980.
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: alpha
//Enter Book Author: omega
//Enter Book Publishing Date: 1965
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 2
//The books sorted alphabetically by author are:
//
//omega. "alpha". 1965.
//walter. "c++". 1980.
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: beta
//Enter Book Author: a first author
//Enter Book Publishing Date: 1945
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 2
//The books sorted alphabetically by author are:
//
//a first author. "beta". 1945.
//omega. "alpha". 1965.
//walter. "c++". 1980.
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 3
//Program ended with exit code: 0

//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: The prince
//Enter Book Author: Machiavelli, Niccolo
//Enter Book Publishing Date: 1785
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: c++
//Enter Book Author: walter savich
//Enter Book Publishing Date: 1980
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: java
//Enter Book Author: Dr. Zeng
//Enter Book Publishing Date: 1975
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 2
//The books sorted alphabetically by author are:
//
//    Dr. Zeng. "java". 1975.
//    Machiavelli, Niccolo. "The prince". 1785.
//    walter savich. "c++". 1980.
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 3
//Program ended with exit code: 0

//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: title1
//Enter Book Author: c
//Enter Book Publishing Date: 1980
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: title2
//Enter Book Author: b
//Enter Book Publishing Date: 1970
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: title3
//Enter Book Author: a
//Enter Book Publishing Date: 1960
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 1
//
//Enter Book Title: title4
//Enter Book Author: z
//Enter Book Publishing Date: 1950
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 2
//The books sorted alphabetically by author are:
//
//    a. "title3". 1960.
//    b. "title2". 1970.
//    c. "title1". 1980.
//    z. "title4". 1950.
//
//Select from the following choices:
//1. Add Book
//2. Print Listing Sorted by Author
//3. Quit
//
//Enter choice here: 3
//Program ended with exit code: 0
