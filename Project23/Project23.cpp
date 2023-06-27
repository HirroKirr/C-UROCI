// Масив (статическй).
// Номерация начинается с 0
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int arr[4];

	arr[0] = 4;
	arr[1] = 45312;
	arr[2] = 143453;
	arr[3] = 5235235;

	cout << arr[0] << endl;		
	cout << arr[1] << endl;
		cout << arr[2] << endl;
		cout << arr[3] << endl;
}