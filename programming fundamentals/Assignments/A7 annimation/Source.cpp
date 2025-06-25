
#include<iostream>
#include<conio.h>
#include"help.h"

using namespace std;

int main()
{
	int x = 50;
	for(int i=1; i<60;i++)
	{
		myRectangle(x,50,x+50,100,255,0,0);
		Sleep(20);
		myRectangle(x,50,x+50,100,0,0,0);
		x = x+10;
	}
	_getch();
	return 0;
}

