#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, f, celection;
	cout << "������� 2 �����" << endl;
	cin >> a >> f;
	cout << "��������  �������������� ��������" << endl << "1. ��������" << endl << "2. ���������" << endl << "3 ���������" << endl << "4. �������" << endl;

	cin >> celection;

	switch (celection)
	{
	case 1:
		cout << "��������� ��������" << a + f << endl;
		break;
	
	
	case 2:
		cout << "��������� ���������" << a - f << endl;
		break;
	
	
	case 3:
		cout << "��������� ���������" << a * f << endl;
		break;
	
	
	case 4:
		cout << "��������� �������" << a / f << endl;
		break;

	default:
		cout << "������! � �� ���� ������ �������!" << endl;
		break;
	}

}