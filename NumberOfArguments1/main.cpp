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

//int sum(int value ...)
//{
//	int sum = 0;
//	    while(value <= 34)
//		{
//			sum += *(&value+1);
//		}
//		return sum;
//}

void main()
{
	cout << (3, 5, 8, 13, 21, 34) << endl;
	cout << "d";
}