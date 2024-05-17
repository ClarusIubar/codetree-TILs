#include <stdio.h>

int main() {
    int Am, Ae, Bm, Be;
    scanf("%d %d %d %d", &Am, &Ae, &Bm, &Be);
    if(Am > Bm && Ae > Be){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }

    return 0;
}