#include <iostream>
#include <string>

// init- create empty 3x3 matrix
std::string * CreateBoard(){
	// we will use an array of strings to represent the moves a player has made, empty string will be a space where no player has placed an x or o yet
	std::string * boardArr = new std::string[9];
    boardArr[0],
    boardArr[1],
    boardArr[2],
    boardArr[3],
    boardArr[4],
    boardArr[5],
    boardArr[6],
    boardArr[7],
    boardArr[8] = " ";
    return boardArr;
}

void DisplayBoard(std::string * arr){
    std::cout << "Tic-Tac-Toe" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << arr[0]<<"     | " << arr[1] << "    |  " << arr[2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << arr[3] << "     | " << arr[4] << "    |  " << arr[5] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << arr[6] << "     | " << arr[7] << "    |  " << arr[8] << std::endl;
    std::cout << "     |     |     " << std::endl;
}


std::string GetPlayerChoice(){
    std::cout << "enter choice x or o" << std::endl;
    bool isXO = false;
    std::string input;
    while (!isXO){
        std::cin >> input;
        if (input == "x" or input == "o"){
            isXO = true;
            return input;
        }
    }
}

std::string GetPlayerPos(){
    std::cout << "enter a position for the move, 1-9" << std::endl;
    bool isPos = false;
    std::string input;
    while (!isPos){
        std::cin >> input;
        if (input == "1" or input == "2" or input == "3" or input == "4" or input == "5" or input == "6" or input == "7" or input == "8" or input == "9"){
            isPos = true;
            return input;
        }
    }
}

std::string * PlaceMarker(std::string * arr, std::string move, int pos){
    arr[pos] = move;
    return arr;
}

int main(){
    std::string * board = CreateBoard();
    DisplayBoard(board);
    std::string move;
    int pos;
    for (int i = 0; i < 9; i++){
        move = GetPlayerChoice();
        pos = std::stoi(GetPlayerPos()) - 1;
        board = PlaceMarker(board, move, pos);
        DisplayBoard(board);
    }
}