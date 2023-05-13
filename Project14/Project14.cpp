#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, f, celection;
	cout << "Введите 2 числа" << endl;
	cin >> a >> f;
	cout << "Выберите  математическую операцию" << endl << "1. сложение" << endl << "2. вычетание" << endl << "3 умножение" << endl << "4. деление" << endl;

	cin >> celection;

	switch (celection)
	{
	case 1:
		cout << "Результат сложение" << a + f << endl;
		break;
	
	
	case 2:
		cout << "Результат вычетание" << a - f << endl;
		break;
	
	
	case 3:
		cout << "Результат умножение" << a * f << endl;
		break;
	
	
	case 4:
		cout << "Результат деление" << a / f << endl;
		break;

	default:
		cout << "Ошибка! Я не знаю данной команды!" << endl;
		break;
	}

}