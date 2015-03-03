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


    class Acess { int i; public: int read () const {return i;} void set(int ii) {i=ii;} };
int main (int argc, char* argv[]) {
     Acess A; A.set(100); int x=A.read();
     cout << A.read() << "x: " << x << endl;
PR(x);
} ///:~

