#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &b, &a);

    int i=b;
    while(i>=a){
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}