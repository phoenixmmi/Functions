#include"Functions.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int Arr[n];
	cout << endl;
	FillRand(Arr, n);
	Print(Arr, n);
	cout << "����� ��������� �������: " << Sum(Arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Arr, n) << endl;

	double Brr[n];
	FillRand(Brr, n);
	Print(Brr, n);
	Sort(Brr, n);
	cout << "����� ��������� �������: " << Sum(Brr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Brr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Brr, n) << endl;

	float Drr[n];
	FillRand(Drr, n);
	Print(Drr, n);
	cout << "����� ��������� �������: " << Sum(Drr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(Drr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Drr, n) << endl;


	int Crr[ROWS][COLS];
	FillRand(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	Sort(Crr, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Crr, ROWS, COLS);
	cout << "����� �������: " << Sum(Crr, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Crr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Crr, ROWS, COLS) << endl;

	double Err[ROWS][COLS];
	FillRand(Err, ROWS, COLS);
	Print(Err, ROWS, COLS);
	Sort(Err, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Err, ROWS, COLS);
	cout << "����� �������: " << Sum(Err, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Err, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Err, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Err, ROWS, COLS) << endl;

	float Frr[ROWS][COLS];
	FillRand(Frr, ROWS, COLS);
	Print(Frr, ROWS, COLS);
	Sort(Frr, ROWS, COLS);
	cout << DELIMITER << endl;
	Print(Frr, ROWS, COLS);
	cout << "����� �������: " << Sum(Frr, ROWS, COLS) << endl;;
	cout << "������� �������������� ��������� �������: " << Avg(Frr, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(Frr, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(Frr, ROWS, COLS) << endl;


}

