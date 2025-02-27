#include <iostream>
using namespace std;
int main() {
	int dayweek, daysmounth,i;
	cout << "Введите день недели от 1 - 7 и кол-во дней в месяце: "; cin >> dayweek >> daysmonth;
	for (i = 1; i < dayweek; ++i {
		cout << "  ";
	}
	for (int day = 1; day < = daysmounth; ++day) {
		if (day < 10) {
			cout << " ";
		}
		cout << day;
			if (dayweek == 7) {
				cout << "\n";
				dayweek = 1;

			}
			else
			{
				cout << " ";
				dayweek += 1;
			}
		}
	if (dayweek != 1) {
		cout << "\n";
	}
}
