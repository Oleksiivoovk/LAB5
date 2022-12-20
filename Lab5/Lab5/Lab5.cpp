#include <iostream>
using namespace std;


int main()
{
	
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};

	cout << "elements" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	int* pa1, * pa2;
	
	
	int x, y;

	cout << "number of elements 1: ";
	cin >> x;

	cout << "number of elements 2: ";
	cin >> y;

	pa1 = &a[x];
	pa2 = &a[y];
	
	cout << "-------------------------------------------" << endl;
	cout << *pa1 << endl;
	cout << "adress 1:";
	cout << pa1  << endl;
	
	cout << "-------------------------------------------" << endl;

	cout << *pa2 << endl;
	cout << "adress 2:";
	cout << pa2 << endl;
	
	cout << "-------------------------------------------" << endl;
	
	int q;
	q = *pa1;
	*pa1 = *pa2;
	*pa2 = q;
	
	
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
    
