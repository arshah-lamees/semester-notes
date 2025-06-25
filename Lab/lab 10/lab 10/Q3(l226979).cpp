//#include <iostream>
//using namespace std;
//int main()
//{
//	int mth = 3,					
//	    day = 10;					
//	char weather[3][10];			
//
//	int Sun,						
//		Rain,						
//		Cloudy,						
//		totSun = 0,					
//		totRain = 0,				
//		totCloudy = 0,				
//		lrgstRain = 0;				
//		
//	for(int i=0;i<3;i++)
//	{
//		cout << "\nFor the month of ";
//		if (i == 0)
//			cout << "June.\n";
//		else if (i == 1)
//			cout << "July.\n";
//		else if (i == 2)
//			cout << "August.\n";
//		for(int j=0;j<10;j++)
//		{
//		
//			cout<<"Enter weather(R for rainy,C for cloudy,S for sunny)=";
//			cin>>weather[i][j];
//		}
//	}
//
//	cout<<"\t\nThree month report";
//	for (int row = 0; row < 3; row++)
//	{
//		Sun = Rain = Cloudy = 0;
//		for (int col = 0; col < 10; col++)
//		{	// Calculate monthly numbers
//			if(weather[row][col]=='S')
//			{
//				 Sun++;}
//			else if(weather[row][col]=='R')
//			{
//				Rain++;}
//			else if(weather[row][col]=='C')			
//			{ Cloudy++;}
//		}
//							
//			
//	
//		// Dislplay monthly numbers
//		cout << "\nFor the month of ";
//		if (row == 0)
//			cout << "June.\n";
//		else if (row == 1)
//			cout << "July.\n";
//		else if (row == 2)
//			cout << "August.\n";
//
//		cout << "Rainy : " << Rain << endl
//			 << "Sunny : " << Sun  << endl
//			 << "Cloudy: " << Cloudy << endl;
//
//		// Calculate 3-month totals
//		totSun += Sun;
//		totRain += Rain;
//		totCloudy += Cloudy;
//
//		// Calculate month with most rainy days
//		if(lrgstRain > Rain)
//			lrgstRain = row;
//	
//
//	// Display monthly totals
//	
//}
//	cout << "\nFor the whole three-month period\n"
//		 << "Rainy : " << totRain << endl
//		 << "Sunny : " << totSun  << endl
//		 << "Cloudy: " << totCloudy << endl;
//
//	// Display month with the largest number of rainy days
//	cout << "\nMonth with the largest number of rainy days: ";
//		if (lrgstRain == 0)
//			cout << "June.\n\n";
//		else if (lrgstRain == 1)
//			cout << "July.\n\n";
//		else if (lrgstRain == 2)
//			cout << "August.\n\n";
//		system("pause");
//
//	return 0;
//}