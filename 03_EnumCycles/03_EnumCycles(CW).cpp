#include <iostream>
using namespace std;

int main()
{
	// Завдання 1

    /*int i = 1;
	while (i <= 100) {
		cout << i << " ";
	i++;
	}*/



	// Завдання 2

	/*int i = 2, count = 0;
	while (i <= 200) {
		if (i%2==0) {
			cout << i << " ";
			count++;
		}
		i++;
	}
	cout << "\n\nCount = " << count;*/



	// Завдання 3

	/*int i = 0, n, x, sum = 0;
	cout << "Enter number of numbers ";
	cin >> n;
	while (i<n)
	{
		cout << "Enter " << i + 1 << " number ";
		cin >> x;
		if (x%2==0)
		{
			sum += x;
		}
		i++;
	}
	cout << "\nSum = " << sum;*/



	// Завдання 4

	/*int i = 0, x, sum = 0;
	float average = 0;
	while (i < 10)
	{
		cout << "Enter " << i + 1 << " number ";
		cin >> x;
		sum += x;

		i++;
	}
	average = (float) sum / 10;
	cout << "\nSum = " << sum << "; Average = " << average;*/



	// Завдання 5

	/*int i = 100;

	do
	{
		cout << i << " ";
		i--;
	} while (i>0);*/



	// Завдання 6

	/*int i = 0, x, sum = 0;

	do
	{
		cout << "Enter " << i + 1 << " number ";
		cin >> x;
		sum += x;
		i++;
	} while (i < 7);

	cout << "Sum = " << sum;*/



	// Завдання 7

	/*int clockBeats = 0;
	for (int i = 0; i <= 12; i++)
	{
		clockBeats += i;
	}
	cout << "Clock beats in 12 hours = " << clockBeats;*/



	// Завдання 8
	
	/*int sum = 0, x;
	
	for (int i = 0;;i++) {
		cout << "Enter " << i+1 << " number ";
		cin >> x;
		if (x == 0) 
			break;
		sum += x;
	}
	cout << "Sum = " << sum;*/
}