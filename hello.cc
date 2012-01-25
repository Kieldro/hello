/*
Ian Buitrago
C++
11-18-2011
*/

// preprocessor directive
#include <iostream>		// for cout/cin
#include <assert.h>		// for assert fuction
#include <string>

//macros
#define PI 3.14159	// consumes less memory
const int C = 2;	// typed constant


using namespace std;

// prototypes
char bar(void);		// no params
void bar(char = 71);	//overloaded function
void foo(unsigned, short b = 4); 	// default values
int subtraction (int a, int b);

// data structures
struct product {		// equivalent to class except members are public by default
  int weight;
  float price;
  
  product(short){weight = x;};
  product(){;};		// now has to be specified
  void w(){++weight;}
  
  private:
	short x;
  
} apple, banana, melon;

class ClassType{	// by default members are private
		int i;
		
		public:
			ClassType(short x){i = x;};			// constructor
			ClassType();
			//~ClassType(){cout << "ClassType object destructed." << endl;};		// destructor
			int a;
			void A (short){
				int i = 2;
				cout << "this->i: " << this->i << endl;};
			int B(short x){return b;};
		
		private:
			int b;
		
} ObjId(2), Obj2;

ClassType::ClassType(){i = 0;}

int main (){
	cout << "Hello World!" << endl;		// endl flushes the buffer
	
	//assert only fails at 0
	assert (!(true and false)); // 'and' is a key word for &&
	assert (2);		// assert fails only if 0
	assert (!0);
	assert ("This string != 0 and thus passes" or 0);
	
		{	// variables declared inside expire after scope
			short a = 0;
			short int b = 0;	// same type as short
			
			long c = 0;
			long int d = 0;	// same type as long
			
				{
					short a = 2;
					assert(a == 2);		// inner scope takes precedence
				}
			
			assert (sizeof(char) == 1); // bytes
			sizeof 1;	// no paren needed
			
			assert (sizeof(int) == sizeof(long));	// in most systems
		}
	
	
	bool b (4);	// constructor initialization
	assert (b != 4);
	
	assert(15         // decimal
		== 017       // octal
		&& 15 == 0xF);       // hexadecimal 
	
	assert(5e-2 == .05);
	
	assert ('\71' != char(71) );	// escaping ascii codes are only in octa or hex
	assert ("a" "b""c" == "abc");	// concantenate strings
	"Backslash necessary\
	 to span 2 lines";
	
	assert(PI == 3.14159);
	
	short c;
	short a = 2 + (c = 3 + 3) + 5;		// = returns rvalue
	
	assert( !(1 ^ 1 || 0 ^ 0) );		// xor operator
	assert(!-4 == 0 && ~-4 == 3);		// bit wise not
	
	float f = PI;
	a = (int) f;		// C style type casting, value truncated
	a = int (f);		// C++ functional notation also valid
	
	apple.price = PI;
	
	// Classes
	ClassType Ob(-2);
	ClassType Ob2;		//no parenthesis for default constructor
	ClassType Ob3 (Ob);		// copy constructor provided by compiler
	
	// Pointers
	short *d = &a, *e;		// now share same address
	(d == e || d != e);
	assert (*d == a);
	++a;
	assert (*d == a);
	
	int numbers[5];
	int * p;
	p = numbers;  *p = 10;
	p++;  *p = 20;
	p = &numbers[2];  *p = 30;	// offset operator
	p = numbers + 3;  *p = 40;
	p = numbers;  *(p+4) = 50;
	
	int (*minus)(int,int) = subtraction;		// pointer to function
	a = (*minus)(2, -3);
	
	foo(5, a);
	Obj2.A(1);
	
	return 0;
}

int subtraction (int a, int b)
{ return (a-b); }

void foo(unsigned int x = 2, short a){// default value cannot be specified in both prototype and definition
	cout << "foo: " << (1+0 == 1 ? 2 : 5+1) << endl;
	
	return;
}

char bar(void){

	return 0;
}

void bar(char c){
	;
}