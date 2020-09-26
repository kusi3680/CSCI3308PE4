#include <iostream>
using namespace std; 

class TicTacToe {
public:
	TicTacToe() { CreateBoard(); }
	void CreateBoard() {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				board_[i][j] = '_'; 
			}
		}
	}
	void DisplayBoard() {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				cout << board_[i][j]; 
			}
			cout << endl; 
		}
		cout << endl; 
	}
	int GetPlayerChoice() {
		cout << "Enter a position: "; 
		int position; 
		cin >> position; 
		return position; 
	}
    private: 
	string board_[3][3];
};


int main() {

	TicTacToe game; 
	game.DisplayBoard();
	 
	for (int i=0;i<9;i=i+2){
		int pos = 0;  
		cout << "Player 1:" << endl; 
		game.DisplayBoard(); 
		pos = 0; 
		cout << "Player 2:" << endl; 
		game.DisplayBoard();  
	}

	return 0; 
}	
