#include "TicTacToe.h"

char matrix[3][3] = {'1','2','3','4','5','6','7','8','9' };    //initialised my array
char player = 'X';
void TicTacToe::Draw(){

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << matrix[i][j] << "";
		}
		cout << endl;
	}
}

//prompt the user
void TicTacToe:: input(){
	int num;
	cout << "Press the number of your field:";
	cin >> num;

	if (num == 1)
		matrix[0][0] = player;
	else if(num ==2)
		matrix[0][1] = player;
	else if (num == 3)
		matrix[0][2] = player; 
	else if (num == 4)
		matrix[1][0] = player;
	else if (num == 5)
		matrix[1][1] = player;
	else if (num == 6)
		matrix[1][2] = player;
	else if (num == 7)
		matrix[2][0] = player;
	else if (num == 8)
		matrix[2][1] = player;
	else if (num == 9)
		matrix[2][2] = player;
}

void TicTacToe::Toggleplayer(){


}
char TicTacToe::over(){
}



TicTacToe::TicTacToe()
{
}


TicTacToe::~TicTacToe()
{
}
