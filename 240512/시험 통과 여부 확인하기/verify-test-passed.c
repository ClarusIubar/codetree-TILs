#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 80){
        printf("pass");
    }
    else {
        int pass = 80 - a;
        printf("%d more score", pass);
    }
    return 0;
}