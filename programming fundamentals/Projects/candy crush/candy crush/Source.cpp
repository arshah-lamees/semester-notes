//GAME :   KIND OF CANDY CRUSH
//MADE BY :   SYEDA ARSHAH (22L-6979)
//            IMAAN BINT NADEEM (22L-6620)


#include<iostream>
#include<conio.h>//library for _getch()
#include"help.h"//library for graphics
#include<cstdlib>//library for rand function
#include<time.h>//library for srand func, needed prior to rand and for time control

using namespace std;

void gems(char array[][8], int R)//assigning random no to each slot on board 
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			array[i][j] = rand() % 5 + 1;
		}
	}
}
void DisplayBoard(char array[][8], int R)//assigning corresponding (gem) to each random value 
{
	int x = 100;
	int y = 50;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (array[i][j] == 1)
			{
				myRectangle(x, y, x + 30, y + 20, 44, 55, 66);//rectangle
			}
			else if (array[i][j] == 2)
			{
				myRectangle(x, y, x + 20, y + 20, 191, 64, 191);//square
			}
			else if (array[i][j] == 3)
			{
				myEllipse(x, y, x + 35, y + 30, 44, 55, 0);
			}
			else if (array[i][j] == 4)
			{
				myTriangle(x, x + 20, y + 23, 244, 55, 66);
			}
			else if (array[i][j] == 5)
			{
				myDimond(x, x + 30, y + 10, 244, 255, 166);
			}
			else if (array[i][j] == 6)//enter
			{
				myRectangle(x, y, x + 20, y + 20, 0, 0, 0);
			}
			else if (array[i][j] == 7)//Xgem
			{
				myLine(x, y, x + 10, y + 20, 255);
				myLine(x, y + 20, x + 10, y, 255);
			}
			else if (array[i][j] == 8)//flame gem
			{
				myLine(x, y, x + 30, y + 20, 100);
			}
			x = x + 60;
		}
		y = y + 55;
		x = 100;
	}

}
void refill(char arr[][8], int r)//for refilling the spaces with random number
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] == 6)
			{
				arr[i][j] = rand() % 5 + 1;
			}
		}
	}
}
void spaces(char arr[][8], int r)//for bringing them at the top of the table
{
	int z;
	for (int j = 0; j < 8; j++)//control columns
	{
		for (int i = 0; i < 8; i++)//start checking the empty slots 
		{
			if (arr[i][j] == 6)
			{
				z = i;
				while (z > 0)//checking spaces
				{
					swap(arr[z][j], arr[z - 1][j]);
					system("cls");
					DisplayBoard(arr, 8);
					Sleep(200);
					z--;
				}
			}
		}
	}
	Sleep(20);
	refill(arr, 8);
}
void explode(char arr[][8], int i, int j)//for xgem
{
	for (int l = 0; l < 8; l++)
	{
		arr[i][l] = 6;
		arr[l][j] = 6;
	}
}
void Xgem(char array[][8], int r, int& score)//gem destroy all gems in a same and columns
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			//3 in a row, third is flame gem
			if (array[i][j] == 7 && array[i][j - 1] == array[i][j + 1] || array[i][j - 1] == 7 && array[i][j] == array[i][j + 1] || array[i][j + 1] == 7 && array[i][j - 1] == array[i][j])
			{
				//10 points for matching with a flame gem
				score = score + 100;
				explode(array, i, j);
			}
			//3 in a column, third is flame gem
			else if (array[i][j] == 7 && array[i - 1][j] == array[i + 1][j] || array[i - 1][j] == 7 && array[i][j] == array[i + 1][j] || array[i + 1][j] == 7 && array[i - 1][j] == array[i][j])
			{
				//10 points for matching with a flame gem
				score = score + 100;

				explode(array, i, j);
			}
		}
	}
	//refill passed after this to refill the empty spaces 
}
void FlameGem(char array[][8], int r, int& score)//destroy 9 gems in a box
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			//3 in a row, third is flame gem
			if (array[i][j] == 8 && array[i][j - 1] == array[i][j + 1] || array[i][j - 1] == 8 && array[i][j] == array[i][j + 1] || array[i][j + 1] == 8 && array[i][j - 1] == array[i][j])
			{
				//10 points for matching with a flame gem
				score = score + 10;

				//gem's row deleted, 6 used for space 
				array[i][j] = 6;
				array[i][j - 1] = 6;
				array[i][j + 1] = 6;

				//row above gem deleted 
				array[i - 1][j] = 6;
				array[i - 1][j - 1] = 6;
				array[i - 1][j + 1] = 6;

				//row below gem deleted 
				array[i + 1][j] = 6;
				array[i + 1][j - 1] = 6;
				array[i + 1][j + 1] = 6;
			}
			//3 in a column, third is flame gem
			else if (array[i][j] == 8 && array[i - 1][j] == array[i + 1][j] || array[i - 1][j] == 8 && array[i][j] == array[i + 1][j] || array[i + 1][j] == 8 && array[i - 1][j] == array[i][j])
			{
				//10 points for matching with a flame gem
				score = score + 10;

				//gem's column deleted, 6 used for space 
				array[i][j] = 6;
				array[i][j + 1] = 6;
				array[i][j - 1] = 6;

				//row above gem deleted 
				array[i - 1][j] = 6;
				array[i - 1][j + 1] = 6;
				array[i - 1][j - 1] = 6;

				//row below gem deleted 
				array[i + 1][j] = 6;
				array[i + 1][j + 1] = 6;
				array[i + 1][j] = 6;
			}
		}
	}
	DisplayBoard(array, 8);
	Sleep(150);
	spaces(array, 8);
}


bool checkgems_r(char array[][8], int r, int& score)//checks 3 and 4 gems in  row, column is same row is changing
{
	Xgem(array, 8, score);
	FlameGem(array, 8, score);
	bool exists = false;
	for (int j = 0; j < 8; j++)//column
	{
		for (int i = 0; i < 6; i++)//i<6 because we have 6 combinations of 3 gems in 8 rows
		{
			if (array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j] && array[i][j] != 6)//3 gems combination
			{
				if (array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j] && array[i][j] == array[i + 3][j] && i < 5 && array[i][j] != 6)//4 gems combination
				{
					if (array[i][j] == array[i + 1][j] && array[i][j] == array[i + 2][j] && array[i][j] == array[i + 3][j] && array[i][j] == array[i + 4][j] && i < 4 && array[i][j] != 6)//5 gems comination
					{
						array[i][j] = 6;
						array[i + 1][j] = 6;
						array[i + 2][j] = 6;
						array[i + 3][j] = 6;
						array[i + 4][j] = 7;
						score = score + 5;//scores
					}
					else
					{
						array[i][j] = 6;
						array[i + 1][j] = 6;
						array[i + 2][j] = 6;
						array[i + 3][j] = 8;
						score = score + 4;//scores
					}
				}
				else
				{
					array[i][j] = 6;
					array[i + 1][j] = 6;
					array[i + 2][j] = 6;
					score = score + 3;//for scores

				}
				exists = true;
			}
		}
	}
	if (exists == true)
	{
		Sleep(150);
		spaces(array, 8);
	}
	return exists;
}
bool checkgems_c(char array[][8], int r, int score)//checks 3 or 4 gems in a column, row same column changing
{
	Xgem(array, 8, score);
	FlameGem(array, 8, score);
	bool exists = false;
	for (int i = 0; i < 8; i++)//rows
	{
		for (int j = 0; j < 6; j++)//j<6 because we have 6 combinations of 3 gems in 8 columns
		{
			if (array[i][j] == array[i][j + 1] && array[i][j] == array[i][j + 2] && array[i][j] != 6)//3 gems combination
			{
				if (array[i][j] == array[i][j + 1] && array[i][j] == array[i][j + 2] && array[i][j] == array[i][j + 3] && j < 5 && array[i][j] != 6)//4 gems combination
				{
					if (array[i][j] == array[i][j + 1] && array[i][j] == array[i][j + 2] && array[i][j] == array[i][j + 3] && array[i][j] == array[i][j + 4] && j < 4 && array[i][j] != 6)//5 gems comination
					{
						array[i][j] = 6;
						array[i][j + 1] = 6;
						array[i][j + 2] = 6;
						array[i][j + 3] = 6;
						array[i][j + 4] = 7;
						score = score + 5;//scores
					}
					else
					{
						array[i][j] = 6;
						array[i][j + 1] = 6;
						array[i][j + 2] = 8;
						array[i][j + 3] = 6;
						score = score + 4;//scores
					}
				}
				else
				{
					array[i][j] = 6;
					array[i][j + 1] = 6;
					array[i][j + 2] = 6;
					score = score + 3;//scores
				}
				exists = true;
			}
		}
	}
	if (exists == true)
	{
		Sleep(150);
		spaces(array, 8);
	}
	return exists;
}
void pointer(char b[][8], int r)//cursor selection ,deselection and swaping
{
	int time_start = 120;
	int remaining = time_start;//for condition
	bool enter = false;//enter key
	int c = 0, m = 0;
	int x = 100, y = 50;
	myLine(x, y + 30, x + 25, y + 30, 255);
	int which, score = 0;
	while (remaining > 0)
	{

		bool exit = false;
		bool select = isCursorKeyPressed(which);
		if (select == true)
		{
			if (which == 1 && x > 100)//left key
			{
				myLine(x, y + 30, x + 25, y + 30, 0);
				x = x - 60;
				c--;
			}
			else if (which == 2 && y > 50)//up key
			{
				myLine(x, y + 30, x + 25, y + 30, 0);
				y = y - 55;
				m--;
			}
			else if (which == 3 && x < 520)//right key
			//520=initial+(columns*change in distance between shapes )
			{
				myLine(x, y + 30, x + 25, y + 30, 0);
				x = x + 60;
				c++;
			}
			else if (which == 4 && y < 435)//down key
			{
				myLine(x, y + 30, x + 25, y + 30, 0);
				y = y + 55;
				m++;
			}

			else if (which == 5)//enter key pressed
			{
				which = 0;
				select = 0;
				while (select == false && exit == false)
				{
					select = isCursorKeyPressed(which);
					if (which == 1 && x > 100)
					{
						swap(b[m][c], b[m][c - 1]);
					}
					else if (which == 2 && y > 50)
					{
						swap(b[m][c], b[m - 1][c]);
					}
					else if (which == 3 && x < 520)
					{
						swap(b[m][c], b[m][c + 1]);
					}
					else if (which == 4 && y < 435)
					{
						swap(b[m][c], b[m + 1][c]);
					}
					else if (which == 5)
					{
						exit = true;
					}
				}
				enter = true;
				exit = false;

			}
			checkgems_c(b, 8, score);
			checkgems_r(b, 8, score);
			myLine(x, y + 30, x + 25, y + 30, 100);
		}
		which = 0;
		if (enter == true)
		{
			system("cls");
			DisplayBoard(b, 8);
		}
		time_t time = clock() / 1000;
		remaining = time_start - time;
		cout << endl << "seconds remaining =" << remaining << endl << "score=" << score;
		gotoxy(0, 0);
	}
	system("cls");
	cout << "total score=" << score << endl;
}

int main()
{
	bool c1 = true, c2 = true;
	int score = 0;
	srand((0));// srand() is used to initialize random number generators

	//declaring the board 
	char board[8][8];
	gems(board, 8);
	while (c1 == true && c2 == true)
	{
		c1 = checkgems_c(board, 8, score);
		c2 = checkgems_r(board, 8, score);
	}
	//passing function DisplayBoard
	DisplayBoard(board, 8);
	pointer(board, 8);

	_getch();
	return 0;
}