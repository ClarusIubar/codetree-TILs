#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=n; i<=100; i++){
        if(i>=90){
            printf("%c ", 'A');
        }
        else if(i>=80){
            printf("%c ", 'B');
        }
        else if(i>=70){
            printf("%c ", 'C');
        }
        else if(i>=60){
            printf("%c ", 'D');
        }
        else{
            printf("%c ", 'F');
        }
    }
    
    return 0;
}