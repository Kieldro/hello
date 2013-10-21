#include <stdio.h>
#include "assert.h"		// d quotes or angles

// globals

int foo(x){			// void return type optional in C
	extern int bar;		// explicitly specifies intention to use global variable
	// extern can be used to indicate file has or will be defined in another file
	printf("hello: %d\n", bar);
	return 1;		// optional for void functions
}
int bar = 3;

void p();
void p(x, y, z)
int x, y;		// original pre ANSI C syntax of declaring parameters, still valid
float z;
{
	printf("hex = %7x\n", 0xFFF);
	printf("oct = %7o\n", 017);
	assert(027 == 2*8 + 7*1);		// runtime check
	printf("char = %7c\n", (char)34);
	printf("%% = %%\n");
	// return 0;
}

void size(){
	printf("char = %lu Bytes\n", sizeof(char));		// long unsigned int type
	printf("short = %lu Bytes\n", sizeof(short));
	printf("int = %lu Bytes\n", sizeof(int));
	printf("long = %lu Bytes\n", sizeof(long));
	printf("float = %lu Bytes\n", sizeof(float));
	printf("doule = %lu Bytes\n", sizeof(double));
	printf("long double = %lu Bytes\n", sizeof(long double));
}

int main(){	
	foo();
	size();
	// p();
	
	return 0;
}

 	