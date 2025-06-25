#include<iostream>
using namespace std;

int frequency(char array[], int size, char key[])
{
	int found = 0;
	for (int i = 0; array[i] != '\0'; i++)
	{
		int j = i;
		if (array[i] != ' ')
		{
			if (array[i] == key[j])
			{
				found++;
				array[i] = 'x';
			}
		}
		j++;
	}
	return found;
}

int main()
{
	char paragraph[1000];
	char word[1000];
	cout << "give paragraph :\n";
	gets_s(paragraph);

	cout << "enter word : ";
	gets_s(word);

	int f = frequency(paragraph, 1000, word);
	cout << "frequency of ' " << word << " ' is "<<f;
	cout << "updated paragraph :\n";
	cout << paragraph<<endl;

	system("pause");
	return 0;
}