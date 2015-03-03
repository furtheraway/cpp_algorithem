//: /home/john/Dropbox/test/Hello.cpp
// saying hello with C++
#include <iostream> 
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cassert>
#include "/home/john/Dropbox/CPP/require.h"

using namespace std;

class IntArray {
       	enum { sz=5}; int i[sz]; 
	public: IntArray () {memset(i,0,sz*sizeof(*i));}
	int& operator[](int x) {
		//require(x>=0 && x< sz, "IntArray::operator[] out of range");
		require(x>=0 && x< sz-1, "IntArray::operator[] out of range");
		return i[x];
	}
	friend ostream& operator << (ostream& os, const IntArray& ia);
//	friend istream& operator >> (istream& is, IntArray& ia);	// not const IntArray& ia
	friend void operator >> (istream& is, IntArray& ia);	// not const IntArray& ia
};

ostream& operator<<(ostream& os, const IntArray& ia) {
	for (int j=0; j< ia.sz; j++) {
		os<<ia.i[j];
		if (j != ia.sz -1) os <<  ", ";
	}
	os << endl;
	return os;
}

//istream& operator>>(istream& is, IntArray& ia) {
void operator>>(istream& is, IntArray& ia) {
	for (int j=0; j< ia.sz; j++) is>> ia.i[j];
//	return is;
}
int main() { 
	stringstream input("11 22 33 44 55 66 77 88");
	IntArray I;
	input >> I;
	I[4] = -1;
	cout << I;
}


 ///:~

