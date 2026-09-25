#include <iostream>
using namespace std;

int main()
{
    // Завдання 7

    /*float a, b;
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;

    if (a != b) {
        float temp;
        temp = a;
        a = b;
        b = temp;
        cout << "a = " << a << "; b = " << b;
    }
    else
        cout << "Numbers are equal";*/



    // Завдання 8

    /*int a, firstN, secondN, thirdN, sum;
    cout << "Enter number ";
    cin >> a;
    if (a >= 100 and a <= 999) {   // якщо тут перевірка(в умові завдання вказано три цифрове число),
        firstN = a / 100;                   // і так зрозуміло, що число буде трьох значеним(кількість цифр)
        secondN = (a / 10) % 10;
        thirdN = a % 10;
        sum = firstN + secondN + thirdN;
        cout << "Sum = " << sum << "; " << firstN << "__" << thirdN;
    }
    else
        cout << "Error input";*/



    // Завдання 9

    /*int hours, minutes, seconds;
    cout << "Enter hours ";
    cin >> hours;
    cout << "Enter minutes ";
    cin >> minutes;
    cout << "Enter seconds ";
    cin >> seconds;

    if (hours < 0 or hours > 24)
        cout << "Hours are incorrect";
    else if (minutes < 0 or minutes > 60)
        cout << "Minutes are incorrect";
    else if (seconds < 0 or seconds > 60)
        cout << "Seconds are incorrect";
    else
        cout << "Time is correct\n" << hours << "." << minutes << "." << seconds;*/



    // Завдання 10

    /*int time;
    cout << "Enter time ";
    cin >> time;

    if (time >= 0 and time < 6)
        cout << "Good night!";
    else if (time >= 6 and time < 12)
        cout << "Good morning!";
    else if (time >= 12 and time < 18)
        cout << "Good afternoon!";
    else if (time >= 18 and time < 24)
        cout << "Good evening!";
    else
        cout << "Error time";*/



    // Завдання 11

    /*float a, b, c, min;
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
    cout << "Enter third number ";
    cin >> c;

    min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    cout << "Min = " << min;*/
}