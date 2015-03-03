//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cassert>
//using namespace std;
#define PRINT(STR, VAR) cout << STR << " = " << VAR << endl
#define PRINT1(STR, VAR) \
	                cout << STR << " = " << VAR << endl
#define PR(EX) cout << #EX << ": " << EX << endl

// works: namespace X {class Z {int u, v, w; public: Z(int i) { u=v=w=i;};};}

namespace X {
       class Y {
         static int i;
       public:
         void f();
       };
       class Z;
       int func();
}

int X::Y::i=9;
class X::Z {
	int u, v, w;
	public:
	Z(int i);
	int g();
};

X::Z::Z(int i) {u=v=w=i;}

int X::Z::g() {return u;}

int X::func() {
	X::Z a(1);
      return	a.g();
}

int main() {
using namespace X;	
using namespace std;	
X::Z z(1);
cout << z.g();
cout << func();
}


 ///:~

