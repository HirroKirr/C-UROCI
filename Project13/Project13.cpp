#include<iostream>
using namespace std;

//�������� �������������� ������ Switch.

void main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cin >> a;

		switch (a)
	{
		case 1:
		cout << "�� ����� 1" << endl;
		break;

	case 2:
		cout << "�� ����� 2" << endl;
		break;

	default: // ���� � �������� ������ �� ����� ������� �� ����������� � case, �� �� ������ � ���� default.
		cout << "� �� ���� ����� �����!" << endl;
		break;
	}



}