//#include<iostream>
//using namespace std;
//int main()
//{
//	//program that initializes an array of ten integers (sorted array). It 
//	//inputs an integer from the userand searches the value in the array doing the following tasks :
//	int list[5];
//	int x;
//	cout << "enter elements of array ;\n";
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> x;
//		list[i] = x;
//	}
//	//sorted array
//	int index=0, size = 10, max;
//	cout << "sorted array :";
//	for (int i = 0; i < 10; i++)
//	{
//		int min = list[i];
//		for (int j=i+1; j < 10; j++)
//		{
//			if (list[j] < min)
//			{
//				min = list[j];
//				index = j;
//			}
//		}
//		if (i == 9)
//		{
//
//		}
//		else
//		{
//			swap(list[i], list[index]);
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << list[i] << endl;
//	}
//	//searching
//	int num;
//	cout << "number :\n";
//	cin >> num;
//	if (list[4] == num)
//	{
//		cout << "middle number = " << list[4];
//		cout << "middle number of the list is at " << 4 << endl;
//	}
//	else if (num < list[4])
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (list[i] == num)
//			{
//				cout << num << "is at " << i << endl;
//
//			}
//		}
//	}
//	else if (num > list[4])
//	{
//		for (int i = 5; i < 10; i++)
//		{
//			if (list[i] == num)
//			{
//				cout << num << " is at " << i << endl;
//
//			}
//		}
//	}
//	else
//	{
//		cout << "the number u entered is not found in the list." << endl;
//	}
//
//	return 0;
//}