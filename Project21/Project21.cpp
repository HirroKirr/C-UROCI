// ��������� ����. ��������� �����������.

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
		for (int f = 1; f < 6; f++)
		{
			cout << "�������� 1� for ���������� �" << f << endl;

			for (int a = 1; a < 6; a++)
			{
				cout << "\t�������� 2� for ���������� �" << a << endl;
			}
		}
	
}
