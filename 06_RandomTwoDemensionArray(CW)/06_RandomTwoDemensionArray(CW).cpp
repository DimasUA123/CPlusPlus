#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    // Завдання 1

    /*const int rows = 4;
    const int cols = 3;
    int array[rows][cols]{};
    int countNum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] != 0)
                countNum++;
        }
        cout << endl;
    }
    cout << "Count of Elem not equal 0 = " << countNum << endl;*/



    // Завдання 2

    /*const int rows = 3;
    const int cols = 3;
    int array[rows][cols]{};
    int countNum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] == 0)
                countNum++;
        }
        cout << endl;
    }
    cout << "Count of Elem equal 0 = " << countNum << endl;*/



    // Завдання 3

    /*const int rows = 7;
    const int cols = 3;
    int array[rows][cols]{};
    int countNum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (abs(array[i][j]) < 12)
                countNum++;
        }
        cout << endl;
    }
    cout << "Count of Elem = " << countNum << endl;*/



    // Завдання 4

    /*const int rows = 4;
    const int cols = 5;
    int array[rows][cols]{};
    int countNum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] > 0)
                countNum++;
        }
        cout << endl;
    }
    cout << "Count of Positive Elem = " << countNum << endl;*/



    // Завдання 5

    /*const int rows = 5;
    const int cols = 4;
    int array[rows][cols]{};
    int multiplNum = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] > 0)
                multiplNum*=array[i][j];
        }
        cout << endl;
    }
    cout << "Multiplication of Positive Elem = " << multiplNum << endl;*/



    // Завдання 6

    /*const int rows = 5;
    const int cols = 4;
    int array[rows][cols]{};
    int multiplNum = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] < 0)
                multiplNum*=array[i][j];
        }
        cout << endl;
    }
    cout << "Multiplication of Negetive Elem = " << multiplNum << endl;*/



    // Завдання 7

    /*const int rows = 4;
    const int cols = 4;
    int array[rows][cols]{};
    int countNum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] % 6 == 1)
                countNum++;
        }
        cout << endl;
    }
    cout << "Count of Elem = " << countNum << endl;*/


    // Завдання 8

    /*const int rows = 5;
    const int cols = 6;
    int array[rows][cols]{};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
        }
        cout << endl;
    }

    int min = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] < min)
                min = array[i][j];
        }
    }
    cout << "Min = " << min << endl;*/


    // Завдання 9

    /*const int rows = 5;
    const int cols = 6;
    int array[rows][cols]{};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
        }
        cout << endl;
    }

    int max = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] > max)
                max = array[i][j];
        }
    }
    cout << "Max = " << max << endl;*/


    // Завдання 10
    
    /*const int rows = 5;
    const int cols = 6;
    int array[rows][cols]{};
    int sumNegElm = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 40 - 20;
            cout << setw(5) << array[i][j] << " ";
            if (array[i][j] < 0)
                sumNegElm += array[i][j];
        }
        cout << endl;
    }
    cout << "Summa of Negetive Elements = " << sumNegElm << endl;*/
}
