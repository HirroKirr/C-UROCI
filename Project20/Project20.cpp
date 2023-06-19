#include <iostream>
using namespace std;

// отладка

/* 

в програмирование можно выделить два вида ошибок: 1 - на этапе компиляции, тоесть что-то не так написали, не поставили знак (; : , и так далие).
2 - на этапе выполнения

*/
int sum(int a, int f);

void main()
{
	int a = 4;
	int f = 5;
	int c;

	c = a + f;
	cout << c << endl;
}