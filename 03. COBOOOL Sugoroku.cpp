#include <iostream>
using namespace std;
int main(void){
	// Let's challenge in my favorite language!!
	int n = 0; //Number of cells
	int *board; //Board
	int games; //Number of games
	int firstmove; //The first move.
	int position = 0; //Position on the board
	

	cin >> n;
	board = new int[n]; //Dynamically create board with n entries
	for (int ii = 0; ii < n; ii++)	//Populate board with entries
	{
		cin >> board[ii];
	}

	cin >> games;
	for (int ii = 0; ii < games; ii++)
	{
		position = 1;
		cin >> firstmove;
		position += firstmove;
		while (position != n)
		{
			if (position < 1 || position > n)
			{
				cout << "No" << endl;
				break;
			}
			position += board[position - 1];
			if (position == n)
			{
				cout << "Yes" << endl;
			}
		}
	}
	delete board;
	board = NULL;
	return 0;
}
