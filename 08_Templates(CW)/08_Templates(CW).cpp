#include <iostream>
using namespace std;

// Завдання 1.1

/*int maxValue(int a, int b) {
    return (a > b) ? a : b;
}
float maxValue(float a, float b) {
    return (a > b) ? a : b;
}
double maxValue(double a, double b) {
    return (a > b) ? a : b;
}

int main()
{
    cout << "Max of int num = " << maxValue(10, 20);
    cout << "\nMax of float num = " << maxValue(1.2f, 0.9f);
    cout << "\nMax of double num = " << maxValue(5.34, 33.3);
}*/



// Завдання 1.2

/*int maxValue(int a, int b, int c) {
    int maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    return maxVal;
}
float maxValue(float a, float b, float c) {
    float maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    return maxVal;
}

double maxValue(double a, double b, double c) {
    double maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    return maxVal;
}

int main()
{
    cout << "Max of int num = " << maxValue(10, 20, 30);
    cout << "\nMax of float num = " << maxValue(1.2f, 0.9f, 4.5f);
    cout << "\nMax of double num = " << maxValue(5.34, 33.3, 1.1);
}*/



// Завдання 1.3

/*int minValue(int a, int b) {
    return (a < b) ? a : b;
}
float minValue(float a, float b) {
    return (a < b) ? a : b;
}
double minValue(double a, double b) {
    return (a < b) ? a : b;
}

int main()
{
    cout << "Min of int num = " << minValue(10, 20);
    cout << "\nMin of float num = " << minValue(1.2f, 0.9f);
    cout << "\nMin of double num = " << minValue(5.34, 33.3);
}*/



// Завдання 1.4

/*int minValue(int a, int b, int c) {
    int minVal = a;
    if (b < minVal) 
        minVal = b;
    if (c < minVal) 
        minVal = c;
    return minVal;
}
float minValue(float a, float b, float c) {
    float minVal = a;
    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;
    return minVal;
}
double minValue(double a, double b, double c) {
    double minVal = a;
    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;
    return minVal;
}

int main()
{
    cout << "Min of int num = " << minValue(10, 20, 30);
    cout << "\nMin of float num = " << minValue(1.2f, 0.9f, 4.5f);
    cout << "\nMin of double num = " << minValue(5.34, 33.3, 1.1);
}*/



// Завдання 2

/*template <typename T>
void ShowArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

template <typename T>
double AverageOfArr(T arr[], int size) {
    T summa = 0.0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];
    }
    T res = summa / size;
    return res;
}

int main()
{
    srand(time(0));

    const int sizeArr = 10;
    int arr1[sizeArr] = {1, 3, 6, 9, 0, 23, 4, 6, 12, 24};
    float arr2[sizeArr] = {1.2f, 4.4f, 9.5f, 9.1f, 99.9f, 5.5f, 6.6f, 0.8f, 6.2f, 24.2f};
    double arr3[sizeArr] = {1.2, 3.89, 9.5, 9.999, 24.2, 4.4, 6.6, 8.9, 7.3, 0.1};

    ShowArray(arr1, sizeArr);
    cout << endl;
    ShowArray(arr2, sizeArr);
    cout << endl;
    ShowArray(arr3, sizeArr);
    cout << "\nAverage of arr1 = " << AverageOfArr(arr1, sizeArr);
    cout << "\nAverage of arr2 = " << AverageOfArr(arr2, sizeArr);
    cout << "\nAverage of arr3 = " << AverageOfArr(arr3, sizeArr);
} */