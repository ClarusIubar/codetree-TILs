#include <stdio.h>

int main() {
    int n;
    scanf("%d ", &n);

    for(int i=1; i<n; i++){
        int num;
        scanf("%d ", &num);

        if(num%2==1 && num%3==0){
            printf("%d\n", num);
        }
    }

    return 0;
}