#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    double b = (double) (10000*w) / (h*h);
    cout << (int) b << endl;
    if(b >= 25){
        cout << "Obesity";
    }
    return 0;
}