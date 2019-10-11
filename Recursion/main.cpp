#include<iostream>
using namespace std;
//#define FACTORIAL
//#define POWER
#define fibonachi_1

int factorial(int n)
{
	/*
	static int a = 1;
	a *= n;
	--n;

	if (n == 0)
	{
		return ;
	}
	factorial(n);
	*/
	if (n == 0)return 1;
	return n * factorial(n - 1);
	/*int f = n * factorial(n - 1);
	return f;*/
}
double power(double a, int n)
{
	/*
	if (n == 0)return 1;
	if (n > 0)return n = a * power(a, n - 1);
	return 1 / (a*power(a, n + 1));*/
	return (n == 0) ? 1 : (n > 0) ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
}

void fibonachi(int n, int a = 0, int b = 1);

void main()
{
	setlocale(LC_ALL, "");
#ifdef FACTORIAL
	int n;
	cout << "¬ведите число, дл€ вычислени€ факториала: "; cin >> n;
	cout << factorial(n);
#endif
#ifdef POWER
	int a;
	int n;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = " << power(a, n) << endl;
#endif
#ifdef fibonachi_1
	int n;
	cout << "¬ведите числo, до кторого нужно вывести р€д ‘ибоначчи: "; 
	cin >> n;
	//fibonachi(n, 0, 1);
	fibonachi(n);

#endif
}

void fibonachi(int n, int a, int b)// default parameters
//function doesn't take N arguments
{
	if (a > n)
	{
		return;
	}
	cout << a << "\t";
	fibonachi(n, b, a + b);
}