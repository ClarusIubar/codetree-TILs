#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t, temp;
    cin >> s >> t;
    temp = s;
    s = t;
    t = temp;
    cout << s << "\n" << t;
    return 0;
}