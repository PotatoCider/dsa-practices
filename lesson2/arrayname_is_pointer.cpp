// Array
//Shows relationship between array subscripts and pointers
//Shows the nature of array name as a pointer which can be dereference

#include <iostream>
using namespace std;

int main()
{
    short num[]={1, 2, 4, 8, 16};
    cout << "The first element is subscripted 0: " << num[0]<< endl;;
    cout << "The element pointed to by num : " << *num << endl;
    cout << "The second element is num[1]: " << num[1] << endl;
    cout << "It can also be represented as *(num+1:) " << *(num+1) << endl;
    cout << "The third element is *(num+2): " << *(num+2) << endl;
    
    return 0;
}
