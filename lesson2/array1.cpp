//Examples on Arrays
//Display elements in number array
//Demonstrate there is no bounds-checking in C++

#include <iostream>
using namespace std;

int main()
{
    int num[4] = {2, 5, 8, 13};
    int i;
    cout << "These are the values in the array;" << endl;
    for (i=0; i<=4; i++)
        cout << "num[" << i <<"] :" << num[i] << endl;
        
    return 0;
}
