//
//  main.cpp
//  Project05
//
//  Created by phongsavanh Mongkhonvilay on 3/10/22.
//

#include <stdio.h>
#include <iostream>
#include "LinkedList.h"
using namespace std;
using namespace LinkedList;

void headInsert(NodePtr& head, int theNumber){
    NodePtr tempPtr;
    
    tempPtr = new Node(theNumber, head);
    head = tempPtr;
}

int main(){
    NodePtr head, tmp;
    
    head = new Node(0,NULL);
    
    for(int i = 1; i<5; i++){
        headInsert(head, i);
    }
    tmp = head;
    while(tmp != NULL){
        cout << tmp->getData() << endl;
        tmp = tmp->getLink();
    }
    
    tmp = head;
    while(tmp != NULL){
        NodePtr nodeToDelete = tmp;
        tmp = tmp->getLink();
        delete nodeToDelete;
    }
    return 0;
    
    
    
}
