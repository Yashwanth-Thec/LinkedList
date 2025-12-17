#include <iostream>
#include <cstring>

#include "Node.h"
#include "Student.h"

using namespace std;

int main(){
  char name1[] = "Meddi";
  char name2[] = "KimThatha";

  Student* s1 = new Student(name1, 21);
  Student* s2 = new Student(name2, 96);

  Node* n1 = new Node(s1);
  Node* n2 = new Node(s2);

  n1->setNext(n2);

  cout << "Node 1 Student:" << n1->getStudent()->getName() << endl;
  cout << "ID: "<< n1->getStudent()->getID() << endl; 

  cout << "Node Next Student: " << getNext()->n1->getStudent()->getName() << endl;

  delete n1;
  delete n2;
  delete s1;
  delete s2;
  



}
