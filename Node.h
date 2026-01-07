#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Student; // forward declaration

class Node {
public:
    // Constructor that creates a node storing the given student pointer
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
    Student* student; // required variable
    Node* next;       // required variable
};

#endif
