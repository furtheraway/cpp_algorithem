//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cassert>
using namespace std;
#define PRINT(STR, VAR) cout << STR << " = " << VAR << endl
#define PRINT1(STR, VAR) \
	                cout << STR << " = " << VAR << endl
#define PR(EX) cout << #EX << ": " << EX << endl

class X { public : int i; public: X(int ii=0); void modify();};

X::X(int ii) {i=ii;}; void X::modify() { i++; }

int main (int argc, char* argv[]) {

	X(12);
	cout << X(16).i << endl;
	cout << "Hello, World! I  am"
		<< 8 << "Today!" << endl;
} ///:~

