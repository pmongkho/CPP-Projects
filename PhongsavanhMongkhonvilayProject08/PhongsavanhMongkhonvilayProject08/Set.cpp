//
//  Set.cpp
//  PhongsavanhMongkhonvilayProject08
//
//  Created by phongsavanh Mongkhonvilay on 4/19/22.
//


#ifndef SET_CPP
#define SET_CPP
#include <stdio.h>

//namespace
namespace myset{

//***************************************
//class
//***************************************
template<class T>
class Set{
    
//***************************************
//private data members
//***************************************
private:
    T *set;
    int length;
    
//***************************************
//public methods
//***************************************
public:
    
    //***************************************
    //constructors
    //***************************************
    //default
    Set(): set(NULL), length(0){
        
    }
    
    //constructor with parameter
    Set(const Set<T>& other){
        length = other.length;
        set = other.toArray();
    }
    
    //***************************************
    //destructor
    //***************************************

    ~Set(){
        if(set != NULL){
            delete[] set;
        }
    }
    
    //***************************************
    //mutators
    //***************************************
    
    //**********************
    // = operator overload
    //**********************
    void operator= (const Set<T>& rightSide){
        //if not null delete old set
        if(set != NULL){
            delete[] set;
        }
        
        //assign the newSet to set
        length = rightSide.length;
        set = rightSide.toArray();
    }
    
    //**********************
    //add
    //**********************
    void add(T data){
        //if data not in set
        if(!contains(data)){
            //create newSet with new length
            T *newSet = new T[length + 1];
        
            //copy set to newSet
           for(int i=0; i<length; i++){
            newSet[i] = set[i];
           }
            
           //add to end of array
           newSet[length] = data;
            
           //if set not empty, delete set
           if(length > 0){
            delete[] set;
           }
            
            //increment
            length++;
            
            //assign newSet to set
            set = newSet;
        }
    }
    
    //**********************
    //remove
    //**********************
    void remove(T data){
        //if data exist
        if(contains(data)){
            //if length is more than 1
            if(length>1){
                
            //create newSet with new length
            T *newSet = new T[length-1];
            
                //copy set to newSet excluding data
                for(int i=0, j=0; i<length; i++){
                    if(set[i] != data){
                        //j keeps track of newSet index
                        newSet[j] = set[i];
                        j++;
                    }
                }
                
                //delete old set
                delete[] set;
                
                //assign newSet to set
                set = newSet;
                //increment length
                length--;
            
            }
        }
    }
    
    //**********************
    //clear
    //**********************
    void clear(){
        T *newSet = new T[0];
        delete[] set;
        set = newSet;
        length=0;
    
    }
    
    //***************************************
    //accessors
    //***************************************
    //get size
    int size() const{
        return length;
    }
    
    //**********************
    //contains
    //**********************
    bool contains(T data) const{
        //loop to find data
        for(int i=0; i<length; i++){
            if(set[i] == data){
                return true;
            }
        }
        
        return false;
    }
    
    //**********************
    //return T
    //**********************
    T *toArray() const{
        //create newSet
        T *newSet = NULL;
        
        //if not empty, copy
        if(length > 0){
            newSet = new T[length];
            //copy to newSet
            for(int i=0; i<length; i++){
                newSet[i] = set[i];
            }
        }

        return newSet;
    }
    
};
}
#endif
