//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cassert>

using namespace std;

void increment(int*& i) {i++;}  // i is a int*

int main (int argc, char* argv[]) {
int * i=0;
cout << "i= " << i <<endl;
increment(i);
cout << "i= " << (long)i <<endl;

} ///:~

