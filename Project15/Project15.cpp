//Цикл while
/*Цикл - конструкция повторения*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	//cout << "Текст вывелся на экран." << endl;
	/* 
	
	while (утверждение) 
	{
	  действие для повторения;
	}
	
	*/
	int a = 0;


	while (a<10)
	{
		cout << "Переменная a ="<< a << endl;
		a++;
	}


}