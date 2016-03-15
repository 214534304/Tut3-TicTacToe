#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main(){
	TicTacToe tic1;

	tic1.Draw();
	while (1){
		tic1.input();
		tic1.Draw();
		if (tic1.over() == 'X'){
			cout << "X wins!" << endl;                       //selecting a winner
			break;
			}
		else if (tic1.over() == 'O'){
			cout << "O wins!" << endl;
			
		}
		tic1.Toggleplayer();

	}
	cin.get();
}