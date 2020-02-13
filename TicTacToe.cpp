#include <iostream>


// init- create empty 3x3 matrix
std::string * CreateBoard(){
	// we will use an array of strings to represent the moves a player has made, empty string will be a space where no player has placed an x or o yet
	std::string * boardArr = new std::string[9];
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0],
    boardArr[0] = " ";
    return boardArr;
}

void DisplayBoard(std::string * arr){ // Tanner
    std::cout << "Tic-Tac-Toe" << std::endl;
    std::cout << "     |     |   " << std::endl;
    std::cout << arr[0] << "    |" << arr[1] << "     |" << arr[2] << std::endl;
    std::cout << "-----|-----|-----" << std::endl;
    std::cout << arr[3] << "     |" << arr[4] << "     |" << arr[5] << std::endl;
    std::cout << "-----|-----|-----" << std::endl;
    std::cout << arr[6] << "     |" << arr[7] << "     |" << arr[8] << std::endl;
    std::cout << "     |     |   " << std::endl;
}


// void DisplayBoard(std::string * arr){ // Spencer
//     std::cout << "Tic-Tac-Toe" << std::endl;
//     std::cout << "     |     |     " << std::endl;
//     std::cout << arr[0]<<"    | " << arr[1] << "    |  " << arr[2] << std::endl;
//     std::cout << "_____|_____|_____" << std::endl;
//     std::cout << "     |     |     " << std::endl;
//     std::cout << arr[3] << "     | " << arr[4] << "    |  " << arr[5] << std::endl;
//     std::cout << "_____|_____|_____" << std::endl;
//     std::cout << "     |     |     " << std::endl;
//     std::cout << arr[6] << "     | " << arr[7] << "    |  " << arr[8] << std::endl;
//     std::cout << "     |     |     " << std::endl;
// }

int main(){
    std::string * board = CreateBoard();
    DisplayBoard(board);
}