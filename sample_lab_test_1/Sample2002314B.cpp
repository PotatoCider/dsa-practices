// Step 1:
// Write your name and admission No.
// Joseph Goh 2002314
// Date: 11/07/2021
// Write the compiler / pre-processor directives here:
#include <iostream>
#include <string>
using namespace std;

class person {
   private:
    string name;
    char gender;

   public:
    void set_person(string n, char g);
    void display_person(void);
};

void person::set_person(string n, char g) {
    name = n;
    gender = g;
}

void person::display_person(void) {
    cout << "\nName : " << name
         << "\nGender : " << gender << endl;
}

int main() {
    person staff;

    staff.set_person("Annie", 'F');

    cout << "Staff : ";

    staff.display_person();
}