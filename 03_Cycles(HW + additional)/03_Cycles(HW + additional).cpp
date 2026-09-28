#include <iostream>
using namespace std;

int main()
{
    // Завдання 1

	/*int i = 14;
	while (i<=123)
	{
		cout << i << " ";
		i++;
	}*/
   


	// Завдання 2

	/*int i = 1;
	while (i < 100)
	{
		if (i % 2 == 1)
			cout << i << " ";
		i++;
	}*/



	// Завдання 3

	/*int i = 0, n, x, countNegNum = 0;
	cout << "Enter number of numbers ";
	cin >> n;
	if (n > 0)
	{
		while (i < n)
		{
			cout << "Enter " << i + 1 << " number ";
			cin >> x;
			if (x < 0)
				countNegNum++;
			i++;
		}
		cout << "Count of Negetive Numbers = " << countNegNum;
	}
	else
		cout << "Enter positive number!";*/



	// Завдання 4

	/*int i = 0, x, sum = 0, product = 1;  // product - добуток
	float average = 0;
	while (i < 8)
	{
		cout << "Enter " << i + 1 << " number ";
		cin >> x;
		sum += x;
		product *= x;

		i++;
	}
	average = (float)sum / 8;
	cout << "\nProduct = " << product << "; Sum = " << sum << "; Average = " << average;*/



	// Завдання 5

	/*int i = 100;
	do
	{
		if (i % 2 == 1)
			cout << i << " ";
		i--;
	} while (i > 0);*/



	// Завдання 6

	/*int i = 0, x, product = 1;
	do
	{
		cout << "Enter " << i + 1 << " number ";
		cin >> x;
		product *= x;

		i++;
	} while (i < 5);

	cout << "\nProduct = " << product;*/



	// Завдання 7                     (Додаткові завдання)

	// 7.1 (while)
	/*int i = 0, sum = 0;
	while (i < 50) 
	{
		if (i % 4 == 0) {
			cout << i << " ";
			sum += i;
		}	
		i++;
	}
	cout << "\nSum = " << sum;*/

	// 7.2 
	/*int i = 0, sum = 0;
	for (i; i < 50; i++) 
	{
		if (i % 4 == 0) 
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << "\nSum = " << sum;*/



	// Завдання 8

	/*int n = 0, i = 0;
	cout << "Enter number(end) ";
	cin >> n;
	
	for (i; i <= n; i++)
		cout << i << " ";*/



	// Завдання 9
	
	/*int a, b, temp, i;
	cout << "Enter start number ";
	cin >> a;
	cout << "Enter end number ";
	cin >> b;

	if (a > b) 
	{
		temp = a;
		a = b;
		b = temp;
	}

	cout << "\nAll numbers = ";
	for (i = a; i <= b; i++)
		cout << i << " ";


	cout << "\n\nEven numbers = ";
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}


	cout << "\n\nOdd numbers = ";
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 1)
			cout << i << " ";
	}

	cout << "\n\nNumbers multiples of seven = ";
	for (i = a; i <= b; i++)
	{
		if (i % 7 == 0)
			cout << i << " ";
	}
	cout << endl;*/



	// Завдання 10

	/*int a, b, temp, i, sum = 0;
	cout << "Enter start number ";
	cin >> a;
	cout << "Enter end number ";
	cin >> b;
	
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	for (i = a; i <= b; i++)
	{
		cout << i << " ";
		sum += i;
	}
	cout << "\nSum of range = " << sum;*/
	


	// Завдання 11

	/*int sum = 0, x;
	
	for (int i = 0;;i++) {
		cout << "Enter " << i+1 << " number ";
		cin >> x;
		if (x == 0) 
			break;
		sum += x;
	}
	cout << "\nSum = " << sum;*/
}