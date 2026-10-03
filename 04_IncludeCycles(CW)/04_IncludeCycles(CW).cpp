#include <iostream>
using namespace std;

int main()
{
    int i, j;
    // 1
    cout << " -- 1" << endl;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 10; j++) 
        {
            if (i < j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    // 2
    cout << " -- 2" << endl;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 10; j++)
        {
            if (i > j)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    // 3
    cout << " -- 3" << endl;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 10; j++)
        {
            if (i <= j and i + j <= 11-1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    // 4
    cout << " -- 4" << endl;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (i >= j and i + j >= 11 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // 5
    cout << " -- 5" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if ((i <= j and i + j <= 11 - 1) or (i >= j and i + j >= 11 - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // 6
    cout << " -- 6" << endl;
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if ((i >= j and i + j <= 11 - 1) or (i <= j and i + j >= 11 - 1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;



    // 7
    cout << " -- 7" << endl;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (i >= j and i + j <= 11 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    // 8
    cout << " -- 8" << endl;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (i <= j and i + j > 10 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // 9
    cout << " -- 9" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j <= 10 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // 10
    cout << " -- 10" << endl;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (i + j >= 11 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}