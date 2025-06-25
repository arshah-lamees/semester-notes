//#include <iostream>
//using namespace std;
//
//int main()
//{
//    //inputs
//    int a[100][100], b[100][100], sum[100][100], i, j;
//
//    int row;
//    cout << "Enter number of rows : ";
//    cin >> row;
//
//    int coloumn;
//    cout << "Enter number of columns : ";
//    cin >> coloumn;
//
//    cout << endl << "Enter elements of 1st matrix: " << endl;
//
//    for (i = 0; i < row; ++i)//row1
//        for (j = 0; j < coloumn; ++j)//coloumn1
//        {
//            cout << "Enter element a" << i + 1 << j + 1 << " : ";
//            cin >> a[i][j];
//        }
//
//
//    cout << endl << "Enter elements of 2nd matrix: " << endl;
//    for (i = 0; i < row; ++i)//row2
//        for (j = 0; j < coloumn; ++j)//coloumn2
//        {
//            cout << "Enter element b" << i + 1 << j + 1 << " : ";
//            cin >> b[i][j];
//        }
//
//    //calculations
//    //for storing sum of matric
//    for (i = 0; i < row; ++i)//rows
//    {
//        for (j = 0; j < coloumn; ++j)//coloumns
//        {
//            sum[i][j] = a[i][j] + b[i][j];
//        }
//    }
//
//    //for printing sum of matrix
//    cout << endl << "Sum of two matrix is: " << endl;
//    for (i = 0; i < row; ++i)//rows
//    {
//        for (j = 0; j < coloumn; ++j)//coloums
//        {
//            cout << sum[i][j] << "  ";
//            if (j == coloumn - 1)//for new line
//            {
//                cout << endl;
//            }
//        }
//    }
//
//    system("pause");
//    return 0;
//}