// Q.1. Write a C++ program to perform declaration and output of all (values of) basic data types and also print out the sizes of data types. 

// Write library
#include <iostream>
using namespace std; 
int main()
{
cout << "Greetings!" << endl;
// Declaring different data types
int a = 12;
float b = 8.1;
char c = 'I';
bool d = true;
double e = 7.29;
// Printing the sizes of data types
cout << "The size of a = " << sizeof(a) << endl;
cout << "The size of b = " << sizeof(b) << endl;
cout << "The size of c = " << sizeof(c) << endl;
cout << "The size of d = " << sizeof(d) << endl;
cout << "The size of e = " << sizeof(e) << endl;
return 0;
}


