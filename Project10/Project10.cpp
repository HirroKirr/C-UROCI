#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, s;
	int the_first_is_younger, the_second_is_younger;

	cout << "������� ������� #1 ��������" << endl;
	cin >> a;

	cout << "������� ������� #2 ��������" << endl;
	cin >> s;


	if (a > s)
	{
		cout << "������� ��� ������� #1 ������" << endl;
	}
	else if (a == s)
	{
		cout << "��� �������� ����������� ��������" << endl;
	}
	else 
	{
		cout << "������� ��� ������� #2 ������" << endl;
	}
}