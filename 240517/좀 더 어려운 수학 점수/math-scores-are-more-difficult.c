#include <stdio.h>

int main() {
    int Am, Ae, Bm, Be;
    scanf("%d %d %d %d", &Am, &Ae, &Bm, &Be);

    if(Am == Bm){
        if(Ae > Be){
            printf("%c", 'A');
        }
        else{
            printf("%c", 'B');
        }
    }
    else{
        if(Am > Bm){
            printf("%c", 'A');
        }
        else{
            printf("%c", 'B');
        }
    }

    return 0;
}