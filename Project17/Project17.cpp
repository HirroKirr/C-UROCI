/*
      Разработать программу, которая выводит на экран линию из символов. Число символов, какой использовать символ,
      и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
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

        cout << "Введите количество символов!" << endl;
        cin >> symbolCount;

        cout << "Введите символ" << endl;
        cin >> symbol;

        cout << "Выберите тип линии" << endl
        << "1 - вертикальная линия" << endl
        << "2 - горизонтальная линия" << endl;
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