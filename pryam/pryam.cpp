//Задачака пирамида
#include <iostream>
using namespace std;
int x, y, z;
int main()
{
	cout << "Enter num: "; cin >> x >> y >>z;
    if (x + y <= z || x + z <= y || y + z <= x) {
        std::cout << "UNDEFINED\n";
    }
    else if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
}