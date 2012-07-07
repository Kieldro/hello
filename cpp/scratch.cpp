/*
g++ scratch.cpp;if [ $? -eq 0 ];then ./a.out;fi
*/

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main (){
	std::cout << "int(): " << int() << std::endl;

/*
	string s = "oioijoij";
	vector<int> v = {1, 4, 6, 5};		// c++11
	int w [5];
	w = {};
	
	for (int x : v)
		cout << x << endl;
	
	
	int y[] = {7, 8, 8};
	for(auto x: y)
		cout << x << endl;
	*/
	//std::cout << "c: " <<unsigned(0) << std::endl;
	//std::printf("literal %s\n", s.c_str() );
	
	return 0;
}
