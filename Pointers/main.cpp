#include<iostream>
using namespace std;
//#define POINTERS_BASICS
#define DECLARATION_OF_POINTERS
void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int *pa = &a;`
	//pa - pointer to a
	//& - оператор взятия адреса
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
	//*-оператор разыменования(Derefence operator)
	//*
	int *pb;
	int b = 3;
	pb = &b;
	b;//(int)
	pb;//(int*)
	cout << pb << endl;
	cout << *pb << endl;

	// int - int 
	// int* - указатель на int.
	// double - double
	//double* - указатель на double.
#endif

#ifdef DECLARATION_OF_POINTERS
	int a, b, c;//обьявление трёх переменных одной строкой(выражением).
	int *pa, *pb, *pc;// Объявление трёх указателей одним выражением.
	int* pd, pe, pf;//Объявится один указатель на int ( pd ), и две переменные типа int ( pe,pf).
#endif 
	//Имя массива является указателем на массив,поскольку содержит адрес нулевого элемента массива,а следовательно и всего массива .
	//Это легко проверить следующим образом:
	const int n = 5;
	short Arr[n] = { 3,5,8,13,21 };
	cout << *Arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *Arr + i << "\t";
	}
	cout << endl;
	//Арифметика указателей
	//Над адресами можно выполнять следующие арифметические операции: 
	//+,-,++,--;
	//В арифметике указателей очень важен тип даных, на который указывает указатель.
	//От него зависит на сколько байт изменится адрес,если к нему прибавить единицу,либо другое любое число
	//это зависит от размера типа данных.

	/*
	type function(parameter1,parameter2, ...)
	{

	}
	1.
	2.NULL,INT_MAX, int(),...

	*/
}