#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int Id, char stdName[]) {
  studentId = Id;
  strcpy(name,stdName);
}

// Display StudentId and Name
void Student::display() {
  cout<<studentId;
  cout<<name;
  
}
