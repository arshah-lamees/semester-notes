//#include<iostream>
//using namespace std;
////function
//int trace(int data[][3],int r)
//{
//	int sumL=0;
//	int sumR = 0;
//	int sum;
//	for (int i = 0; i < r; i++)//rows
//	{
//		for (int j = 0; j < 3; j++)//column
//		{
//			if (i == j)//left diagonal
//			{
//				sumL= data[i][j] +sumL;
//			}
//			else if (i + j == 2)//right diagonal
//			{
//				sumR = data[i][j] + sumR;
//			}
//		}
//	}
//	sum = sumR + sumL;
//	return sum;
//}
//
//int main()
//{
//	int array[3][3];
//	cout << "give the elemenets of array : ";
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> array[i][j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			 cout<< array[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	int s = trace(array, 3);
//	cout << "the trace of square matrix : " << s << endl;
//
//	system("pause");
//	return 0;
//}