////
////  main.cpp
////  Exam 3 study
////
////  Created by phongsavanh Mongkhonvilay on 5/4/22.
////
//
//#include <set>
//#include <iostream>
//using namespace std;
//
//template<class T> T max (T& variable1, T& variable2)
//{
////if (variable1 > variable2) {
////return variable1;
////}
////else
////return variable2;
//    T max = variable1>variable2?variable1:variable2;
//    return max;
//}
//
//int main() {
//
//
//    set<char> s;
//    char c = 'A';
//    for(int i=0; i<26; i++){
//        s.insert(c+i);
//
//    }
//    set<char>::reverse_iterator itr;
//    for(itr = s.rbegin(); itr != s.rend(); itr++){
//        cout << *itr;
//    }
//
//    template<class T> v1;
//
//}

#include <iostream> //erase ;
using namespace std;


template <class T>
void swap_values(T& v1,T& v2) //T&
{
    T    temp    =    v1;
    v1    =    v2;
    v2    =    temp;
}

template <class T> //template
void select_sort(T    a[],    int size)
{
    int index_of_smallest;
    for(int i    =    0;    i    <    size;    i++)
    {
        index_of_smallest    =    i;
        for(int step    =    i    +    1;    step    <    size;    step++)
        {
            if(a[step]    <    a[index_of_smallest]) // add [] to index of smallest
                index_of_smallest    =    step;
            swap_values(a[i],    a[index_of_smallest]); //move in for loop and add a[] to both param
        }
        
        
    }
}//missing }

int main(){
    int a[10]    =    {3,    6,    2,    5,    8,    9,    1,    7,    4};
    select_sort(a,    9); //a instead of a[]
    for(int i    =    0;    i    <    9;    i++) //;
        cout <<    a[i]    <<    "    ";
    return 0; //;
}
