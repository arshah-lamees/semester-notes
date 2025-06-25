#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdio>
#include<windows.h>

using namespace std;
//arr[] original sentence
//arr1[] unique characters

//function1
void take_input(char arr[])
{
	cin.getline(arr, 1000);//built in function for taking character array input
}

//function 2
int unique_counter(char arr[], char arr1[])
{
	//buffer array
	char array[1000];// in this array all characters will store along with spaces
	for (int i = 0; i < 1000; i++)//for storing character in array 
	{
		array[i] = arr[i];
	}

	int i = 0;
	while (array[i] != '\0')//for replacing repeating element with space in array while
	{
		for (int j = 1; array[i + j] != '\0'; j++)
		{
			if (array[i] >= 'A' && array[i] <= 'Z')//for checking upper case
			{
				if (array[i] == array[i + j] || array[i] == array[i + j] - 32)
				{
					array[i + j] = ' ';
				}
			}
			else if (array[i] >= 'a' && array[i] <= 'z')//for checking lower case
			{
				if (array[i] == array[i + j] || array[i] == array[i + j] + 32)
				{
					array[i + j] = ' ';
				}
			}
			else
			{
				if (array[i] == array[i + j])//for checking special characters
				{
					array[i + j] = ' ';
				}
			}
		}
		i++;
	}
	array[i] = '\0';//for storing null character in buffer array

	int k = 0;
	int count = 0;
	while (array[k] != '\0')//for storing unique characters
	{
		if (array[k] != ' ')//excluding space
		{
			arr1[count] = array[k];
			count++;
		}
		k++;
	}
	arr1[count] = '\0';//for storing null character in uniques characters array 

	for (int z = 0; arr1[z] != '\0'; z++)// for printing unique characters  array
	{
		cout << arr1[z] << endl;
	}
	return count;
}

//function 3
void char_dictionary(char arr[], char arr1[])
{
	int i = 0;
	int count = 0;
	//comparing uniques character array and original character array
	while (arr1[i] != '\0')//for the unique character array 
	{
		for (int j = 0; arr[j] != '\0'; j++)//for original sentence array
		{
			if (arr[j] >= 'A' && arr[j] <= 'Z')//for checking upper case
			{
				if (arr1[i] == arr[j] || arr1[i] == arr[j] + 32)
				{
					count++;
				}
			}
			else if (arr[j] >= 'a' && arr[j] <= 'z')//for checking lower case
			{
				if (arr1[i] == arr[j] || arr1[i] == arr[j] - 32)
				{
					count++;
				}
			}
			else
			{
				if (arr1[i] == arr[j])//for checking special characters
				{
					count++;
				}
			}
		}
		cout << arr1[i] << " : " << count << endl;
		count = 0;
		i++;
	}
}

//function 4
int rainbow_number(char arr[], char ch)//will call only in function show_me_the_rainbow
{
	int count = 0;
	for (int j = 0; arr[j] != '\0'; j++)//for comparing original sentence array with the desire character
	{
		if (arr[j] >= 'A' && arr[j] <= 'Z')//for checking upper case
		{
			if (ch == arr[j] || ch == arr[j] + 32)
			{
				count++;
			}
		}
		else if (arr[j] >= 'a' && arr[j] <= 'z')//for checking lower case
		{
			if (ch == arr[j] || ch == arr[j] - 32)
			{
				count++;
			}
		}
		else
		{
			if (ch == arr[j])//for checking special characters
			{
				count++;
			}
		}
	}
	//given conditions
	if (count == 1)
	{
		return 0;
	}
	else if (count == 2 || count == 3)
	{
		return 1;
	}
	else if (count == 4 || count == 5)
	{
		return 2;
	}
	else if (count == 6 || count == 7)
	{
		return 3;
	}
	return 4;
}

//function 5
bool isprime(int num)//helping function used in function show_me_the_rainbow
{
	bool prime = true;
	if (num == 1 || num == 0)
		prime = false;
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
				prime = false;
		}
	}
	return prime;
}
void Show_Me_The_Rainbow(char arr[],char roll[])
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);//for colouring
	int i = 0;
	int x;
	while (arr[i] != '\0')
	{
		x = rainbow_number(arr, arr[i]);
		if (x == 0)
		{
			SetConsoleTextAttribute(h, 4);//for assigning the colours ,red
			cout << arr[i];
		}
		else if (x == 1)
		{
			SetConsoleTextAttribute(h, 2);//green
			cout << arr[i];
		}
		else if (x == 2)
		{
			SetConsoleTextAttribute(h, 1);//blue
			cout << arr[i];
		}
		else if (x == 3)
		{
			SetConsoleTextAttribute(h, 5);//purple
			cout << arr[i];
		}
		else
		{
			SetConsoleTextAttribute(h, 6);//yellow
			cout << arr[i];
		}
		i++;
	}
	cout << endl;

	//for roll number
	int r=strtol(roll,nullptr,10);//for converting character array into integer array
	
	if (r % 2 == 0)//if even roll number
	{
		for (int z = 0; arr[z] != '\0'; z++)
		{
			bool p = isprime(z);
				if (p == false)
				{
					SetConsoleTextAttribute(h, 11);//cyan colour
					cout << arr[z];
				}
				else //(p==true)
				{
					SetConsoleTextAttribute(h, 7);//white
					cout << arr[z];
				}
		}
	}
	else//if odd roll number
	{
		for (int z = 0; arr[z] != '\0'; z++)
		{
			bool p = isprime(z);
			if (p == false)
			{
				SetConsoleTextAttribute(h, 7);//white
				cout << arr[z];
			}
			else//(p==true)
			{
				SetConsoleTextAttribute(h, 13);//Magenta colour
				cout << arr[z];
			}

		}
	}
	cout << endl;

}

int main()
{
	char roll_number[5] = { '6','9','7','9','\0' };
	char array[1000];
	char array1[1000];
	int x;

	take_input(array);//function 1
	for (int i = 0; array[i] != '\0'; i++)
	{
		cout << array[i];
	}
	cout << endl;

	x = unique_counter(array, array1);//function 2
	cout << "the total number of unique characters : " << x << endl;

	char_dictionary(array, array1);//function 3

	Show_Me_The_Rainbow(array,roll_number);//function 5

	system("pause");
	return 0;
}