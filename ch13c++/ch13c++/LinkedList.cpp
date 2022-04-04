//
//  LinkedList.cpp
//  Project05
//
//  Created by phongsavanh Mongkhonvilay on 3/10/22.
//

#include "LinkedList.h"
#include <iostream>

namespace LinkedList{
Node::Node(): data(0), link(NULL){}

Node::Node(int value, Node* next): data(value), link(next){}

int Node::getData() const{
    return data;
}

Node* Node::getLink() const{
    return link;
}

void Node::setData(int value){
    data = value;
}

void Node::setLink(Node* next){
    link = next;
}

}
