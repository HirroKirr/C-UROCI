/*
      ����������� ���������, ������� ������� �� ����� ����� �� ��������. ����� ��������, ����� ������������ ������,
      � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

    int symbolCount;
    char symbol;
    int iineType;
    int index = 0;

        cout << "������� ���������� ��������!" << endl;
        cin >> symbolCount;

        cout << "������� ������" << endl;
        cin >> symbol;

        cout << "�������� ��� �����" << endl
        << "1 - ������������ �����" << endl
        << "2 - �������������� �����" << endl;
        cin >> iineType;

        while (index < symbolCount)
        {
            if(iineType == 1)
            {
                cout << symbol << endl;
            }
            if (iineType == 2)
            {
                cout << symbol;
            }
           
            index++;
        }
        cout << endl << endl;





}