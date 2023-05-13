#include<iostream>
using namespace std;

//Оператор множественного выбора Switch.

void main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cin >> a;

		switch (a)
	{
		case 1:
		cout << "Вы ввели 1" << endl;
		break;

	case 2:
		cout << "Вы ввели 2" << endl;
		break;

	default: // Если в програму ввести то число которое мы неописывали в case, то мы попадём в блок default.
		cout << "Я не знаю этого числа!" << endl;
		break;
	}



}