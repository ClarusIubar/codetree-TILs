#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b){
        int c;
        c = a - b;
        printf("%d", c);
    }
    if (a < b){
        int c;
        c = b - a;
        printf("%d", c);
    }
    return 0;
}