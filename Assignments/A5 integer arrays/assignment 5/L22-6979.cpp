//Write a C++ code that takes input from a user 
//in 2 integer arrays of size 10 each. The program 
//prints "same" if the sum of the two arrays is the 
//same otherwise it prints the array with the largest sum.

#include<iostream>
using namespace std;

int main()
{
	int list_1[10], list_2[10], sum_1=0, sum_2=0;
 //list 1
		cout << "Enter number for list 1 :\n";
		for (int i = 0; i < 10; i++)
		{
			cin >> list_1[i];
			sum_1 = sum_1 + list_1[i];
		}
//list 2
		cout << "Enter number for list 2 :\n";
		for (int i = 0; i < 10; i++)
		{
			cin >> list_2[i];
			sum_2 = sum_2 + list_2[i];
		}
//conditions
		if (sum_1==sum_2)
		{
			cout << "same";
		}
		else if (sum_1 > sum_2)
		{
			cout << "list having greater sum :\n";
			for (int i = 0; i < 10; i++)
			{
				cout << list_1[i] << ",";
			}cout << "}" << endl;
			cout << "sum : " << sum_1;
		}
		else//(sum_2>sum_1)
		{
			cout << "list having greater sum :\n";

			for (int i = 0; i < 10; i++)
			{
				cout << list_2[i] << ",";
			}cout << "}" << endl;
			cout << "sum : " << sum_2;
		}
	return 0;
}