#include<iostream>;
using namespace std;

int main()
{
	int nop = 0 ;
	char ticket=0 ,s=0, n=0, popcorn=0 ,t=0;
	cout << "number of people :";
	cin >> nop;
	cout << "welcome to emporium cinema\n";
	cout << "press s for the student ticket = 250\n";
	cout << "press n for the normal ticket = 400\n";
	cout << "press e for executive ticket = 750\n";
	cout << "please select your option : ";
	cin >> ticket;
	if (ticket = s)
	{
		cout << "you have choosen student ticket, please pay 250 each";
	}
	else if (ticket = n)
	{
		cout << "you have choosen normal ticket, please pay 400 each";
	}
	else
	{
		cout << " you have choosen executive ticket, please pay 750 each\n";
	}
	cout << "welcome to popcorn shop\n";
	cout << "select from the following menu\n";
	cout << "press s for simple , rs 100\n";
	cout << "press t for tacos , rs 150\n";
	cout << "press c for caramel , rs 200\n";
	cout << "give your choice :";
	cin >> popcorn;
	if (popcorn = s) 
	{
		cout << "you have choosen simple popcorn, please pay 100 each";
	}
	else if (popcorn = t)
	{
		cout << "you have choosen tacos popcorn, please pay 150 each";
	}
	else
	{
		cout << "you have choosen caramel popcorn , please pay 200 each";
	}
	cout << "your total : ";
	cout << " movie:";
	cout << "popcorn:";


	return 0;
}