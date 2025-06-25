//#include <iostream>
//using namespace std;
// 
// int main()
// {
//	 int data[3][5],sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
//	 for(int i=0;i<3;i++)//monkey
//	 {
//		 for(int j=0;j<5;j++)//days of week
//		 {
//			 cout<<"\npounds of food for monkey#"<<(i+1)<<" = ";
//			 cin>>data[i][j];
//			 while(data[i][j]<0)
//			 {
//				 if(data[i][j]<0)
//				{
//					 cout<<"invalid ! give positive number !";
//				}
//				cin>>data[i][j];
//			 }
//			 if(j==0)
//			 {
//				sum=sum+data[i][j];
//			 }
//			 else if(j==1)
//			 {
//				sum1=sum1+data[i][j];
//			 }
//			 else if(j==2)
//			 {
//				sum2=sum2+data[i][j];
//			 }
//			 else if(j==3)
//			 {
//				sum3=sum3+data[i][j];
//			 }
//			 else if(j==4)
//			 {
//				sum4=sum4+data[i][j];
//			 }
//		 }
//	 }
//	 cout << "average amount of food written : ";
//	 cout<< "on monday ="<< (sum)/3<<endl;
//	 cout<<"on tuesday ="<< (sum1)/3<<endl;
//	 cout<<"on wednesday ="<< (sum2)/3<<endl;
//	 cout<<"on thursday ="<< (sum3)/3<<endl;
//	 cout<<"on friday ="<< (sum4)/3<<endl;
//
//	  int max=data[0][0],min=data[0][0];
//	  for(int i=0;i<3;i++)
//	  {
//		  for(int j=0;j<5;j++)
//		  {
//			  if(max<data[i][j])
//			  {
//				  max=data[i][j];
//			  }
//			  else if(min>data[i][j])
//			  {
//				  min=data[i][j];
//			  }
//		  }
//	  }
//	  cout<<"The least amount of food eaten ="<<min<<endl;
//	  cout<<"The greatest amount of food eaten ="<<max<<endl;
//
//	  system("pause");
//	  return 0;
// }