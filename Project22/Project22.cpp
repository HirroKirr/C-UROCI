/* �������� �������. �������� ���������, ������� ������� �� ����� ������������� �������� *. ������ � ������ ������� �������������. */

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int breadth;
	int length;

	cout << "������� ������ ��������������!" << endl;
	cin >> breadth;

	cout << "������� ������ ��������������!" << endl;
	cin >> length;

	for (int f = 0; f < breadth; f++)
	{
		for (int a = 0; a < length; a++)
		{
			cout << "*";
		}
		cout << endl;
	}

	


	cout << endl;





}