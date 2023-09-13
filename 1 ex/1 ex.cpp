// 1 ex.cpp: определяет точку входа для приложения.
//

#include "1 ex.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string fname;
	cout << "Введите фамилию: ";
	cin >> fname;
	cout << "Ваш вариант: " << fname.length() % 2 + 1;
	return 0;
}
