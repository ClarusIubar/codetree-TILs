#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if( 10 <= a && a <= 20){
        printf("%s", "yes");
    }
    else{
        printf("%s", "no");
    }

    return 0;
}