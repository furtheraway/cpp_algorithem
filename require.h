//: :require.h
// Test for error conditions in programs
// Local "using namespace std" for old compilers
#ifndef REQUIRE_H
#define REQUIRE_H
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>

// print msg into stderr if requirement not met.
inline void require(bool requirement, const std::string& msg ="Requirement failed") {
    using namespace std;		// local declaration , wihtout opening up the namespace std for 
    					// anyone who includes this header file.
    if (!requirement) { fputs(msg.c_str(), stderr); fputs("\n", stderr); exit(1); }	
    }

// print error into stderr if i/o file can not opened.
inline void assure (std::ifstream& in, const std::string& filename = "") {
    using namespace std;
    if (!in) { fprintf( stderr, "Could not open file %s\n", filename.c_str()); exit(1);
    }
}

inline void assure (std::ofstream& out, const std::string& filename = "") {
    using namespace std;
    if (!out) { fprintf( stderr, "Could not open file %s\n", filename.c_str()); exit(1);
    }
}
#endif
