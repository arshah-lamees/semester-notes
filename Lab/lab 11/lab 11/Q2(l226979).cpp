//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	ifstream fin("text.txt");
//	ofstream fout_encrypt("encrypt.txt");
//	ofstream fout_decrypt("decrypt.txt");
//	
//	char file[100];//to get outut in consol
//	int choice,index=-1;
//
//	cout << "press 1 for Encrypt data\npress 2 for Decrypt data"<<endl;
//	cin >> choice;
//
//	if (choice == 1)//encrypt data
//	{
//		for (int i = 0; i < 100 && !fin.eof();i++)
//		{
//			index++;
//			fin >> file[i];
//		}
//		for (int i = 0; i < index; i++)
//		{
//			file[i] = file[i] + 1;
//		}
//		for (int i = 0; i < index; i++)
//		{
//			cout << file[i];
//		}
//		for (int i = 0; i < index; i++)
//		{
//			fout_encrypt<<file[i];
//		}
//	}
//	else if (choice == 2)//decrypt data
//	{
//		for (int i = 0; i < 100 && !fin.eof(); i++)
//		{
//			index++;
//			fin >> file[i];
//		}
//		for (int i = 0; i < index; i++)
//		{
//			file[i] = file[i] - 1;
//		}
//		for (int i = 0; i < index; i++)
//		{
//			cout << file[i];
//		}
//		for (int i = 0; i <index; i++)
//		{
//			fout_decrypt << file[i];
//		}
//	}
//	system("pause");
//}