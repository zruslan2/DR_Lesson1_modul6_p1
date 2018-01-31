#include <locale.h>
#include <math.h>
#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

void head(char mas[]);
void yellow();
void white();
void red();
void ShiftRight3(float A, float B, float C);
void ShiftLeft3(float A, float B, float C);
bool IsLeapYear(int Y);
int MonthDays(int M, int Y);
void PrevDate(int *D, int *M, int *Y);

using namespace std;
unsigned short int nz;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i, j;
	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода "; cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг: 
			значение A переходит в B, значение B — в C, значение C — в A(A, B, C — вещественные 
			параметры, являющиеся одновременно входными и выходными).С помощью этой процедуры 
			выполнить правый циклический сдвиг для двух данных наборов из трех чисел:
			(A1, B1, C1) и(A2, B2, C2).*/
			head("1. Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг: значение A переходит в B, значение B — в C, C — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и выходными). С помощью этой процедуры выполнить сдвиг для двух наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).");
			float A1 = 25.2, B1 = 44.5, C1 = 56.8, A2 = 10.44, B2 = 30.56, C2 = 70.22;
			ShiftRight3(A1, B1, C1);
			ShiftRight3(A2, B2, C2);
		}
		else if (nz == 2)
		{
			/*2.	Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг: 
			значение A переходит в C, значение C — в B, значение B — в A(A, B, C — вещественные 
			параметры, являющиеся одновременно входными и выходными).С помощью этой процедуры 
			выполнить левый циклический сдвиг для двух данных наборов из трех чисел: 
			(A1, B1, C1) и(A2, B2, C2).*/
			head("2. Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг: значение A переходит в C, значение C — в B, B — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и выходными). С помощью этой процедуры выполнить сдвиг для двух наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).");
			float A1 = 25.2, B1 = 44.5, C1 = 56.8, A2 = 10.44, B2 = 30.56, C2 = 70.22;
			ShiftLeft3(A1, B1, C1);
			ShiftLeft3(A2, B2, C2);
		}
		else if (nz == 3)
		{
			/*3.	Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если 
				год Y(целое положительное число) является високосным, и False в противном случае.
				Вывести значение функции IsLeapYear для пяти данных значений параметра Y.
				Високосным считается год, делящийся на 4, за исключением тех годов, которые 
				делятся на 100 и не делятся на 400.*/
			head("3. Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если год является високосным, и False в противном случае. Вывести значение функции для пяти данных значений параметра Y. Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400.");
			int mas[5];
			for (i = 0; i < 5;i++)
			{
				mas[i] = 1000 + rand() % 1300;
				if (IsLeapYear(mas[i]))
					cout << mas[i] << " год высокосный\n";
				else
					cout << mas[i] << " год не высокосный\n";
			}			
		}
		else if (nz == 4)
		{
			/*4.	Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) 
				целого типа, которая возвращает количество дней для M - го месяца 
				года Y(1 ≤ M ≤ 12, Y > 0 — целые числа).Вывести значение функции MonthDays 
				для данного года Y и месяцев M1, M2, M3.*/
			head("4. Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа, которая возвращает количество дней для M-го месяца года Y (1 >= M <= 12, Y > 0 — целые числа). Вывести значение функции MonthDays для данного года Y и месяцев M1, M2, M3.");
			int Y = 2018, M1 = 2, M2 = 5, M3 = 6;
			cout << " В феврале " << Y << " года - " << MonthDays(M1, Y) << " дней\n";
			cout << " В майе " << Y << " года - " << MonthDays(M2, Y) << " дней\n";
			cout << " В июне " << Y << " года - " << MonthDays(M3, Y) << " дней\n";
		}
		else if (nz == 5)
		{
			/*5.	Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y), 
				которая по информации о правильной дате, включающей день D, номер месяца M и 
				год Y, определяет предыдущую дату(параметры целого типа D, M, Y являются 
				одновременно входными и выходными).Применить процедуру PrevDate к трем 
				исходным датам и вывести полученные значения предыдущих дат*/
			head("5. Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y), которая по информации о дате (день D, месяц M и год Y), определяет предыдущую дату (параметры D, M, Y являются одновременно входными и выходными). Применить процедуру PrevDate к трем датам и вывести полученные значения предыдущих дат");
			int Y=2008, M=3, D=1;
			yellow();
			cout << " Дата: " << D << "." << M << "." << Y << endl << endl;
			PrevDate(&D, &M, &Y);
			white();
			cout << " Предыдущая дата: " << D << "." << M << "." << Y << endl << endl;

			Y = 2018; M = 1; D = 1;
			yellow();
			cout << " Дата: " << D << "." << M << "." << Y << endl << endl;
			PrevDate(&D, &M, &Y);
			white();
			cout << " Предыдущая дата: " << D << "." << M << "." << Y << endl << endl;
			
			time_t t;
			tm *tk;
			time(&t);
			tk = localtime(&t);
			Y = 1900 + tk->tm_year;
			M = 1 + tk->tm_mon;
			D = tk->tm_mday;

			yellow();
			cout << " Дата: " << D << "." << M << "." << Y << endl << endl;
			PrevDate(&D, &M, &Y);
			white();
			cout << " Предыдущая дата: " << D << "." << M << "." << Y << endl << endl;
			
		}
	}
}


void head(char mas[])
{
	int len, third, s1_len, s2_len, s3_len, maks;
	len = strlen(mas);
	third = len / 3;
	s1_len = third;
	for (int i = s1_len; i < len; i++)
	{
		if (mas[s1_len] != ' ') s1_len++;
		else break;
	}
	s2_len = third;
	for (int i = s1_len + s2_len; i < len; i++)
	{
		if (mas[s1_len + s2_len] != ' ') s2_len++;
		else break;
	}
	s3_len = len - (s1_len + s2_len);
	vector<char>str1(s1_len);
	vector<char>str2(s2_len);
	vector<char>str3(s3_len);
	for (int i = 0; i < s1_len; i++)
	{
		str1[i] = mas[i];
	}
	for (int i = s1_len + 1; i < s1_len + s2_len; i++)
	{
		str2[i - (s1_len + 1)] = mas[i];
	}
	for (int i = s1_len + s2_len + 1; i < len; i++)
	{
		str3[i - (s1_len + s2_len + 1)] = mas[i];
	}
	maks = s1_len;
	if (s2_len > maks)maks = s2_len;
	if (s3_len > maks)maks = s3_len;
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	setlocale(LC_ALL, ".866");
	cout << " Ъ";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "ї\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s1_len; i++) cout << str1[i];
	if (s1_len < maks)
	{
		for (int i = 0; i < maks - s1_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s2_len; i++) cout << str2[i];
	if (s2_len < maks)
	{
		for (int i = 0; i < maks - s2_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s3_len; i++) cout << str3[i];
	if (s3_len < maks)
	{
		for (int i = 0; i < maks - s3_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " А";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "Щ\n";
	SetConsoleTextAttribute(hConsole, 15);
	setlocale(LC_ALL, ".1251");
}

void yellow()
{
	SetConsoleTextAttribute(hConsole, 14);
}

void white()
{
	SetConsoleTextAttribute(hConsole, 15);
}

void red()
{
	SetConsoleTextAttribute(hConsole, 12);
}

void ShiftRight3(float A, float B, float C)
{
	yellow();
	cout << " Числа до сдвига \n";
	white();
	cout << "A-" << A << endl << "B-" << B << endl << "C-" << C << endl;
	float prom,prom1;
	prom = B;
	prom1 = C;
	B = A;
	C = prom;
	A = prom1;
	yellow();
	cout << " Числа после сдвига \n";
	white();
	cout << "A-" << A << endl << "B-" << B << endl << "C-" << C << endl;
}

void ShiftLeft3(float A, float B, float C)
{
	yellow();
	cout << " Числа до сдвига \n";
	white();
	cout << "A-" << A << endl << "B-" << B << endl << "C-" << C << endl;
	float prom, prom1;
	prom = A;
	prom1 = B;
	B = C;
	C = prom;
	A = prom1;
	yellow();
	cout << " Числа после сдвига \n";
	white();
	cout << "A-" << A << endl << "B-" << B << endl << "C-" << C << endl;
}

bool IsLeapYear(int Y)
{
	if (Y % 4 != 0)
	{
		return false;
	}
	else if (Y%4==0&&Y % 100 == 0 && Y % 400 != 0)
	{
		return false;
	}
	else return true;
}

int MonthDays(int M, int Y)
{
	if (M >= 1 && M <= 12)
	{
		if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
			return 31;
		else if (M == 4 || M == 6 || M == 9 || M == 11)
			return 30;
		else if (M == 2)
		{
			if (IsLeapYear(Y))
				return 29;
			else
				return 28;
		}
	}
	else cout << " Вы не правильно ввели номер месяца" << endl;
}

void PrevDate(int *D, int *M, int *Y)
{
	if (*D != 1)
	{
		*D=*D-1;		
	}
	else
	{
		if (*M == 1&&*D==1)
		{
			*M = 12;
			*Y=*Y-1;
		}
		else if (*D == 1)
		{
			*M = *M - 1;
		}
		*D = MonthDays(*M,*Y);		
	}
}