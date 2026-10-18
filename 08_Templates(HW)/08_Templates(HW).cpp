#include <iostream>
#include <iomanip>
using namespace std;

// Завдання 3.1

/*template <typename T>
void ShowArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

template <typename T>
T MaxOfArr(T arr[], int size) {
    T max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    srand(time(0));

    const int sizeArr = 10;
    int arr1[sizeArr] = { 1, 24, 6, 52, 0, 83, 4, 6, 66, 2 };
    float arr2[sizeArr] = { 1.2f, 4.4f, 9.5f, 9.1f, 99.9f, 5.5f, 6.6f, 0.8f, 6.2f, 24.2f };
    double arr3[sizeArr] = { 1.2, 3.89, 9.5, 9.999, 24.2, 4.4, 6.6, 8.9, 7.3, 0.1 };

    ShowArray(arr1, sizeArr);
    cout << endl;
    ShowArray(arr2, sizeArr);
    cout << endl;
    ShowArray(arr3, sizeArr);

    cout << "\nMax = " << MaxOfArr(arr1, sizeArr);
    cout << "\nMax = " << MaxOfArr(arr2, sizeArr);
    cout << "\nMax = " << MaxOfArr(arr3, sizeArr);
}*/



// Завдання 3.2

/*template <typename T>
void ShowArray(T arr[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(5) << arr[i][j] << " ";
        cout << endl;
    }
}

template <typename T>
T MaxOfArr(T arr[][4], int rows, int cols) {
    T max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    return max;
}

int main()
{
    srand(time(0));

    const int rows = 3;
    const int cols = 4;
    int arr1[rows][cols] = { {1, 24, 6 ,2}, {52, 0, 83, 9}, {4, 6, 66, 0} };
    float arr2[rows][cols] = { {1.2f, 4.4f, 9.5f, 9.1f}, {99.9f, 5.5f, 6.6f, 0.8f}, {6.2f, 24.2f, 1.2f} };
    double arr3[rows][cols] = { {1.2, 3.89, 9.5, 9.99}, {24.2, 4.4, 6.6, 8.9}, {7.3, 0.1, 2.34} };

    ShowArray(arr1, rows, cols);
    cout << endl;
    ShowArray(arr2, rows, cols);
    cout << endl;
    ShowArray(arr3, rows, cols);

    cout << "\nMax = " << MaxOfArr(arr1, rows, cols);
    cout << "\nMax = " << MaxOfArr(arr2, rows, cols);
    cout << "\nMax = " << MaxOfArr(arr3, rows, cols);
}*/


// Завдання 4      --- Додаткове завдання ---

/*void initMatrix(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand()%100;
    }
}
void initMatrix(double arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr[i][j] = (rand() % 10000) / 100.0;
    }
}
void initMatrix(char arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 26 + 65;
    }
}


void showMatrix(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(3) << arr[i][j] << " ";
        cout << endl;
    }
}
void showMatrix(double arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(6) << arr[i][j] << " ";
        cout << endl;
    }
}
void showMatrix(char arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(3) << arr[i][j] << " ";
        cout << endl;
    }
}


int MaxOfArr(int arr[][3], int rows) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] > max)
            max = arr[i][i];
    }
    return max;
}
double MaxOfArr(double arr[][3], int rows) {
    double max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] > max)
            max = arr[i][i];
    }
    return max;
}
char MaxOfArr(char arr[][3], int rows) {
    char max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] > max)
            max = arr[i][i];
    }
    return max;
}


int MinOfArr(int arr[][3], int rows) {
    int min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] < min)
            min = arr[i][i];
    }
    return min;
}
double MinOfArr(double arr[][3], int rows) {
    double min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] < min)
            min = arr[i][i];
    }
    return min;
}

char MinOfArr(char arr[][3], int rows) {
    char min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] < min)
            min = arr[i][i];
    }
    return min;
}



int main() {
    srand(time(0));
    const int rows = 3, cols = 3;

    int intArr[rows][cols];
    double doubleArr[rows][cols];
    char charArr[rows][cols];

    initMatrix(intArr, rows, cols);
    initMatrix(doubleArr, rows, cols);
    initMatrix(charArr, rows, cols);

    cout << "Int matrix" << endl;
    showMatrix(intArr, rows, cols);
    cout << "\nDouble matrix" << endl;
    showMatrix(doubleArr, rows, cols);
    cout << "\nChar matrix" << endl;
    showMatrix(charArr, rows, cols);
    cout << endl;

    cout << "Max of main diagonal" << endl;
    cout << "\nMax of int array = " << MaxOfArr(intArr, rows) << endl;
    cout << "Max of double array = " << MaxOfArr(doubleArr, rows) << endl;
    cout << "Max of char array = " << MaxOfArr(charArr, rows) << endl;

    cout << "\nMin of main diagonal" << endl;
    cout << "Min of int array = " << MinOfArr(intArr, rows) << endl;
    cout << "Min of double array = "<< MinOfArr(doubleArr, rows) << endl;
    cout << "Min of char array = " << MinOfArr(charArr, rows) << endl;
}*/