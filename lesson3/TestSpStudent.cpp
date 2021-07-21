#include "SpStudent.h"

int main() {
    SpStudent She("Betty", "p0123456", 3.5), He("Paul", "p1312345", 3.4);

    She.setName("Betty Chan");
    She.setGPA(3.6);
    He.setGPA(3.2);
    She.studentPrint();
    He.studentPrint();
    cout << "She and He has a GPA difference of " << He.compareGPAwith(She) << endl;
    return 0;
}
