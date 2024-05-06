#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double ft_cm = 30.48, a;
    cin >> a;
    cout.precision(1);
    cout << a*ft_cm;
    return 0;
}