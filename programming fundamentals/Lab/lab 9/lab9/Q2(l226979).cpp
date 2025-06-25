//#include<iostream>
//#include<cstdio>
//#include<string.h>
//
//using namespace std;
//
//int main()
//{
//	char sentence[100];
//	cout << "sentence (100 characters) :\n";
//	gets_s(sentence);
//
//	//counting
//	int count[100];
//	int plus, j = 0;
//	for (int i = 0; sentence[i] != '.'; i++)//fot terminating 
//	{
//		if (sentence[i] != ' ')//for counting
//		{
//			plus++;
//		}
//		else
//		{
//			count[j] = plus;
//			cout << plus;
//			plus = 0;
//			j++;
//		}
//		cout << i << endl;
//	}
//
//	//minimum value
//	int min=count[0];
//
//	for (int i = 0; i < j; i++)//index value of count array
//	{
//		if (count[i] < min)
//		{
//			min = count[i];
//		}
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}