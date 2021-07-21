//Illustrate the use of "new" operator to create a dynamic array
//illustrate the use of "delete" operator to delete the dynamic storage

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of marks to enter: " ;
    cin >> num;
    int *marks = new int[num];
    cout << "Enter the marks now: " << endl;
    for (int i=0; i<num; i++)
        cin >> marks[i];

    cout << "The marks entered are : ";
    for (int j=0; j<num; j++)
        cout << marks[j] << " ";
    cout << endl;

    delete [] marks;    //release array memory
    return 0;
}
