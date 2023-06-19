// вложенный цикл. Вложенная конструкция.

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
		for (int f = 1; f < 6; f++)
		{
			cout << "Сработал 1й for интеренция №" << f << endl;

			for (int a = 1; a < 6; a++)
			{
				cout << "\tСработал 2й for интеренция №" << a << endl;
			}
		}
	
}
