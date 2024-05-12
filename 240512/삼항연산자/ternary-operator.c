#include <stdio.h>
#include <string.h>

int main() {
    int a;
    scanf("%d", &a);
    char c[20];
    (a=100) ? strcpy(c, "pass") : strcpy(c, "failure");
    printf("%s", c);
    return 0;
}