//#include <iostream>
//using namespace std;
//
//bool exists(int r, int c, int array[][6], int pattern[][3])
//{
//	int storing[3][3], count = 0;
//
//	for (int i = 0; i < 3; i++)//to store data in new array
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			storing[i][j] = array[r + i][c + j];
//		}
//	}
//	//comparing pattern and array
//
//	for (int i = 0; i < 3; i++)//rows
//	{
//		for(int j=0;j<3;j++)//columns
//		{
//			if(storing[i][j]=pattern[i][j])
//			{
//				count++;
//			}
//			else
//			{
//				count=0;
//			}
//		}
//		if(count==9)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
// int main()
// {
//	 bool e;
//	 int data[6][6],pattern[3][3];
//	 cout<<"Enter values for 6x6 matrix="<<endl;
//	 for(int i=0;i<6;i++)
//	 {
//		 for(int j=0;j<6;j++)
//		 {
//			 cin>>data[i][j];
//		 }
//	 }
//	 for (int i = 0; i < 6; i++)
//	 {
//		 for (int j = 0; j < 6; j++)
//		 {
//			 cout << data[i][j];
//		 }
//	 }
//	 cout<<"Enter values for 3x3 matrix="<<endl;
//	 for(int i=0;i<3;i++)
//	 {
//		 for(int j=0;j<3;j++)
//		 {
//			 cin>>pattern[i][j];
//		 }
//	 }
//	 for (int i = 0; i < 3; i++)
//	 {
//		 for (int j = 0; j < 3; j++)
//		 {
//			 cout<< pattern[i][j];
//		 }
//	 }
//
//	 //to check
//	 for(int i=0;i<4;i++)//row
//	 {
//		 for(int j=0;j<6;j++)//column
//		 {
//				e= exists(i, j, data, pattern);
//				if(e==true)
//				{
//					cout<<"pattern is present"<<endl;
//					system("pause");
//					return 0;
//				}
//		 }
//	 }
//	 if(e==false)
//	 {
//		 cout<<"not present"<<endl;
//	 }
//	 system("pause");
//	 return 0;
// }