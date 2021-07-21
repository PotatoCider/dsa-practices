#include <iostream>
using namespace std;

int main()
{
    int num[4]={0, 2, 4, 6};
    int *p;
    p = &num[0];
    cout << *p << " " << *(p+1) << " " << *(p+2) << " " << *(p+3) << endl;
    cout << *num << " " << *(num+1) << " " << *(num+2) << " " <<*(num+3) << endl;

   char name[]="Ray Ban";
    cout << name<< endl;
    cout << *name << " " << *(name+1) << endl;


    return 0;
}
