#include<iostream>
using namespace std;
//#define POINTERS_BASICS
#define DECLARATION_OF_POINTERS
void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int *pa = &a;
	//pa - pointer to a
	//& - �������� ������ ������
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
	//*-�������� �������������(Derefence operator)
	//*
	int *pb;
	int b = 3;
	pb = &b;
	b;//(int)
	pb;//(int*)
	cout << pb << endl;
	cout << *pb << endl;

	// int - int 
	// int* - ��������� �� int.
	// double - double
	//double* - ��������� �� double.
#endif

#ifdef DECLARATION_OF_POINTERS
	int a, b, c;//���������� ��� ���������� ����� �������(����������).
	int *pa, *pb, *pc;// ���������� ��� ���������� ����� ����������.
	int* pd, pe, pf;//��������� ���� ��������� �� int ( pd ), � ��� ���������� ���� int ( pe,pf).
#endif 
	//��� ������� �������� ���������� �� ������,��������� �������� ����� �������� �������� �������,� ������������� � ����� ������� .
	//��� ����� �������� ��������� �������:
	const int n = 5;
	short Arr[n] = { 3,5,8,13,21 };
	cout << *Arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *Arr + i << "\t";
	}
	cout << endl;
	//���������� ����������
	//��� �������� ����� ��������� ��������� �������������� ��������: 
	//+,-,++,--;
	//� ���������� ���������� ����� ����� ��� �����, �� ������� ��������� ���������.
	//�� ���� ������ �� ������� ���� ��������� �����,���� � ���� ��������� �������,���� ������ ����� �����
	//��� ������� �� ������� ���� ������.
}