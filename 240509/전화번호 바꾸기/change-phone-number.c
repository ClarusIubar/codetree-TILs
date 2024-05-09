#include <stdio.h>

int main() {
    int a, x, y, temp;
    scanf("%d-%d-%d", &a, &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("%03d-%d-%d", a, x, y);
    return 0;
}