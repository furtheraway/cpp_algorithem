//**************************************************************************
//			Cannot be catogrized
//**************************************************************************
    int funct(int length, int width) 	// function declaration
    int funct(int length, int width = 2) 	// Function declaration with default argument. Default arguments are only placed in the declaration of a
    or int funct(int length, int  = 2)		// function, typically in a header file. ONLY trailing arguments can be defaulted.
						// At times, people place commented values in defination for documentation purposes.
						// Especially imp use of default argu is in adding arguments in existion functions. By defaulting all new arguments, you ensure that all client code useing the previous interface is undisturbed.
    int funct( int, int) 	// the same declaration, just about input argument type
    int funct(int length, int width /* =2 */) {...}	// function defination. you have {} holding the body of the function.
    
    int funct(int a, int, int b) {};	// you can place a place holder in the definition, for future development. 
    
    float func(void)	// zero argument;  funct() mean zero arg in C++ and indeterminate in C.
    void func(void)		// no arg, no return
    const int x=10

    void func() {
      static int i = 0; 	// (static) initiation only happens when the func is first time called; i live throughout the life of a program
      cout << "i= " << ++i << endl;
    }
    
    static int i=0; // for global variable (the one outside of all functions), static make it unavailable outside of this file.

// ***** preprocessor macros *****
    #define PRINT(STR, VAR) cout << STR << " = " << VAR << endl // you can leave spaces around arguments, but no space between PRINT and ()
or  #define PRINT(STR, VAR) \		// use \ to continue on next line
            cout << STR << " = " << VAR << endl

    #define PR(EX) cout << #EX << ": " << EX << endl;	// # stringizing takes any expression and turn it into a character array. only used in macros.
    use: main(){int a[10]={0,1,2,3,4,5,6,7,8,9}; int*ip=a; PR(*(ip+5)); PR(ip[2]);}	// you can put it this way, int*ip=a; (that compact)
    // do remember to put parentheses wherever possible to eliminate killer bugs.

    #define FIELD(a) char* a##_string; int a##_size	// token pasting, put two identifiers and make them one.
    FIELD(one);
    
    int a=0	// definition and definition; strongly suggest initiation at definition, or it will contain garbage.
    extern int a	// declaration alone
    bool quit = false;	// boolean variables
    
          
    #include <iostream> 	// good
    #include "local"	// good, start searching from local directary
    
    #include <iostream.h>	= include + namespace std // bad, old C, will set namespace to std by side effect. NO h is better
    #include <cstdio>	// better, to prepend a c before the name
    
    using namespace std;

// ***** inline function to replace preprocessor macros *****
    // usually in header file. No problem with multiple definition as along as identical ones.
    inline int plusOne (int x) { return ++x;} 
    // rule of thumb, don't put loops in an inline function. Actually inline is just a suggestion to compiler, like register
    // forward reference is allowed since no inline functions in a class shall be evaluated until the closing brace fo the class declaration.

// ***** accessors and mutators, inline function used to avoid exposure/existence of any public member of a class *****
    class Acess { int i; public: int read () const {return i;} void set(int ii) {i=ii;} };
    int main() { Acess A; A.set(100); int x=A.read();}


    
//**************************************************************************
//		Header, start up
//**************************************************************************
    
    //: /home/john/Dropbox/test/Hello.cpp              	//# good habit: file location 
    //: /home/john/Dropbox/test/Hello.cpp {O}         	//# good habit: object file to be liked, won't produce executable.
    //{L} Global2					//# linkage to another file(Global2) needed to work properly.
    // saying hello with C++				// discriptions
    #include <iostream>
    #include <fstream>
    #include <sstream>
    #include <cstdlib>
    #include <vector>
    #include <cstring>
    #include "../require.h"	// a self-written header including various improved error checking functions, explicited in file with the same name.

    using namespace std;

    bool debug = false;	// not necessarily global.
    
    int main (int argc, char* argv[]) {

        // arguments control: count arguments number and echo them out to double check.
        cout << "argc = " << argc << endl;
        if (argc !=2) { cout << "Warning about arguments:" << endl; exit(1);}	// check argc and exit with return number 1.
        for (int i=0; i<argc; i++) 
            cout << "argv["<< i << "] = " << argv[i] << endl;	// argv[0] is the path and name of the program itself.
            cout << "argv["<< i << "] = " << atoi(argv[i]) << endl;	// atoi, atol atof convert an ASCII character arry to an int, long and double float.
	// atof accept 2.4e-3 and make it 0.024				// but any character array other than a number will be converted into 0.
        
        // trigger debug code when "--debug=on" is specified on the command line when calling the program.
        for (int i=0; i<argc; i++) if (string(argv[i]) == "--debug=on") debug=true;
            // now use the debug flag in the body in two ways:
            1. if (debug) { cout << "Debugger is now On!" << endl; /*debugging code follows*/ }
               else { cout << "Debugger is now Off!" << endl;}
            2. // this is even better since it is interactively with the user.
               cout << "Turn debugger [on/off/quit]: "; string reply; cin >> reply;
               if (reply == "on")   debug = true;
               if (reply == "off")  debug =false;
	       if (reply == "quit") break;
        cout << "Hello, World! I  am"
                    << 8 << "Today!" << endl;
    } ///:~							// Ending comment
    


    // compile: (followed by testing directly)
    john@desktop:~/Dropbox/CPP/test$ g++ Hello.cpp -o good.x; ./good.x;


//**************************************************************************
//		Objects: structure & class
//**************************************************************************    

    // ***** typedef, alias names *****
    typedef unsigned long ulong;	// unlike preprocessor substitution, types are checked in typedef
    
    typedef int* IntPtr; IntPrt x, y; 	// will make both x and y an integer pointer. (same as int *x, *y, but different effect from int* x, y).
    

    struct Structure1 {
      char c; int i; float f; double d; };	// define	
    struct Structure1 s1, s2;			// declaration/define variables in that kind; awkward, you can not use Sturcture1 directly as type,
						// instead you say struc Structure1

    typedef struct {char c; int i; float f; double d;} Structure2;	// define structure with typedef
    Structure2 s1, s2;				// use Structure2 directly like a type
    // if you need self-reference in the structure definition, give the name.
    typedef Structure2 {structure2* sr1, sr2; char c; int i; float f; double d;} Structure2;
	usage of structure components: s1.c, but if Structure2* s2 (pointer to a struct), then use s2->
    
    
// ***** structure / class in C++ *****
    1. NO typedef is needed since C++ compiler turns the name of the stucture into a new "type name" for the program, just as int, char, float are type names.
    2. the address of the stucture itself is automatically passed to all the inside functions that operate on this strucure. So the arguments are all about the job of the function.

    class Stash { // should best located in a header file.
	   private: 	// structure default public, while class default private
	   int size;  int quantity;  int next;  unsigned char* stoprage; // datas in the structure
	   
	   // functions: all included functions can see each other, and use(operate on) the data in the structure by their name.
	   public: 	// access specifiers
	   void  Stash (int size);	// initiator
	   void  Stash (int size, int initQuantity);	// initiator overloading
           void  ~Stash (); 	// destructor
           void  Stash (const Stach & h): size(h.size) { ++ objectCount;};	// copy constructor
		// remember: you need a copy-constructor only if you're going to pass an object of your class by value. If that
		// never happens, you don't need a copy constructor. (pass or return by value.)
		// If you don't want your class used in passing by value by users, creat a private empty copy constructor: X(const X&); // no definition. Preventing pass-by-value.

	   int	 add(const void* element);
	   void* fetch(int index)

           // friend can access private implementation
           friend void g(X*, int);	// a global friend, friend can simultaneously declare g and give g friend status.
	   friend void Y::f(X*);	// friend a func in another structure
	   friend struct Z;		// friend an Entire structure
          }

// ***** Constructor with initial arguments
    class G {public: G(int ii); };    y=3;  G g(y);
// ***** two ways to write constructor:
    Fred::Fred(int sz=8,int v=5) : size(sz), var(v)  {};  // constructor initializer list, wider usage since apply to const class members
    Fred::Fred(int sz=8, int v=5) {size=sz;var=v;} 

// Aggregate initialization
    struct X {int i; float f; char c;};
    X x2[3] = { {1,1.1,'a'}, {2,2.2,'b'} };	// the 3rd will be 0
    // but a well-designed class should be initialized by a constructor
    struct Y {float f; int i; Y(int a);};
    Y y1[] = { Y(1), Y(2), Y(3) };	// when you have a constructor.

// ***** Encapsulation and access control, taken together, invent an object.
    // it's key important to separate interface(declarations) from the implementation(the definition of the member functions).
    // Access control, or referred to as implementation hiding. The client programmers can't do anything but send messages to the public interface, and you
    // could change anything that is private.
 
    // give friendship to a nested structure
    struct Holder { private: int a[sz]; public: void func1(); 
	           struct pointer;	// declare the nested struc
		   friend pointer;
		   struct pointer{ define the nested struct here}	// functions in the nested structure can now use the private data in Holder.
                 }
    Holder::pointer hp1, hp2;	// Holder::pointer is now a type name.

// ***** further hiding of implementation: (use Handle classes to reduce the need to recompilation)
    // The project manager in your programming environment will cause a recompilation of a file if that file is touched or a header file it's dependent upon is touched. So, if you place struct defination in a header file, once you change the structure, every file involving that header file need to be recompiled. 
    //The solution if to place a handle class or "Cheshire cat". Hide everything about the defination in implementation file and just leave a pointer "smile" in the handle class in the header fine.
  
    //: C05:Handle.h
    // Handle classes in header file
    #ifndef HANDLE_H
    #define HANDLE_H
    class Handle { struct Cheshire;	// class declaration only.
	           Cheshire* smile;	// since Cheshire has not been defined, there is only enough infor to create a pointer to the struct.
	    public:
		   void initialize(); void cleanup(); int read(); void change(int);
    }
    #endif // HANDLE_H

    //: C05:Handle.cpp {O}
    // Handle implementation
    #include "Handle.h"
    struct Handle::Cheshire { int i; };	// define the structure actually being used; as for how to use, see thinking in C++ page 297.
    // changing the actual contents of Cheshire will not affect Handle.h, so only Handle.cpp need to be recompiled.

//**************************************************************************
//		input & output
//**************************************************************************
    // input & output
    int number;   cin >> number;   cout << "input= " << oct << number << endl;	// oct for octal number; hex for hexi...
    
    
    #include <cstdlib> 
    system("cd xxx; ls ; cat > xxx")
    
// ***** from / to files
    #include <fstream>
    ifstream in("input_file.txt"); ofstream out("output_file.txt"); string s; // open files
    while(getline(in,s)) out << s << "\n";	// getline discards newline char, so we add it back with <<"\n"
	// so simple to output to file; just << 
    
//**************************************************************************
//		Controlling execution
//**************************************************************************
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

    //ternary if operator
    a=--b? b : (b=-99)	// if --b gives non-zero, a is assigned to the value of b;  (Here, the value of an assignment statement is the value assigned, --b)
			// if --b gives zero, b is assigned to 99 and then a is assigned to b, also 99.
			// the value of an assignment expression is the value assigned.
    conditional ? statement : statement 	// just use the side effect, not the value of the expression.
    
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
    exit(int);	// stop the program
    
    // combine the usage of enumeration with case selection    // HOWEVER, this is problematic and should be replaced be better approach in C++, to be discovered.
    enum ShapeType { circle, square, rectangle};	// out of main function, just like a structure defination.
    int main() {
       ShapeType shape=circle;	// shape is a variable of the enumerated data type named ShapeType.
       switch(shape){
         case circle: statement; break;
         case square: statement; break;
         case rectangle: statement; break;
       }
     }///:~
    
    enum ShapeType { circle=10, square=20, rectangle=50};	// otherwise they will be 0, 1, 2
    enum snap {crackle=25, pop};	// pop will be 26


    cout << "Selecter a, b, c, or q to quit: "; char response; cin >> response; 	// response can be used as selector below
    switch (selector) {			// selector get to be an integer value
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
    
    // If it is just two levels, add a test in the first for conditional can spare that goto; but more levels of loops, goto is needed
    e.g. for (i=0; i<100 && val <=300; i++) {
    
    
        
//**************************************************************************
//		String manipulation
//**************************************************************************
    #include <string>			// thanks to operator overloading, it's really a convinience.
    string s1="Good morning!", s2=s1+" Bob.";	// initialing two strings on the same line, and annex on sth
    cout << s2 + "\n"

    string line;  new string(line); 	// clone a string
    
    
//**************************************************************************
//		Vector usage
//**************************************************************************

// Basics about array
    int a[5]={1,2,3,4,5};
    int b[6]={0};	// the compiler will use the first initializer for the first array element, and then use zero for the restl a succinct way to zeros;
    int c[]={1,2,3,4}	// a shorthand, automatic counting, compiler determine the size fo the array based on the number of initializers.
    for (int i=0; i < (sizeof c / sizeof *c); i++) {...};	// get the size of the automatically counted array.


// arrays, are zero indexing, a[0].
   int a[10]={0,1,2,3,4,5,6,7,8,9};  // a and &a[0] are the same thing. i.e. the starting address of the array.
   void func1(int a[],int size) {	are the same with 	func2(int * a, int size) {
     for (int i=0; i< size; i++)				  for (int i=0; i< size; i++)
       a[i] = i*i-i;		}				    a[i]=i*i+i;          }


// not knowing how many iterms in the array? use vector
    #include <vector> 
    
    vector<string> v;   string line;   ifstream in("input_file.txt");
    while(getline(in,line)) v.push_back(line);
    for(int i=0; i<v.size(); i++) cout << i << ": " << v[i] << endl;
    
    
    
//**************************************************************************
//		Pointers & reference
//**************************************************************************
    int* ipa, ipb, ipc;	// ipb and ipc will be integer instead of pointer in this case.
    int* ipa, * ipb, * ipc;  int a=3, b=4, c=5;  ipa=&a; ipb=&b;
            cout << "a= "<< a << " adress: " << (long)ipa<< endl;
            cout << "b= "<< *ipb << " adress: " << (long)ipb<< endl;	// *ipb is dereference.
    
    cout << "address of func(): " << (long)&func << endl; 
    cout << "address of i: " << (long)&i << endl;	// without (long) casting, address will be printed out in hexadecimal

    void* vp = &i;	// void pointer can point to address of any type
    *((int*)vp) = 3; 	// must cast back void* to int* before dereferencing.

    #define P(EX) cout << #EX << ": " << EX << endl;	// # stringizing takes any expression and turn it into a character array.
    use: main(){int a[10]={0,1,2,3,4,5,6,7,8,9}; int*ip=a; P(*(ip+5)); P(ip[2]);} // pointer ip can be dereferenced like the name of an array, ip[2] = *(ip+2)

// ***** pointer to class, and pointer to class member *****
    struct Simple { int a;}; 
    Simple so, *sp = &so;	// define.
    sp->a; so.a;		// usage

// ***** pointer to member *****
class Data {public: int a,b,c;  
        void print () const {cout << "a= " << a << ", b= " << b <<", c= " << c << endl;} };

int main (int argc, char* argv[]) {
        Data d, *dp= &d;   dp-> print(); //a= 0, b= 0, c= 4196128; zero initiation is not guaranteed.
        int Data::*pmInt = &Data::a;  // initiate a member pointer, pmInt only be bound to an object.  
        dp->*pmInt = 47;        
        pmInt = &Data::b;       // reassign a pointer to member
        d.*pmInt = 48;          
        dp-> print();
    
    // pointer to member function
    void (widget::*fptr[cnt])(int) const;	// declare; usage to see example on page 503 in book thinking in C++.


// ***** usage: modify outside object with pointer *****
    int* func_pt(int* p) {
       *p=5;
      (*p)++; 
      return p; 
    }

// ***** usage: modify outside object with reference *****
    int& func_rf(int & r) {
      r=5;
      r++;
      return r;
    } 
    
    void func_const_rf (const int&) {} // passing by value requires a constructor and destructor call, but passing by constant reference only needs an address pushed on the stack.
    // good code maintenance: pass pointer of arguments to be modified; pass cosnt reference otherwise.

    int main(){
      int x=47; 
      func_pt(&x);	// Ugly, but explicit.
      func_re(x);	// Clean, but hidden.
      func_const_rf(12)	// good, but func_re(12) will be wrong.
    }  


// ***** function pointer ***** C has never been a language to bar entry where others fear to tread.
    void (* funcPtr) ()
    float (* funcPtr) (int, int)	// read, funcPtr is a pointer to a function which takes (int, int) as argu and returns a float.
    //usage:
    void func() {cout << "func() called..." << endl; }
    funcPtr = func;  or void (*fp2)() = func; // (define and initiate)
    (*fp)();	// dereferencing calls the function.
    // arrays of pointers to functions
    void (*func_table[]) () = {func1, func2, func3, func4, func5};  (*func_table[3])(); 	// define, initialize and derefer a arrays of points to functions


// ***** Reference *****
    References are like constant pointers that are automatically dereferenced by the compiler. (like double naming or alias)
    
    const int & q= 12;	 		// q point to the storage of 12. Address of 12. And 12 is a constant.
          int & q2= 13;			// error, q2 has to be a constant reference
    cout << "q = " << q <<  endl;	

    int x=0; int & a=x;			// must be initialized at creation, has to be connected to a legitimate piece of storage; a ties to x's storage. Cannot be changed to refer to another thing. 
    cout << "x = " << x << ", a= " << a<< endl;
    a++; x++; a=10; x=5; 		//change both x and a
    cout << "x = " << x << ", a= " << a<< endl;

    // pointer reference
    void increment(int*& i) {i++;}  // i is a int*; the pointer will be increased, not what it points to.





//**************************************************************************
//		Constants
//**************************************************************************
    #define BUFSIZE 100		// shall be replaced by constant
    const int bufsize = 100	// const defaults to internal linkage, visible only within the translation unit, and must be initiated at definition except
    extern const int bufsize	// when you make an explicit declaration using extern, (external linkage).
    // without extern, or taking address actions, compiler hold it in its symbol table and perform constant folding, no storage allocated.

    // internal linkage for const global variable onle, if not const, default to external linkage.

    // to clarify extern with const
    const int bufsize_2
    extern const int bufsize=100	// define with initiation, make bufsize external linkage, visible to other translation unit.
    extern const int bufsize		// declare in another file before use it. not work for bufsize_2

    // it's good habit to make every variable who will not change in its lifetime a constant, also eliminate storage and merory reads. (more efficient code)
    const int i=100; 				// both i and j are compile-time constants, i have no storage, instead in symbol table
    const int j=i+10; long add=(long)&j;	// j is forced to have storage
    const char c = cin.get();			// run-time constant, maybe.
    
    const int * u; int const * v;	// same, pointer to a constant integer.
    int d=1;       int * const w = &d;	// a constant pointer to an integer.
    int d=1;       int const * const x=&d; const int * const x=&d;	// constant pointer to a constant integer.
    			// you can assign non-const object to a const pointer, like above. But not vise versa. 

    // character array literals
    char *cp = "howdy";		// allowed to backward support for C, but change *(cp+1) doesn't make sence, use the following instead:
    char cp[] = "howdy";


// ***** Constants in Classes. *****
    // For non-static const insede a class, initialization must occur in a special place of the constructor, the constructor initializer list. e.g.
    // Test file test_const_in_class.cpp
    class Fred { const int size; public: Fred(int sz); void print(); };
    Fred::Fred(int sz) : size(sz) {}
    void Fred::print() {cout<<size<<endl}
    int main() { Fred a(1), b(2); a.print(), b.print();}///:~

    // For static const, initiate at the point of definition, not in the constructor; 
    //"there is only one instance, one value, for this static constant, in every object of this class"
    class Fred { static const int size = 100; public: Fred(int sz); void print(); };

    // constant objects & constant member function in a class.
    // Any function that doesn't modify member data should be declared as const, so it can be uesed with const objects.
    class Fred { int size; mutable int var; public: Fred(int sz); void print() const; };	// const in declaration of print()
    Fred::Fred(int sz) : size(sz) {}
    void Fred::print() const {cout<<size<<endl}					// const in difinition of print()
    int main() { Fred a(1), b(2); a.print(), b.print();}///:~
    const Fred d(2); d(2).print();	// const object
    
// volatile: syntax is identical to const. Data may change outside the knowledge of the compiler: multitasking, multithreading or interruptes.


//**************************************************************************
//		Name control
//**************************************************************************   
// ***** C and c++ allow you to create a static object inside a function; the storage will be in the program's static data area, instead of stack.
// this object is initialized only once (no matter it is a variable or class (constructor called only the first time control passes throught the definition)), the first time the functions is called, and them retains its value between function invocations.
destructors for statics objects (actually, all objects with statics storage) are called when main() exits or wen exit() is explicitly called. 
    // but do keep multiple threading issues in mind. not yet know.
    // example (static object in a function): 
    char oneChar (const char* charArray=0 /*default to 0, which is null for pointers*/) {
        static const char* s;			// the char array s points to is const
        
        if(charArray) { s=charArray; return *s;}	// initialize s and return first char in array.
        else require(s,"un-initialized s");

        if (*s == '\0') return 0;	// if at the end of the initiation array, return 0
        return *s++;			// otherwise, return a character and point to the next.
	}
    usage: oneChar("abcdefghijklimopqrstuvwxyz"); while ((c= oneChar())!=0) ...

// ***** static member of a class reside in a single piece of storage and shared by all objects of that class; a way to communicate within objects of that class; a static member function works for the class as a whole, rather thant for a particular object of a class *****
    class A { static int i; 			// must initiate outside/ externaly, as below.
              static const int size = 100;	// static const has to be initialized in-place. (the only one possible)
              static const int scInts[];	
              static X x2;			// statics X x2(100) won't work, use X A::x2(100) externally outside the class def;
              static void f() {i=3;};   	// statics member function, can only use static members. Common usage: A::f();
              public: /*...*/}; 
    int A::i=1;		// class creator has to define storage for that static data member.
    const int A::scInt[] = { 1, 2, 3, 4, 5}; 	// automatic counting works with static arrays.
    X A::x2(100);
    // you cannot have static member inside a local class, which is defined inside a function.

    // Ordinarily, any name at file scope have external linkage; static makes it internal. 

    static int global_var/function_name	// make visibility from external to internal. both on static storage area.
    static int local_var		// change storage to static area, no effect on visibility.

// ***** Static initialization dependency ***** 
    No way to assign the order of initializaiton of global variables which reside in static storage across different translation units.
    file one: extern int y; int x=y+1; file tow: extern int x; int y= x+1; // results depend one the order. bad.
    Solution: wrap dependency in functions. See page 463 of thinking in C++.



// ***** to separate/subdivide global functions, global variable and classes names (global namespace) into more manageable pieces, using  namespace. (in/as a header file.)
    namespace MyLib { extern int x; void f(); /*Declarations*/ }	// no ; ending.
    namespace MyLib { extern int y; void g();}			// namespace def can be "continued" over multiple header files.
    namespace ML = MyLib;				// aliase
    namespace { class Arm {/*....*/}; class Robot { Arm arm[4]}; }	// unnamed namespace, deprecates file static, every name in it get internal likage (file static).
    namespace Me { class Us {friend void you()};}	// friend only in this namespace.

    // using a namespace, can be used in main() or function(), overrider the outer using  directive. 
    using namespace U;	// using directive
    using V::f;		// using declaration, override f() in U namespace
    f();		// calls V::f();
    U::f();		// must fully specified.


   
//**************************************************************************
//		Garage for mis. gears
//**************************************************************************
    char c='a'; sizeof(c); 
    int x; int i= sizeof x; 	// not need to add parentheses if its argument is a variable
               i= sizeof(int)
    
    // the comma operator
    a= (b++, c++, d++, e++);	// comma separate expressions, and produce the value of the last expression. e++ here.
				// avoid using comma as anything (statement) other than a separator.    

    // cast operators
    a=float(200); b=(float)200; or 200f; are equivalent actually.
 
// allocate and free dyunamic memory allocation with new and delete
    unsigned char* b= new unsigned char[100]	// new returns the pointer to the biginning of the allocated space.
    delete []b		// [] is used to remind the compiler that this pointer is poiting to an array of objects


    '\0' is the null terminator of an array.


// ***** using a C library in C++, C++ compiler function name decoration may cause problem, f(int) -> _f_int
    solution: extern "C" { float f(int a, char b); double d(inta, char b);}
              extern "C" (#include "Myheader_C_lib.h" }


// ***** Operator Overloading *****
    "syntactic sugar"
    1. only an expression containing a user-defined type can have an overloaded operator.
    2. can not overload operators that currently have no meaning.
    3. can not change number of argu
    4. can not change the precedence.

    // examples:
    Unary operators
    class Integer { long i; 	// data
                    Integer* This() {return this;} 
		    public: 
                    Integer(long ll=0) :i(ll) {}
		    // overloadings: 	
                    friend const Integer& operator+ (const Integer& a);	// declaration:  No side effects, takes const& argument
									//  +Integer, Unary on right.
                    friend const Integer& operator++ (Integer& a);	// Prefix  ++Integer, Unary on right.
                    friend const Integer& operator++ (Integer& a, int);	// Postfix: Integer++, Unary on left. 
		    // friend is needed for non member func 		// second argument is just a placeholder. 
      


    const Integer& operator+(const Integer& a) {cout << "+Integer\n"; return a;}	// unary + has no effect. 
    const Integer& operator++ (Integer& a) {cout << "++Integer\n"; a.i++; return a;}
    const Integer& operator++ (Integer& a, int) {cout << "Integer++\n"; Integer before(a.i); a.i++; return before;}
    // cant be modified as an lvalue	// there is side effect using ++, so non-const. int here is dummy.

// ***** overloading of [] << >> are very useful, see example: *****
    // abc@abc-Notebook:~/Dropbox/CPP/test$ g++ -o good.x test_Iostream_operator_ol.cpp ../require.h

// ***** #include <sstream> *****
    stringstream input("11 22 33 44 55 66 77 88"); input >> I;
    // turn a string into iostream. test an input without typing data or reading a file/ see exaple at test_Iostream_operator_ol.cpp


// ***** return optimization, retruning a temporary *****
    return Integer(left.i + right.i);	// temporary object syntax, make a temporary Integer object and return it.
                                     	// build the object directly onto the location of the outside return value.
    Integer tmp(left.i + right.i); return tmp;	// bad.


//**************************************************************************
//		basic computer knowledage & terminology
//************************************************************************** 
    heap is a big block of memory used for allocating maller pieces at runtime, where new works.
    momery leak happens when you forget to delete thestoraged allocated with new. (fragmented leap, need leap compaction)

"translation unit/ compilation unit" : the ultimate input to a C compiler from which an object file is generated.
Ordinarilly, any name at file scope that is, not nested inside a class or function) is visible throughtout all translation units in a program. This is often called external linkage because at link time the name is visible to the linker everywhere external to that translation unit. Global variables and ordinary functions have external linkage.

static can make a function or an object local to its translation unit. The same name in other translation units won't clash any more.

Names that are commonly placed in header files, such as const definitions and inline functions, default to internal linkage. (however, const defaults in external in C). Note that linkage refers only to elements that have addresses at link/load time; thus, class declarations and local variables have no linkage.

Re-entrancy: at any point in the execution of a program an interrupt can occur without breaking the program. (ISR) interrupt service routine. Re-entrancy means that any function can be an interrupt routine for any other function, including the same function you're currently inside. Thus return value can not be placed in a global area. The same logic applies to recursion.


//**************************************************************************
//              Dynamic object creation
//**************************************************************************
    Sometimes you know the exact quantity, type, and lifetime of the objects in your program, but not always.
    C++ bring the dynamic object creation into the core of the language. While mallow() and free() are just library functions in C,
    and thus outside the control of the compiler.

	    storage types: stack-allocation, for static objects. Scope. lifetime.
	                   heap (free store) for dynamic memory allocation. lifetime is upto you.

    // C approach to the heap 
    Obj* obj_pt = (Obj*) malloc (sizeof(Obj)); 	// malloc return void pointer, which has to be cast into something in C++.
    						// if malloc fails, it return 0, you must check if successful
    Obj->initialize();	// easy to forget.
    free(obj_op);

    // C++ approach  
    MyType *fp = new MyType(1,2);	// constructor for MyType is called using argu (1,2). malloc is called underground.
    delete fp; fp=0; 			// set fp=0 to prevent mistakenly delete fp twice, since nothing happens when you delete a zero fp.



//**************************************************************************
//		Tips, Bugs and Pitfalls
//**************************************************************************   
    
1.  comparison of a floating-point number with values of zero is strict; 
    float f=1e-10; f==0 gives false
    
    
2.  while(a=b)	vs	while(a==b)	// the result of a=b is the value of b.
   


//**************************************************************************
//                      Make and Makefile
//**************************************************************************  
    make is available from operation system. Make utility manages all the 
    individual files in a project by following the instructions in a text file
    called makefile (corrent directory).
    // tested but not work at all! save for later learning.


// ***** Something about file management *****
1. header file only include declarations, not definations of function. Use another file to give the defination of the functions, even functions in an object/structure. (by using scope resolution operator :: i.e. structure::function). And do remember to include that header even in the defination file.
    But structure declaration is kind of its defination, which got to be in header file. But C++ does not allow redeclaration of structure. So, you need to include the following flag in your header file:
    #ifndef SIMPLE_H	// if not def.    simple.h is the name of the example header file, here is a case of good nameing habit.
    #define SIMPLE_H
        // the structure / class declarations go here...
    #endif // SIMPLE_H

    note: outer_stuct::inner_struc::funct(int i, float j) {
	    ::funct(); ::a++; a--; }		// here using operator :: with nothing in front of it gives the global name.


2. don't put a using directive in header file. like using namespace std; 

    
//**************************************************************************
//			Debugging Skills
//**************************************************************************   
1. Preprocessor debugging flags
    #define DEBUG	// probably in a header file
    //...
    #ifdef DEBUG	// check to see if flag is defined
    /* debugging code here */
    #endif // DEBUG
    // mostly you can #define and #undef flags from compiler conmmand line in compiling.

2. Runtime debugging flags	// since large programs are tedious to recopile just to insert debugging code. So, this may be a better way.
    // hase been integrated into the Header & Start up section above
    

3. Use assert(expression)	// if the expression gives false, program will abort. Not that useful. Maybe useful in step by step debugging. let's see.
    #include<cassert>
    after you are done with debugging, just place the line "#define NDEBUG" before "#include<cassert>" to turn off assert.
    
    
    
    

    
//**************************************************************************
//			Encouragement
//**************************************************************************    
   C has never been a language to bar entry where others fear to tread. 
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

