#include <stdio.h>

int main() {
    int gender, age;
    scanf("%d %d", &gender, &age);

    if(gender == 0){
        if(age >= 19){
            printf("%s", "MAN");
        }
        else{
            printf("%s", "BOY");
        }
    }
    else{
        if(age >= 19){
            printf("%s", "WOMAN");
        }
        else{
            printf("%s", "GIRL");
        }
    }
    
    return 0;
}