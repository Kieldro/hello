/*
Ian Buitrago
8-1-2012
codeeval challenge: odd numbers
*/

#include<vector>

void main (char* argv){
	ifstream file;
	file.open(argv[1])
	
	while (!file.eof()){
		getline(file, lineBuffer);
		if (lineBuffer.length() == 0)
			continue; //ignore all empty lines
		else 
		{
			;//do something here
		}
	}
}