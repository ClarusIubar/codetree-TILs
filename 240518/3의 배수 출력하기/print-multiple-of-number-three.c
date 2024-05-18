#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<=n){
        if(i%3==0){
            printf("%d ", i);
            i++;
        }
        else{
            i++;
        }
    }
    return 0;
}