#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a*a);
    if(a < 5){
        printf("\n");
        printf("tiny");
    }
    return 0;
}