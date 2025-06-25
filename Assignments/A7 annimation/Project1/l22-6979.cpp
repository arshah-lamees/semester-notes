//shoting tank
#include<iostream>
#include<conio.h>
#include"Header.h"

using namespace std;

int main()
{
	//sky
	myRectangle(0, 0,1100, 360, 135, 206, 235);

	//ground
	myRectangle(0, 360, 1100, 600, 0, 255,0);

	//sun
	myEllipse(55, 70, 100,120, 255, 255, 0);

	//tank
	myRectangle(100, 170, 180, 210, 78, 91, 49);//1 rectangle
	myRectangle(70, 210, 250, 270, 78, 91, 49);//2 rectangle
	myRectangle(250, 230, 350, 250, 78, 91, 49);//shot rectangle
	myRectangle(55, 270, 390, 360, 78, 91, 49);//3 rectangle
	
	int x = 350;
	int j = 0;

	while (j < 100)//continue firing
	{

	//house
	myRectangle(800, 130, 900, 360, 44,66,77);//building
	myRectangle(820, 150, 880, 180, 199, 227, 225);//window 1
	myRectangle(820, 190, 880, 220, 199, 227, 225);//window 2
	myRectangle(820, 230, 880, 260, 199, 227, 225);//window 3
	myRectangle(820, 270, 880, 300, 199, 227, 225);//window 4
	myRectangle(835, 310, 860, 360, 150,75,0);//door
	
		for (int i = 0; i < 44; i++)//fire
		{
			myEllipse(x, 229, x + 20, 248, 0,0, 0);//bullet
			Sleep(30);//bullet speed control
			myEllipse(x, 229, x + 20, 248, 135, 206, 235);//hide the bullet
			x = x + 10;
		}

		for (int i = 0; i < 44; i++)//demolish building
		{
			myRectangle(800, 130, 900, 360, 135, 206, 235);//building
			myRectangle(820, 150, 880, 180, 135, 206, 235);//window 1
			myRectangle(820, 190, 880, 220, 135, 206, 235);//window 2
			myRectangle(820, 230, 880, 260, 135, 206, 235);//window 3
			myRectangle(820, 270, 880, 300, 135, 206, 235);//window 4
		}
		j++;
		x = 350;
		Sleep(300);//time of fire
		
	}

	_getch();
}