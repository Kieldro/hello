/*
g++ scratch.cpp;if [ $? -eq 0 ];then ./a.out;fi
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>	// pair
#include <deque>
#include <cassert>
#include <algorithm>

using namespace std;
int main (){
	cout << "int(): " << int() << endl;
	vector<int>();
	vector< std::pair<int, int> > v;
	
	cout << "v.size(): " << v.size() << endl;
	
	std::pair<int, int> p = {1, 2};
	std::pair<int, int> q = {1, 2};
	v.push_back(p);
	
	assert(p == p);
	assert(p == q);
	
	cout << "p.first = 3: " << (p.first = 3) << endl;
	cout << "p: " << p.first << " " << p.second << endl;
	assert(p != q);
	
	v.push_back(p);
	cout << "v0: " << v[0].first << endl;
	cout << "v1: " << v[1].first << endl;
	v[1].first = 5;
	v[0].first = 3;
	assert(p != v[1]);
	
	assert(std::find(v.begin(), v.end(), p) != v.end());
	
	
	

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
