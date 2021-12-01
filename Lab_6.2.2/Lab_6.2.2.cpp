#include<iostream>
#include<iomanip>
#include <Windows.h>
#include<time.h>
using namespace std;

void Create(int* a, const int n,int i)
{
	a[i] = 200. * rand() / RAND_MAX - 100;
	if (i<n-1)
	{
		Create(a, n, i + 1);
	}
}

void Show(int* a, const int n, int i)
{
	cout << setw(4) << a[i];
	
	if (i < n - 1)
	{
		Show(a, n, i + 1);
	}
}

int SearchMin(int* a, int n, int i,int MinIndex,int min)
{
	if (!(a[i] % 2 == 0) && min >= a[i])
	{
		min = a[i];
		MinIndex = i;
	}
	if (i < n - 1)
	{
		SearchMin(a, n, i + 1,MinIndex,min);
	}
	else
	{
		return MinIndex;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));

	const int n = 25;
	int a[n];

	Create(a, n, 0);
	Show(a, n, 0);
	int min = SearchMin(a, n, 0,-1,101);

	if (min == -1)
	{
		cout << endl;
		cout << "Немає підходящого числа(" << endl;
	}
	else
	{
		cout << endl;
		cout << "Індекс шуканого числа = " << min << endl;
	}

	return 0;
}