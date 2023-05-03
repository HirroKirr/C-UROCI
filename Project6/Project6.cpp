/*Введите три числа и выведите на экран значение суммы,
произведения и среднее арифметическое этих чисел.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int f, a, c;
	int sum, mult;
	double average;
	cout << "Введите 3  числа " << endl;
	cin >> f >> a >> c;

	sum = f + a + c;
	cout << "Сумма трёх чисел = " << sum << endl;

	mult = f * a * c;
	cout << "Произведение трёх чисел = " << mult << endl;

	average = (double)(f + a + c) / 3;
	cout << "среднее арифметическое трёх чисел = " << average << endl;
}