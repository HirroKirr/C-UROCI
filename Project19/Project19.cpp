//�������� ����� continue. ����� ���� � ���� ����� ��������� � ������� ����������� ������ �� ����������.

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	for (int a = 0; a < 10; a++)
	{

		if (a == 5)
		{
			continue;
		}

		cout << "���������� a =" << a << endl;

	}

	cout << "����� �����" << endl;
}
