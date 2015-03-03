//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cassert>

using namespace std;
const int & q= 12;

//int & q2= 13;

int x=0; int & a=x;

int main (int argc, char* argv[]) {
cout << "x = " << x << ", a= " << a<< endl;
a++;
cout << "x = " << x << ", a= " << a<< endl;
a=10;
cout << "x = " << x << ", a= " << a<< endl;
x=5;
cout << "x = " << x << ", a= " << a<< endl;
x--;
cout << "x = " << x << ", a= " << a<< endl;

cout << "q = " << q <<  endl;

} ///:~

