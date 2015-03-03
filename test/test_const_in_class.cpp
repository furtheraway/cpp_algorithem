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

class Fred { const int size; public: const int var; public: Fred(int sz, int var) ; void print() const; };
//class Fred { public: const int size; public: Fred(int sz); void print(); };
//class Fred { public: int size; public: Fred(int sz); void print(); };

    Fred::Fred(int sz=8,int v=5) : size(sz), var(v)  {};
    // Fred::Fred(int sz=8) {size=sz;} // not work for const size
//  Fred::Fred(int sz=8) : size=sz {} // not work as constructor initializer list
    void Fred::print() const {cout<<size<<endl;}
 
int main (int argc, char* argv[]) {
    Fred a(1), b(2), c; a.print(), b.print(); c.print();
//    cout << c.size << endl; // if size is private, can not be outputted by cout
//    c.size=6; c.print();	// if size is const, can not be assigned another value.

const Fred d(2), e(3); d.print(); 
cout << "d.var: "<< d.var << endl; //d.var=7; cout<< d.var<< endl;
cout << "e.var: "<< e.var << endl; //e.var=7; cout<< e.var<< endl;

} ///:~

