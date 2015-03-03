int funct(int length, int width) 	// function declaration
int funct( int, int) 	// the same declaration, just about form
int funct(int length, int width) {...}	// function defination.
float func(void)	// zero argument;  funct() mean zero arg in C++ and indeterminate in C.
void func(void)		// no arg, no return


int a=0	// definition and definition; strongly suggest initiation at definition, or it will contain garbage.
extern int a	// declaration alone
bool quit = false;	// boolean variables


#include <iostream> 	// gook
#include "local"	// good, start searching from local directary

#include <iostream.h>	= include + namespace std // bad, old C, will set namespace to std by side effect. NO h is better
#include <cstdio>	// better, to prepend a c before the name

using namespace std;

//**************************************************
//		Header, start up
//**************************************************

//: /home/john/Dropbox/test/Hello.cpp              	//# good habit: file location
// saying hello with C++
#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
        cout << "Hello, World! I  am"
                << 8 << "Today!" << endl;
} ///:~							// Ending comment


// compile:
john@desktop:~/Dropbox/CPP/test$ g++ Hello.cpp -o good.x


//**************************************************
//		input & output
//**************************************************
// input & output
int number; cin >> number; cout << "input= " << oct << number << endl;	// oct for octal number; hex for hexi...


#include <cstdlib> 
system("cd xxx; ls ; cat > xxx"

// ***** from / to files
#include <fstream>
ifstream in("input_file.txt"); ofstream out("output_file.txt"); string s; // open files
while(getline(in,s)) out << s << "\n";	// getline discards newline char
	

//**************************************************
//		Controlling execution
//**************************************************
// if-else, while, switch, do-while,

if(i>5)
  {cout << "i>5" << endl;}
  else
    if ()  { ;}
    else   { ;}
//or
if()
  if() ...;
  else ...;
else ...;


while(guess!=secret){
  cout << "guess the number again."
  cin >> guess;
}

while(/* Do a lot here */) 
  ;


do 
  statement
while(expression/conditional)


for(int i=0; i<128; i++)
  statement;

break; 		// stop the for or while looping
continue;	// go to next cycle of the loop


switch (selector) {
    case intergral-value1 : statement; break;
    case 'b' : statement; break;	// without break, flow will "drop through" next case.
    case 'c' : statement; break;
    case 'd' : statement; break;
    default: statement;
}

// ***** a plausible case to use goto *****
// when you have several levels of for and while loops

for (i=0; i<100; i++) {
  for () {
    if(val > 300) {
      goto bottom; // a break only make you to the outer for loop
    } 
  }
}
bottom: // a label

If it is just two levels, add a test in the first for conditional can save that goto
e.g. for (i=0; i<100 && val <=300; i++) {



//**************************************************
//		String manipulation
//**************************************************
#include <string>
string s1="Good morning!", s2=s1+" Bob.";	// initialing two strings on the same line, and annex on sth
cout << s2 + "\n"


//**************************************************
//		Vector usage
//**************************************************
// not knowing how many iterms in the arry.
#include <vector> 

vector<string> v; string line; ifstream in("input_file.txt");
while(getline(in,line)) v.push_back(line);
for(int i=0; i<v.size(); i++) cout << i << ": " << v[i] << endl;



//**************************************************
//		Pointers & reference
//**************************************************
int* ipa, ipb, ipc;	// ipb and ipc will be integer instead of pointer in this case.
int* ipa, * ipb, * ipc;  int a=3, b=4, c=5;  ipa=&a; ipb=&b;
        cout << "a= "<< a << " adress: " << (long)ipa<< endl;
        cout << "b= "<< *ipb << " adress: " << (long)ipb<< endl;	// *ipb id dereference.

cout << "address of func(): " << (long)&func << endl; 
cout << "address of i: " << (long)&i << endl;	// without (long) casting, address will be printed out in hexadecimal

// ***** usage: modify outside object with pointer*****




//**************************************************
//		Garage for mis. gears
//**************************************************
char c='a'; sizeof(c);


add something

add something again

























