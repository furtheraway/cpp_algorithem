//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cassert>

using namespace std;

class  HowMany { 
	static int objectCount;
	public:
	HowMany () {objectCount++;}	// constructor call is necessary to retain meaning 
	                                // of objectCount. But passing by value does not call 
					// constructor, but does call destroctor.
	static void print (const string& msg = "") {
		if(msg.size()!=0) cout << msg << ": ";
		cout << "objectCount =" << objectCount << endl;
	}
	~HowMany() {
		objectCount--;
		print("~HowMany()");
	}
};

int HowMany:: objectCount =0;		// static members initiation. Has to be there.	

HowMany f(HowMany x) {
	x.print("x argument inside f()");
	return x;
}

int main() {
	HowMany h;
	HowMany::print("after construction of h");
	HowMany h2=f(h);	// h is passed by value, which is primitive bitcopying here. 
				// no constructor is called; but when local object h get the 
				// end of the end of f(), the destructor is called.
		// and h2 is also created by betcopying. The returning of an object from a funciton.
		// When you pass an object by value, or return an object from a function, you create a new object, and pass or return it.
		// IMP, the way (How) you create a new object from an existing one can cause problem. 
	// the compiler's assumption is that you want to perform bitcopy, and in many cases this may work fine. But not here.
	HowMany::print("after call h2=f(h);");
} ///:~
