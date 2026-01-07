#include "Node.h"
#include "Student.h" 

Node::Node(Student* s) {
    student = s;
    next = nullptr;
}

Node::~Node() {
    
}

Node* Node::getNext() {
    return next;
}

Student* Node::getStudent() {
    return student;
}

void Node::setNext(Node* n) {
    next = n;
}
