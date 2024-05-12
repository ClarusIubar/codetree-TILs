#include <stdio.h>

int main() {
    int h, w;
    scanf("%d %d", &h, &w);
    double b = ( (10000 * w) / (double) (h * h) );
    printf("%d", (int) b);
    if (b >= 25){
        printf("\n");
        printf("Obesity");
    }
    return 0;
}