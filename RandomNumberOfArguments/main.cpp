#include <iostream>
using namespace std;

//first parameters - is number of arguments/Первый параметр- номер аргумента
//int sum(int n,int value, ...)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += *(&value + i);
//	}
//	return sum;
//}

int sum(int value ...)
{
	int sum = 0;
	int* p_value = &value;
	while (*p_value != 0)
	{
		sum += *p_value++;
	}
		return sum;
}

void main()
{
	cout << sum(3, 5, 8, 13, 21, 34, 0) << endl;
	
}