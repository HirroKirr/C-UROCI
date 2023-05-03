#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, s;
	int the_first_is_younger, the_second_is_younger;

	cout << "Введите возраст #1 человека" << endl;
	cin >> a;

	cout << "Введите возраст #2 человека" << endl;
	cin >> s;


	if (a > s)
	{
		cout << "Человек под номером #1 старше" << endl;
	}
	else if (a == s)
	{
		cout << "Оба человека одинакового возраста" << endl;
	}
	else 
	{
		cout << "Человек под номером #2 старше" << endl;
	}
}