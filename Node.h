#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Student; 

class Node {
public:
    // Constructor that creates a node storing the given student pointergit 
    Node(Student* s);

    // Destructor
    ~Node();

    // Get next Node pointer
    Node* getNext();

    // Get Student pointer
    Student* getStudent();

    // Set next Node pointer
    void setNext(Node* n);

private:
    Student* student; 
    Node* next;       
};

#endif
