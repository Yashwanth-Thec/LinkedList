#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node{
 public:
  Node(Student* s);
  -Node();
  Student* getStudent();
  Node* setNext();
  void setNext(Node* n);
 private:
  Student* student;
  Node* next;
};

#endif
