#include<iostream>
using namespace std;
//const - для хранения постоянных данных

void main()
{
	setlocale(LC_ALL, "ru");
	const int количество_месяцев_в_году = 12; //const int - имено так нужно обьявлять константу
	cout << количество_месяцев_в_году << endl;
}