//#include<iostream>
//#include<windows.h>
//#include<string.h>
//
//using namespace std;
//
//int main()
//{
//	char puzzle[10][10];
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cin >> puzzle[i][j];
//		}
//	}
//	cout << "PUZZLE : " << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << puzzle[i][j] << " ";
//		}
//		cout << endl;
//	}
//	char word[10];
//	gets_s(word);
//	cout << "Enter word to be searched : ";
//	gets_s(word);
//	int c = 0;
//	for (int k = 0; word[k] != '\0'; k++)
//	{
//		c++;
//	}
//	bool flag1 = 0;
//	bool flag2 = 0;
//	int s, e;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			for (int k = 0; k < c; k++)
//			{
//				int p = k;
//				if (puzzle[i][j] == word[k])
//				{
//					if (puzzle[i + 1][j] == word[k + 1])
//					{
//						flag1 = 1;
//						s = i;
//						e = j;
//					}
//					else if (puzzle[i][j + 1] == word[k + 1])
//					{
//						flag2 = 1;
//						s = i;
//						e = j;
//					}
//				}
//			}
//
//		}
//
//	}
//	if (flag1 == 1)
//	{
//		cout << "Found" << endl;
//		cout << "Down" << s << e;
//	}
//	else if (flag2 == 1)
//	{
//		cout << "Found" << endl;
//		cout << "Right" << s << e;
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}