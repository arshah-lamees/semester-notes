
//Implement a function isFibo that takes in an integer array 
//of any size and determines if it contains or does not contain 
//a Fibonacci sequence. Also, write the main program that tests 
//the function on different inputs. The function must be efficient.

#include <iostream>
using namespace std;


bool IsFibo(int arr[], int size)
{
    bool fabonacci = true;
    if ((arr[0] != 0) && (arr[1] != 1))
    {
        fabonacci = false;
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] != arr[i - 1] + arr[i - 2])
        {
            fabonacci = false;
        }
    }
    return fabonacci;

}

int main()
{
    int arr[5];
    cout << "enter values : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    bool x = IsFibo(arr, 5);

    if (x == true)
    {
        cout << " The given sequence is Fabonacci" << endl;
    }
    else
    {
        cout << " The given sequence is not Fabonacci" << endl;
    }

    system("pause");
    return 0;
}