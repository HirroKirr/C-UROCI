/*������� ��� ����� � �������� �� ����� �������� �����,
������������ � ������� �������������� ���� �����.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int f, a, c;
	int sum, mult;
	double average;
	cout << "������� 3  ����� " << endl;
	cin >> f >> a >> c;

	sum = f + a + c;
	cout << "����� ��� ����� = " << sum << endl;

	mult = f * a * c;
	cout << "������������ ��� ����� = " << mult << endl;

	average = (double)(f + a + c) / 3;
	cout << "������� �������������� ��� ����� = " << average << endl;
}