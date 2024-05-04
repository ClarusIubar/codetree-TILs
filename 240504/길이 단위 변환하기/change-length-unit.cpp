#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    float ft_cm = 30.48, mi_cm = 160934;
    float a = 9.2, b = 1.3;

    cout.precision(1);
    cout << a << "ft" << " = " << a*ft_cm << "cm" << endl;
    cout << b << "mi" << " = " << b*mi_cm << "cm";

    return 0;
}