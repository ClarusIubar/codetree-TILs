#include <stdio.h>

int main() {
    int age1, age2;
    char gender1, gender2;
    scanf("%d %c %d %c", &age1, &gender1, &age2, &gender2);

    if( (age1>=19 && gender1 =='M') || (age2>=19 && gender2=='M') ){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}