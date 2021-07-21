#include <fstream>  //for file operation
#include <iostream>
#include <string>
using namespace std;

void main() {
    int arr[100];
    int i = 0;
    //input file
    ifstream infile;   //infile is an input file object
    ofstream outfile;  //outfile is an output file object

    infile.open("input.txt");
    outfile.open("Nadal.txt");
    //for (i = 0; i < 30; i++)
    //	infile >> arr[i];  //reading values from "input.txt"

    while (!infile.eof())
        infile >> arr[i++];

    cout << "The numbers in the files are : " << endl;
    for (i = 0; i < 30; i++)
        outfile << "p" << arr[i] << endl;  //cout << arr[i] << endl;
    infile.close();
    outfile.close();
}
