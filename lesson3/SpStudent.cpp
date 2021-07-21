#include "SpStudent.h" /* this is the file that contains the preceding declarations */

SpStudent::SpStudent() {
    name = "";      // null string, default
    ID = "p00000";  // default value
    GPA = 0.0;      //default value
}

SpStudent::SpStudent(string Name, string Idnum, double Gpanum) {
    name = Name;  //take on values specified in parameters
    ID = Idnum;
    GPA = Gpanum;
}

// above two function �construct� objects with some data //values. More to follow�
string SpStudent::getName() {  //getter
    return name;
}

void SpStudent::setName(string Name) {  //setter
    name = Name;
}

string SpStudent::getID() {  //getter
    return ID;
}

void SpStudent::setID(string Idnum) {  //setter
    ID = Idnum;
}

// more to follow�
double SpStudent::getGPA() {
    return GPA;
}
void SpStudent::setGPA(double Gpanum) {
    GPA = Gpanum;
}

void SpStudent::studentPrint() {
    cout << "A student named " << getName()
         << " with student ID " << getID()
         << " has a GPA of " << getGPA() << "."
         << endl;
}

double SpStudent::compareGPAwith(SpStudent s) {
    return getGPA() - s.getGPA();
}

//this ends the implementation file..
//call it �SpStudent.cpp� as it is made up //of C++ statements�
