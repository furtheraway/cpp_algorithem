# A comment, this is a text makefile file.
compiler = g++
.SUFFIXES: .x .cpp
.cpp.x:
	$(compiler) $< # whatever prerequisite triggered the rule
Hello.x: Hello.cpp
	$(compiler) Hello.cpp -o Hello.x

#all: Hello.x hello2.x
