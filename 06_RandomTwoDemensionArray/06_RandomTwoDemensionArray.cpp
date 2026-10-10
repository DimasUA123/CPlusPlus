#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0)); // time(0) 01.01.1970

    //int a;
    //a = rand();
    //cout << "a = " << a << endl;
    //a = rand();
    //cout << "a = " << a << endl;
    //a = rand();
    //cout << "a = " << a << endl;

    //for (int i = 0; i < 30; i++)
    //{
    //    a = rand() % 90+10; // 10 .... 99
    //    cout << a << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < 30; i++)
    //{
    //    a = rand() % 40 - 20; // -20 .... 20
    //    cout << a << " ";
    //}


    /*const int size = 15;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 50;
        cout << arr[i] << " ";
    }*/

    //cout << endl;
   /* int array1[3][3] = { {1, 2, 3,}, {4, 5, 6}, {7, 8, 9} };
    int array1[3][3] = { {1, 2, 3,}, {4, 5, 6} };*/
   /* int array1[3][3] = {1, 2, 3,};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }*/


    const int rows = 4;
    const int cols = 6;
    int array[rows][cols]{};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 60;
            //array[i][j] = rand() % 90 + 10;
            cout << setw(5) << array[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;

    int max = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] > max)
                max = array[i][j];
        }
        cout << endl;
    }
    cout << "Max elem " << max << endl;
}
