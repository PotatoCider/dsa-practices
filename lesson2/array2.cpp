//Examples on Arrays
//Read in a string object, retreive a character using [] operators
//A string can be an array of characters(C-string) or a string object as in
//this example.

#include <iostream>
//#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your first name: ";
    cin >> name;
    //backup = name;            //make a copy of name
    cout << "Hello, " << name << endl;
    cout << "Your name begins with "<< name[0] << endl;
    
    return 0;
}
