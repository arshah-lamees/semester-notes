//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int array1[3];
//	int array2[3];
//	int array3[3];
//	int elements;
//
//	//initialization of array1
//	cout << "the elements of array1 :\n";
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> elements;
//		array1[i] = elements;
//	}
//
//	//initialization of array2
//	cout << "the elements of array2 :\n";
//	for (int j = 0; j < 3; j++)
//	{
//		cin >> elements;
//		array2[j] = elements;
//	}
//
//	//intersection of array1 and array2
//
//	cout << "the intersection of both arrays is :\n";
//	int k = 0;//controlling the index of array3
//	for (int i = 0; i < 3; i++)//controlling array 1
//	{
//		for (int j = 0; j < 3; j++)//controlling array 2
//		{
//			if (array1[i] == array2[j])//condition
//			{
//					array3[k] = array1[i];//storing intersection in array3
//					cout << array3[k] << "," ;//printing the stored value in array3
//					k++;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}