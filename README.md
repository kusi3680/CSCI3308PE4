# CSCI3308PE4
PE 4 Github Repository

Name: Kunal Sinha

Person 1:kusi3680

Person 2:kunalsinha2299

The code uses a class to start the game. 
Start the game using by going on the terminal with the file and running:

g++ -g -Wall TicTacToe.cpp -o executable 

./executable

The class has one private variable:
- board_: 3x3 array to serve as the matrix ground for the game

The class has five public functions:
- Constructor: calls CreateBoard
- CreateBoard: fills board_ with '_'
- DisplayBoard: displays the current statr of board array as a 3x3 Matrix
- GetPlayerChoice: Prompts player for input and return typed in value
- PlaceMarker: Uses switch statements to convert position given to the symbol used by current player

The main function starts the game by initializing, displays the empty board then starts a for loop where i serves as the turns used within the loop player one and pler two do their turns sequencially. once 9 turns are reached, the game ends.
