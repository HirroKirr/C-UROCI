//Инкремент(++) и дикремент(--). Постфиксный и префиксный


#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "ru");
	int f = 1;
	cout << f << endl;
	f = f + 1;
	cout << f << endl;
	f++; // Постфиксный вид записи(Инкремент)
	cout << f << endl;
	--f; //префиксный вид записи(дикремент)
	cout << f << endl;
}/* У операции Инкремент выше преоритет над остальной записью.*/
