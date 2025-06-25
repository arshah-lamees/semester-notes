#include<iostream>
using namespace std;

//function
bool swaping(int a[], int b[])
{
	int temp, temp1,cout=0;
	for (int i = 0; i < 4; i++)
	{
		if (i == 0)//for 0 and 2
		{
			temp = a[i];
			a[i] = a[i + 2];
			a[i + 2] = temp;
		}
		if (i == 1)//for 1 and 3
		{
			temp1 = a[i];
			a[i] = a[i + 2];
			a[i + 2] = temp1;
		}
		for (int i = 0; i < 4; i++)//check
		{
			if (a[i] == b[i])
				{
				cout++;
				}
		}
		
	}
	if (cout == 4)//result
	{
		return true;
	}
	return false;


}

int main()
{
	int array1[4];
	cout << "enter elements of array 1 : ";
	for (int i = 0; i < 4; i++)
	{
		cin >> array1[i];
	}
	int array2[4];

	cout << "enter elements of array 2 : ";
	for (int i = 0; i < 4; i++)
	{
		cin >> array2[i];
	}

	bool s = swaping(array1, array2);
	if (s == true)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}

	system("pause");
	return 0;
}