//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "menu\nfor addition enter 1\nfor division enter 2\nfor magnitude enter 3\nfor fictorial enter 4\nto exit the program press any key\n";
//
//	int userinput;
//	int n1=0, n2=0, sum=0;
//	int div=0;
//	int n=0, mag=0;
//	int fic=1;
//	cin >> userinput;
//	while (userinput <= 5)
//	{
//		if (userinput == 1)
//		{
//			cout << "ADDITION\n";
//			cout << "1st number : ";
//			cin >> n1;
//			cout << "2nd number : ";
//			cin >> n2;
//			sum = n1 + n2;
//			cout << "result = " << sum << endl;
//		}
//		else if (userinput == 2)
//		{
//			cout << "DIVISION\n";
//			cout << "1st number : ";
//			cin >> n1;
//			cout << "2nd number : ";
//			cin >> n2;
//			div = n1 / n2;
//			cout << "result = " << div << endl;
//		}
//		else if (userinput == 3)
//		{
//			cout << "MAGNITUDE\n";
//			cout << "number : ";
//			cin >> n;
//			if (n >= 0)
//			{
//				cout << "result = " << n;
//			}
//			else
//			{
//				mag = -1 * n;
//				cout << "result = " << mag;
//			}
//		}
//		else if (userinput == 4)
//		{
//			cout << "FICTORIAL\n";
//			cout << "number : ";
//			cin >> n;
//			if (n > 0)
//			{
//				while(n>0)
//				{
//					fic = fic * n;
//					n = n - 1;
//				}
//				cout << "result = " << fic << endl;
//			}
//			else
//			{
//				cout << "the fictorial of a negative number doesnot exist";
//			}
//		}
//		else
//		{
//			if (userinput == 5)
//			{
//				cout << "you have exited the process";
//			}
//		}
//		system("pause");
//		system("cls");
//		cout << "menu\nfor addition enter 1\nfor division enter 2\nfor magnitude enter 3\nfor fictorial enter 4\nto exit the program press any key\n";
//		cin >> userinput;
//	}
//	return 0;
//}