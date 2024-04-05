#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};
char player = 'X';

void drawBoard() {
   cout << "*******************************   Tic Tac Toe  ******************************" << endl;
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         cout << board[i][j] << " ";
      }
      cout << endl;
   }
}

void takeTurn() {
   int choice;
   cout << "Player " << player << ", enter a number: ";
   cin >> choice;

   int row = (choice - 1) / 3;
   int col = (choice - 1) % 3;

   if (choice > 9 || choice < 1 || board[row][col] == 'X' || board[row][col] == 'O') {
      cout << "Invalid move, try again." << endl;
      takeTurn();
   } else {
      board[row][col] = player;
   }
}

void switchPlayer() {
   if (player == 'X') {
      player = 'O';
   } else {
      player = 'X';
   }
}

bool checkWin() {
   // Check rows for a win
   for (int i = 0; i < 3; i++) {
      if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
         return true;
      }
   }

   // Check columns for a win
   for (int i = 0; i < 3; i++) {
      if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
         return true;
      }
   }
   

   // Check diagonals for a win
   if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
      return true;
   }

   if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
      return true;
   }

   return false;
}

bool checkTie() {
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         if (board[i][j] != 'X' && board[i][j] != 'O') {
            return false;
         }
      }
   }

   return true;
}

int main() {
   drawBoard();

   while (true) {
      takeTurn();
      drawBoard();

      if (checkWin()) {
         cout << "Player " << player << " wins!" << endl;
         break;
      }

      if (checkTie()) {
         cout << "Tie game!" << endl;
         break;
      }

      switchPlayer();
   }

   return 0;
}