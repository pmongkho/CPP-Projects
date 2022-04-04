//
//  LinkedList.hpp
//  Project05
//
//  Created by phongsavanh Mongkhonvilay on 3/10/22.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
namespace LinkedList{
class Node{
private:
    int data;
    Node* link;
public:
    Node();
    Node(int value, Node* next);
    int getData() const;
    Node* getLink() const;
    void setData(int value);
    void setLink(Node* next)
};
typedef Node* NodePtr;
}

#endif /* LinkedList_hpp */
