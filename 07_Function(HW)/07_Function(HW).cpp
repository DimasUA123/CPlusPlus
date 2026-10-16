#include <iostream>
#include <cmath>
using namespace std;

// Завдання 1

/*void ShowRect(int n, int k, char symb)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << symb << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, k;
    char symb;
    cout << "Enter N(height) ";
    cin >> n;
    cout << "Enter K(width) ";
    cin >> k;
    cout << "Enter symb ";
    cin >> symb;
    ShowRect(n, k, symb);
}*/



// Завдання 2

/*int Fact(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= i;
    }
    return num;
}

int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;
    
    cout << "Factorial = " << Fact(num);
}*/



// Завдання 3

/*bool SimpleNum(int num)
{
    if (num <= 1) return false;
    int index = 0;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
            index += 1;
    }
    return index < 2 ? true : false;
}

int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;
    cout << SimpleNum(num);
}*/



// Завдання 4

/*void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void MinFunc(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size;i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "\nMin num = " << min;
}
void MaxFunc(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size;i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "\nMax num = " << max;
}



int main()
{
    srand(time(0));

    const int sizeArr = 10;
    int arr[sizeArr];

    InitArray(arr, sizeArr);
    ShowArray(arr, sizeArr);
    MinFunc(arr, sizeArr);
    MaxFunc(arr, sizeArr);
}*/


// Завдання 5

/*int CubeNum(int num)
{
    int res = pow(num, 3);
    return res;
}

int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;
    cout << "Cube of number = " << CubeNum(num);
}*/



// Завдання 6

/*bool Func(int num)
{
    return num > 0 ? true : false;
}

int main()
{
    int num;
    cout << "Enter number ";
    cin >> num;
    cout << Func(num);
}*/


//                       ---Додаткові задачі---
// Завдання 7(недороблена) 

/*#include <string>
void ShowDate(int d1, int m1, int y1, int d2, int m2, int y2)
{
    string res = to_string(d2 - d1) + "." + to_string(m2 - m1) + "." + to_string(y2 - y1);
    cout << "Res = " << res;
}


void checkDate(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if ((0 > d1 or d1 > 31) or (0 > d2 or d2 > 31))
        cout << "\nEnter correct day";
    if ((0 > m1 or m1 > 12) or (0 > m2 or m2 > 12))
        cout << "\nEnter correct month";
    if ((0 > y1 or y1 > 2026) or (0 > y2 and y2 > 2026))
        cout << "\nEnter correct year";
}

int main()
{
    int d1, m1, y1, d2, m2, y2;
    cout << "Enter first date";
    cout << "\nEnter day ";
    cin >> d1;
    cout << "Enter month ";
    cin >> m1;
    cout << "Enter year ";
    cin >> y1;

    cout << "\nEnter second date";
    cout << "\nEnter day ";
    cin >> d2;
    cout << "Enter month ";
    cin >> m2;
    cout << "Enter year ";
    cin >> y2;

    checkDate(d1, m1, y1, d2, m2, y2);
    ShowDate(d1, m1, y1, d2, m2, y2);
}*/


// Завдання 8

/*void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void AverageFunc(int arr[], int size)
{
    double summa = 0;
    for (int i = 0; i < size;i++)
    {
        summa += arr[i];
    }
    double res = summa / size;
    cout << "\nAverage = " << res;
}

int main()
{
    srand(time(0));

    const int sizeArr = 10;
    int arr[sizeArr];

    InitArray(arr, sizeArr);
    ShowArray(arr, sizeArr);
    AverageFunc(arr, sizeArr);
}*/



// Завдання 9

/*void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 50;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void CounterFunc(int arr[], int size)
{
    int PosCount = 0, NegCount = 0, ZeroCount = 0;
    for (int i = 0; i < size;i++)
    {
        if (arr[i] > 0)
            PosCount++;
        if (arr[i] < 0)
            NegCount++;
        if (arr[i] == 0)
            ZeroCount++;
    }
    cout << "\nPositive Count = " << PosCount << "\nNegetive Count = " << NegCount << "\nZero Count = " << ZeroCount;
}

int main()
{
    srand(time(0));

    const int sizeArr = 10;
    int arr[sizeArr];

    InitArray(arr, sizeArr);
    ShowArray(arr, sizeArr);
    CounterFunc(arr, sizeArr);
}*/