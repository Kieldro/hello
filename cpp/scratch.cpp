/*
g++ scratch.cpp;if [ $? -eq 0 ];then ./a.out;fi
*/

#include <iostream>
#include <cstdio>

//using namespace std;
using std::equal;
using std::cout;
using std::endl;

int main (){
	int x = 2147483647;		// x^31-1
	 
	cout << "x: " << sizeof(x) << endl;
	
	cout << "x: " << x << endl;
	//std::printf("literal %s\n", s.c_str() );
	
	return 0;
}