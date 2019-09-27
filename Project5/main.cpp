#include<iostream>
using namespace std;
#define DELIMITER "\n------------------------------------------------------------------------\n"

const int ROWS = 4;// ���������� ����� ���������� �������
const int COLS = 5;// ���������� ��������� ������

template<typename T> void FillRand(T Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(float Arr[], const int n);
template<typename T>void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T Arr[], const int n);
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T Arr[], const int n);
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T Arr[], const int n);
template<typename T>T Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T Arr[], const int n);
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(T Arr[], const int n);
template<typename T> T minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T maxValueIn(T Arr[], const int n);
template<typename T> T maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS);

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
	Print(Brr, n);
	cout << DELIMITER << endl;
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
template<typename T>void FillRand(T Arr[], const int n)
{
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)Arr[i] = rand() % 100;
}
void FillRand(double Arr[], const int n)
{
	//���������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}
void FillRand(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		Arr[i] = rand() % 10000;
		Arr[i] /= 100;
	}
}

template<typename T>void FillRand(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 10000;
			Arr[i][j] /= 100;
		}
	}
}
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(T Arr[], const int n)
{
	// ����� ������� �� �����:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
template<typename T>void Print(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";

		}
		cout << endl;
	}
}

template<typename T>void Sort(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;

				/*if (k == i)l = j + 1;
					else l = 0;*/
					// (k == i) ? l = j + l : l = 0;
					// l = (k == i) ? j + 1 : 0;

				for (int l = (k == i) ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "������ ������������ �� " << iterations << " ��������\n";
}


template<typename T>T Sum(T Arr[], const int n)//����� �������.
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
template<typename T>T Sum(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	return sum;
}


template<typename T>double Avg(T Arr[], const int n) //������� �����.
{
	/* double total = Sum(Arr, n);
	 double avg = total / n;
	 return avg;*/
	return (double)Sum(Arr, n) / n;
}
template<typename T>double Avg(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>T minValueIn(T Arr[], const int n) //����������� ��������
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
template<typename T>T minValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)
			{
				min = Arr[i][j];
			}
		}
	}
	return min;
}

template<typename T>T maxValueIn(T Arr[], const int n)//������������ �������� 
{
	int max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	return max;
}
template<typename T>T maxValueIn(T Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)
			{
				max = Arr[i][j];
			}
		}
	}
	return max;
}
