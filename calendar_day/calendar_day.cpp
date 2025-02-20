//кол-во дней в месяце в зависимости от года
#include <iostream>
using namespace std;
int month, year;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите месяц и год через пробел: "; cin >> month >> year;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 11:
	case 12:
		cout << "31";
		break;
	case 2:
		if ((year % 400 == 0 || year % 100 != 0) && year % 4 == 0) {
			std::cout << "29";
		}
		else {
			std::cout << "28";
		}
		break;
	default:
		std::cout << "30";
	}
}
