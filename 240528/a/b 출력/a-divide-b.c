#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    double result = (long double)a / b;
    printf("%d.", (int)result);

    for (int i = 0; i < 20; i++) {
        result = (result - (int)result) * 10;
        printf("%d", (int)result);
    }

    result = (result - (int)result) * 10;
    int last_digit = (int)result;

    if (last_digit >= 5) {
        result = (long double)a / b;
        for (int i = 0; i < 20; i++) {
            result = (result - (int)result) * 10;
            int digit = (int)result;
            if (i == 19) {
            }
            printf("%d", digit);
        }
    }

    printf("\n");
    return 0;
}