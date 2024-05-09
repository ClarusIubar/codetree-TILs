#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100], temp[100];
    scanf("%s %s", s, t);
    strcpy(temp, s);
    strcpy(s, t);
    strcpy(t, temp);
    printf("%s\n%s", s, t);
    return 0;
}