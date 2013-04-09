/*
g++ scratch.cpp;if [ $? -eq 0 ];then ./a.out;fi
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <deque>
using namespace std;
int main (){
	std::cout << "int(): " << int() << std::endl;

/*
	string s = "oioijoij";
	vector<int> v;		// c++11
//	int w [5] = {1, 4, 6, 5};
	
	deque<int> d(2);
//	v.resize(200);
	v.push_back(2);
	v.push_back(2);
	cout << v.capacity() << endl;
	
	~int();
	/*
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
