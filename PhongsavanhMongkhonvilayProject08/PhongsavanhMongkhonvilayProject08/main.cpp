//
//  main.cpp
//  PhongsavanhMongkhonvilayProject08
//
//  Created by phongsavanh Mongkhonvilay on 4/19/22.
//

#include <iostream>
#include <string>
#include "Set.cpp"
using namespace std;
using namespace myset;

//***************************************
//print helper function
//***************************************
template<class T>
void print(Set<T> set){
    T *ptr = set.toArray();
    if(ptr != NULL){
        for(int i=0; i<set.size(); i++){
            cout << i+1 << "] "<< ptr[i] << endl;
        }
        cout << endl;
        delete[] ptr;
    }else{
        cout << "The set is empty." << endl << endl;
    }
}

//***************************************
//main
//***************************************
int main() {
    
    Set<int> intSet;
    cout << "Creating set..." << endl;
    
    //***************************************
    //test default constructor
    //***************************************
    cout << "length is: " << intSet.size() << endl << endl;
    print(intSet);
    
    if(intSet.size()==0){
        cout << "test passed for default constructor." << endl;
    }
    
    cout << endl;

    //***************************************
    //test add method
    //***************************************
    cout << "Adding 3, 87, 63, 54, 85, 92, 92: " << endl;
    intSet.add(3);
    intSet.add(87);
    intSet.add(63);
    intSet.add(54);
    intSet.add(85);
    intSet.add(92);
    intSet.add(92);

    print(intSet);
    cout << endl;
    
    if(intSet.size()==6){
        cout << "test passed for size method." << endl;
        cout << "test passed for add method." << endl<< endl;
    }
    
    
    //***************************************
    //test contains method
    //***************************************
    cout << "Contains 92: " << (intSet.contains(92)?"true":"false") << endl;
    
    cout << "Contains 2: " << (intSet.contains(2)?"true":"false") << endl;

    cout << endl;
    
    if(intSet.contains(92) && intSet.contains(2)){
        cout << "test passed for contains method." << endl<< endl;
    }
    
    //***************************************
    //test remove method
    //***************************************
    cout << "Removing 92, 87 3..." << endl;
    intSet.remove(92);
    intSet.remove(87);
    intSet.remove(3);

    print(intSet);
    cout << endl;
    
    if(!intSet.contains(92) && !intSet.contains(3) && !intSet.contains(87)){
        cout << "test passed for remove method." << endl<< endl;
    }
    
    //***************************************
    //test (=) operator overload
    //***************************************
    Set<int> newIntSet = intSet;
    newIntSet.add(1529);
    cout << "New set with 1529 added: " << endl;
    print(newIntSet);
    
    cout << "Original set is: " << endl;
    print(intSet);
    
    if(intSet.size()==3 && newIntSet.size()==4){
        cout << "test passed for (=) overload operator." << endl<< endl;
    }
    
    //***************************************
    //test set for strings
    //***************************************
    cout << "Creating string set..." << endl;
    Set<string> stringSet;
    stringSet.add("eddy");
    stringSet.add("eddy");
    stringSet.add("ana");
    stringSet.add("phally");
    stringSet.add("korra");
    stringSet.add("bouraphanh");
    stringSet.add("azula");
    
    cout << "String set is:" << endl;
    
    print(stringSet);
    
    stringSet.remove("eddy");
    stringSet.remove("ana");
    stringSet.remove("bouraphanh");
    
    cout << "String set after removing ""eddy"", ""ana"", and ""bouraphanh"": " << endl;
    
    print(stringSet);
    
    if(intSet.size()==3){
        cout << "test passed for string set." << endl<< endl;
    }
    
    //***************************************
    //test clear method
    //***************************************
    stringSet.clear();
    cout << "clearing contents of set..." << endl;
    print(stringSet);
    
    if(intSet.size()==3){
        cout << "test passed for clear method." << endl<< endl;
    }
    
    
}

//output:
//
//Creating set...
//length is: 0
//
//The set is empty.
//
//test passed for default constructor.
//
//Adding 3, 87, 63, 54, 85, 92, 92:
//1] 3
//2] 87
//3] 63
//4] 54
//5] 85
//6] 92
//
//
//test passed for size method.
//test passed for add method.
//
//Contains 92: true
//Contains 2: false
//
//Removing 92, 87 3...
//1] 63
//2] 54
//3] 85
//
//
//test passed for remove method.
//
//New set with 1529 added:
//1] 63
//2] 54
//3] 85
//4] 1529
//
//Original set is:
//1] 63
//2] 54
//3] 85
//
//test passed for (=) overload operator.
//
//Creating string set...
//String set is:
//1] eddy
//2] ana
//3] phally
//4] korra
//5] bouraphanh
//6] azula
//
//String set after removing eddy, ana, and bouraphanh:
//1] phally
//2] korra
//3] azula
//
//test passed for string set.
//
//clearing contents of set...
//The set is empty.
//
//test passed for clear method.
//
//Program ended with exit code: 0
