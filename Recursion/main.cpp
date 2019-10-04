#include<iostream>
using namespace std;
//#define FACTORIAL
#//define POWER

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
void fibonachi(int a)
{
	static int d;
	if (d > a)return;
	static int b = 0;
	static int c = 1;
	d = b + c;
	if (d == 1)cout << 0 << "\t" << 1 << "\t";
	cout << d << "\t";
	b = c;
	c = d;
	fibonachi(a);

}
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
}