//#include <iostream>
//using namespace std;
//
//int main()
//{
//   // this is a program that takes height as an input and shows the equilateral triangle
//    int height, c = 1, space, i, j;
//    cout << " Height: ";
//    cin >> height;
//
//   // i is showing the number of rows
//   //j is showing the number of elements in a row
//    for (i = 0; i < height; i++)
//    {
//        for (space = 1; space <= height - i; space++)
//            cout << "  ";
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == 0)
//            {
//                c = 1;
//            }
//            else
//            {
//                c = c * (i - j + 1) / j;   
//            }
//            cout << c << "   ";
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}