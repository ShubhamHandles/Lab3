// Q.2. Write a C++ program to use arithmetic operators on two numbers (You are supposed to declare two variables with integer/float values and work the rest of the problem with them) and find their sum, difference, multiply, divide and modulus (Remainder) and display them individually.

// library
#include<iostream>
using namespace std;
int main()
{
cout << "HELLO!" << endl;
// declaring variables
float a,b;
a = 8.1;
b = 2.7;
// performing  operations
float sum = a+b;
float difference = a-b;
float multiply = a*b;
float divide = a/b;
int c,d;
c = 9;
d = 2;
int modulus = c%d;
// displaying the results
cout << "The sum of a & b = " << sum << endl;
cout << "The difference of a & b = " << difference << endl;
cout << "The product of a & b = " << multiply << endl;
cout << "The division of a by b = " << divide << endl;
cout << "The remainder when c divided d = " << modulus << endl;
return 0;
}
