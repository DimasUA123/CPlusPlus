#include <iostream>
using namespace std;

int main()
{

    // Завдання 1

    /*const int sizeArr = 10;
    int arr[sizeArr], multiplElm = 1;

    for (int i = 0; i < sizeArr; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr[i];
    }
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
        multiplElm *= arr[i];
    }
    cout << "\nMultiplication of Elements = " << multiplElm;*/

    
    
    // Завдання 2

    /*const int sizeArr = 7;
    int countNeg = 0, countPos = 0;
    int arr[sizeArr] = {-3, -12, 0, 50, 24, 12, 9};
  
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] > 0)
            countPos++;
        if (arr[i] < 0)
            countNeg++;
    }
    cout << "\nCount of positive elements = " << countPos; 
    cout << "\nCount of negetive elements = " << countNeg;*/



    // Завдання 3

    /*const int sizeArr = 7;
    int sumPos = 0;
    long arr[sizeArr] = { 3, 5, -2, 10, 24, 12, 8};

    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] % 2 == 0)
            sumPos+=arr[i];
    }
    cout << "\nSumma of even elements = " << sumPos << endl;*/



    // Завдання 4

    /*const int sizeArr = 10;
    int arr[sizeArr]{};

    for (int i = 0; i < sizeArr; i++)
    {
        arr[i] = pow(2, i+1);
    }
    cout << "Normal = ";
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nReverse = ";
    for (int i = sizeArr-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }*/



    // Завдання 5

    /*const int sizeArr = 10;
    int arr[sizeArr] = { 3, 5, -2, 10, 24, -12, 8, 6, -4, 9};
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] < 0)
            arr[i] = arr[i] * -1;
    }
    cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr[i] << " ";
    }*/
}
