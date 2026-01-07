#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student{
 public:
  Student(char nameInput[], int idInput);

  char* getName();
  int getID();
  float getGPA();

 private:
  char name[100];
  int id;
  float GPA;
};

#endif
