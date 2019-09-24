#include<iostream>
using namespace std;
#define DELIMITER "\n------------------------------------------------------------------------\n"

const int ROWS = 4;// ���������� ����� ���������� �������
const int COLS = 5;// ���������� ��������� ������

void FillRand(int Arr[], const int n);
void FillRand(double Arr[], const int n);
void FillRand(float Arr[], const int n);
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[], const int n);
void Print(double Arr[], const int n);
void Print(float Arr[], const int n);
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[], const int n);
void Sort(double Arr[], const int n);
void Sort(float Arr[], const int n);
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float Arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int Arr[], const int n);
int Sum(double Arr[], const int n);
int Sum(float Arr[], const int n);
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(float Arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int Arr[], const int n);
double Avg(double Arr[], const int n);
double Avg(float Arr[], const int n);
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float Arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int Arr[], const int n);
int minValueIn(double Arr[], const int n);
int minValueIn(float Arr[], const int n);
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int Arr[], const int n);
int maxValueIn(double Arr[], const int n);
int maxValueIn(float Arr[], const int n);
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);

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

void FillRand(int Arr[], const int n)
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
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
			Arr[i][j] = rand() % 100;
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


void Print(int Arr[], const int n)
{
	// ����� ������� �� �����:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(double Arr[], const int n)
{
	// ����� ������� �� �����:
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << Arr[i] << "\t";
	cout << endl;
	cout << endl;
}
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Sort(int Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(double Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(float Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}
	}
}
void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
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
}
void Sort(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
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
}

int Sum(int Arr[], const int n)//����� �������.
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(double Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(float Arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	return sum;
}
int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int Sum(float Arr[ROWS][COLS], const int ROWS, const int COLS)
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

double Avg(int Arr[], const int n) //������� �����.
{
	/* double total = Sum(Arr, n);
	 double avg = total / n;
	 return avg;*/
	return (double)Sum(Arr, n) / n;
}
double Avg(double Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(float Arr[], const int n)
{
	return (double)Sum(Arr, n) / n;
}
double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int Arr[], const int n) //����������� ��������
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
int minValueIn(double Arr[], const int n)
{
	double min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
	}
	return min;
}
int minValueIn(float Arr[], const int n)
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
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS)
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

int maxValueIn(int Arr[], const int n)//������������ �������� 
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
int maxValueIn(double Arr[], const int n)
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
int maxValueIn(float Arr[], const int n)
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
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
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
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS)
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