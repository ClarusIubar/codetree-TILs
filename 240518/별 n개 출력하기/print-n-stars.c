#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<=n){
        printf("%c\n", '*');
        i++;
    }
    return 0;
}