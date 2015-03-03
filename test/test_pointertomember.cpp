//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cassert>

using namespace std;
class Data {public: int a,b,c;	
	void print () const {cout << "a= " << a << ", b= " << b <<", c= " << c << endl;} };

int main (int argc, char* argv[]) {
	Data d, *dp= &d;   dp-> print(); //a= 0, b= 0, c= 4196128; zero initiation is not guaranteed.
	int Data::*pmInt = &Data::a; 	dp->*pmInt = 47;	// initiate a member pointer
	pmInt = &Data::b; 		d.*pmInt = 48;		// reassign a member pointer
	dp-> print();

} ///:~

