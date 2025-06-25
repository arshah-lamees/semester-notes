#include<iostream>
using namespace std;
int calculate_gpa(int g1, int g2, int h1, int h2, int totalcredithours)
{
	int gpa_1, gpa_2, gpa_3;
	gpa_1 = ((g1)*h1) / totalcredithours;
	gpa_2 = ((g2)*h2) / totalcredithours;
	gpa_3 = ((gpa_1 + gpa_2) * 0.5);
	cout << "gpa =" << gpa_3;

}
int main()
{
	//course 1
	//for grading and equilence points 
	char grade1, grade2;
	
	int points=0, points2=0, z;

	cout << "grade for first course = ";
	cin >> grade1;

	if (grade1 == 'A')
	{
		points = 4;
	}
	else if (grade1 == 'B')
	{
		points = 3;
	}
	else if (grade1 == 'C')
	{
		points = 2;
	}
	else if (grade1 == 'D')
	{
		points = 1;
	}

	else if (grade1 == 'F')
	{
		points = 0;
	}

	//credit hours
	int credit_hours1, credit_hours2, total;

	cout << "Enter credit hours for course 1 =";
	cin >> credit_hours1;

	//course 2
	//for grading and points
	cout << "Enter grade for course 2 =";
	cin >> grade2;

	if (grade2 == 'A')
	{
		points2 = 4;
	}
	else if (grade2 == 'B')
	{
		points2 = 3;
	}
	else if (grade2 == 'C')
	{
		points2 = 2;
	}
	else if (grade2 == 'D')
	{
		points2 = 1;
	}
	else if (grade2 == 'F')
	{
		points2 = 0;
	}

	//credit hours for course 2
	cout << "Enter credit hours for course 2 =";
	cin >> credit_hours2;


	total = credit_hours1 + credit_hours2;
	calculate_gpa(points, points2,credit_hours1, credit_hours2, total);

	system("pause");
	return 0;
}