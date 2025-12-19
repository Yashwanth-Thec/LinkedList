#include "Student.h"

Student::Student(char nameInput[], int idInput[]){
  strcpy(name, nameInput);
  id = idInput;
}

char* Student:: getName(){
  return name;


}

int Student:: getID(){
  return id;

}
