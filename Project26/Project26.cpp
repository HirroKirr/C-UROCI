// sizeof - ���������� ������ � ������ ���� ���� ������ ���� ����������.

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int arr[]{234,4234,254325,524,524,524,4355,345};

	//int v = sizeof(arr);
	//int f = sizeof(int);
	//cout << sizeof(arr) / sizeof(int) << endl;

	/*
	   ����� ������ ����� �������� ��������� ��� ����� ����������.
	   ��� ��� ��������: ������ sizeof(arr) � sizeof(arr[0]) ������� ����� ���������� int(4).
	*/
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << endl;
	}


/*
    const int SIZE = 10;
	int arr[SIZE]{};
	cout << sizeof(arr) << endl;
	for (int a = 0; a < SIZE; a++)
	{
		arr[a] = a;
	}
	for (int a = 0; a < SIZE; a++)
	{
		cout << arr[a] << endl;
	}

	cout << sizeof(int) << endl;
	*/

	/*
      ����� ���������� ������� � ��� ��������� ������: 
	  ���� ��������� ����� �� ������� �� �������� ����� � ������, �� int ���������.

      cout << sizeof(arr)/ sizeof(int) << endl;	
	*/
}