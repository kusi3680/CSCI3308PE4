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
	void PlaceMarker(int position, string mark) {
		switch (position) {
			case 1:
		 		board_[0][0] = mark; 
		 		break; 
		

			case 2:
				board_[0][1] = mark; 
				break; 
		
			case 3:
				board_[0][2] = mark; 
				break; 
		

			case 4:
				board_[1][0] = mark;
				break; 
		

			case 5:
				board_[1][1] = mark;
				return; 
		

			case 6:
				board_[1][2] = mark;
				return; 
		

			case 7:
				board_[2][0] = mark;
				return; 
		

			case 8:
				board_[2][1] = mark;
				return; 
		

			case 9:
				board_[2][2] = mark;
				return; 
				}		

	}

    private: 
	string board_[3][3];
};


int main() {

	TicTacToe game; 
	game.DisplayBoard();
	int p = 0;  
	 
	for (int i=0;i<9;i++){
		cout << "Player 1:" << endl;
		p = game.GetPlayerChoice();
		game.PlaceMarker(p, "X"); 
		game.DisplayBoard(); 
		i++;
		if(i==9) break;
		cout << "Player 2:" << endl;
		p = game.GetPlayerChoice();
		game.PlaceMarker(p, "O");
		game.DisplayBoard();  
	}

	return 0; 
}	
