#include <stdio.h>
#include <stdbool.h>

bool test(int i) {
    while (i > 0) {
        int digit = i % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            return true;
        }
        i /= 10;
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || test(i)) {
            printf("%d ", 0);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}