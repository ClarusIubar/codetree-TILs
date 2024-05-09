#include <iostream>
using namespace std;

int main() {
    int a, x, y, temp;
    cin >> a;
    cin.get();
    cin >> x;
    cin.get();
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    // how to make 010(interger form) without .fill(), .width()?
    cout << 0 << a << "-" << x << "-" << y;   
    return 0;
}