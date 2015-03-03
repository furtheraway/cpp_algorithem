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

int main (int argc, char* argv[]) {



/*	// constants in aggregates. not in symbol talbe, storage allocated, but can not be used. Seems stupid to me for not being used.
	// the test result is that it works!
	// Maybe the book thinking in C++ is outdated in the point
	const int j[]={1,2,3,4};
	int i[]={5,6,7,8};
	struct couple {int i,j;};
	couple nc[]={{3,4}};
	const couple c[]={{1,2}};
	double a[9], x[i[1]], y[nc[0].j]; // be careful! zero based indexing!
	double z[j[3]], w[c[0].i];
//	cout << sizeof a << endl;
	cout << sizeof x << endl;
	cout << sizeof y << endl;
	cout << sizeof z << endl;
	cout << sizeof w << endl; 
*/

/*	int* ip = new int[100]; *(ip+4)=16; PR(ip[4]); PR(ip[6]); 
	delete []ip; PR(ip[4]); PR(ip[6]);*ip=3; PR(ip[0]);
*/

//	int i=3; cin >> i; assert(i==5);

	//cout << "Hello, World! I  a m"	<< 8 << " Today!" << endl;

	//int number; cin >> number; cout << "input= " << oct << number << endl;
	
	//system("ls");
	
	//string s1="Good morning!", s2=s1+" Bob.";	cout << s2 + "\n";
	
	//ifstream in("../foo.cpp"); ofstream out("output_file.txt");	string s;
	//while(getline(in,s)) out << "    "<< s << "\n";	// getline discards newline char

	//vector<string> v; string line; ifstream in("input_file.txt");
	//while(getline(in,line)) v.push_back(line);
	//for(int i=0; i<v.size(); i++) cout << i << ": " << v[i] << endl;
	
	/*int* ipa, * ipb, * ipc;
	int a=3, b=4, c=5;
	ipa=&a; ipb=&b;
	cout << "a= "<< a << " adress: " << (long)ipa<< endl;
	cout << "b= "<< * ipb << " adress: " << (long)ipb<< endl;
	*/

	/*   //void func(int & r) { r=5;}
	void func(int & r); // it seems c++ not allow function defined in main{}
	int x=47; cout << "x old: "<<x; func(x); cout << " x new: "<<x<<endl;	// loks like pass-by-value, is actually pass by reference    
	*/

/*	void func1(); // test static variable in function
	func1(); // 
	func1(); // 
	func1(); // 
*/	

	/* test macro PRINT and PRINT1
	int j=1; i=1;
	string s="string"; 
	PRINT(s,j); 
	PRINT1(s, j); */
	
	// int j=2, i=1; cout << (bool)(i==j) << endl;  // test bool reasult
	//  cout << (i==j) << endl;  // test bool reasult
	  // above two line only produce 0 instead of FALSE
	//  PRINT("i==j", (bool)(i==j));
	//  PRINT("i==j", (i==j));

	// arguments control 
/* 	cout << "argc = " << argc << endl;
        for (int i=0; i<argc; i++){ 
           cout << "argv["<< i << "] = " << argv[i] << endl;
	   cout << "argv["<< i << "] = " << atof(argv[i]) << endl;}
*/

//	int a[10]={0,1,2,3,4,5,6,7,8,9}; int*ip=a; PR(*(ip+5)); PR(ip[2]);

} ///:~

	void func(int & r) { r=5;}

   	void func1() {
        static int i = 0; 	// initiation only happens when the func 
	//is first time called; i leave throughout the life of a program
        cout << "i= " << ++i << endl;
    }

