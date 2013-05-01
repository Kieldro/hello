#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <regex>
// #include <boost/regex.hpp>

using namespace std;

// ------
// macros
#define DEBUG true
#define CERR(s) if(DEBUG) cerr << s << endl;else;
#define BOOYAKASHA	if(DEBUG) cerr << "BOOYAKASHA!" <<  endl; else;

// prototypes

class Board{
	private:
		string _b [8][8];
		void inline printFile(){
			cout << "   ";
			for(char l = 'a'; l <= 'h'; ++l)
				cout << l << ' ';
			cout << endl;
		}
	
	public:
		// constructor
		Board(){
			for(int i = 7; i >= 0; --i){
				if(i == 0){		// white
					_b[i][0]  = "♖";
					_b[i][1]  = "♘";
					_b[i][2]  = "♗";
					_b[i][3]  = "♕";
					_b[i][4]  = "♔";
					_b[i][5]  = "♗";
					_b[i][6]  = "♘";
					_b[i][7]  = "♖";
				}else if(i == 7){		// black
					_b[i][0]  = "♜";
					_b[i][1]  = "♞";
					_b[i][2]  = "♝";
					_b[i][3]  = "♛";
					_b[i][4]  = "♚";
					_b[i][5]  = "♝"
	;				_b[i][6]  = "♞";
					_b[i][7]  = "♜";
				}else
					for(int j = 0; j < 8; ++j)
						if(i == 1)
							_b[i][j] = "♙";
						else if (i == 6)
							_b[i][j] = "♟";		// black
						else
							_b[i][j] = "-";		// empty space
			}
		}
		
		void printBoard(){
			cout << "Printing board:" << endl;
			// setlocale(LC_ALL, "en_US.UTF-8");
			printFile();
			for(int i = 7; i >= 0; --i){
				cout << i+1 << "| ";		// rank number
				for(int j = 0; j < 8; ++j)
					cout << _b[i][j] << ' ';
				cout << '|' << i+1;
				cout << endl;
			}
			printFile();
		}
		
		void move(){
			string move;
			cout << "Enter move: ";
			cin >> move;
			CERR("move: " + move);
			regex rx0("[as]");
			// CERR(regex_match(move, rx0))
			// regex rx1 ("a3");
			
			// CERR("flags: " << regexObj.flags());
			//");
			// /[RNBQK]?([a-h]?[x:])?[a-h][1-8]/
			// TODO: en passant
			
		}
};

int main(){
	Board b;
	
	b.printBoard();
	b.move();
	
	return 0;
}