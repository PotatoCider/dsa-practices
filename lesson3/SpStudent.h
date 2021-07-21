#include <iostream>
#include <string>
using namespace std;

class SpStudent {
   public:
    SpStudent();
    SpStudent(string, string, double);

    ~SpStudent(){};
    string getName();
    void setName(string);
    string getID();
    void setID(string);
    double getGPA();
    void setGPA(double);
    void studentPrint();
    double compareGPAwith(SpStudent s);

   
   private:
    string name;
    string ID;
    double GPA;
};