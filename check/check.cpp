//Ферзь задачка
#include <iostream>
int x,y,z,e;
using namespace std;
int main() {
    cout << "Enter point x1,x2,y1,y2"; cin >> x >> y >>z >>e;
    if (x == y) {
        if (z == e) {
            if (abs(x - y)) {
                if (abs(z - e)) {
                    cout << "yes";
                }
            }
        }
    }
    else
    {
        cout << "No";
    }
}