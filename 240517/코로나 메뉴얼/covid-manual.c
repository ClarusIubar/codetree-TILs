#include <stdio.h>

int main() {
    char cold1, cold2, cold3;
    int temp1, temp2, temp3;

    scanf("%c %d %c %d %c %d", 
    &cold1, &temp1, 
    &cold2, &temp2,
    &cold3, &temp3);

    if(!(cold1=='Y' && temp1>=37)){
        if((cold2=='Y' && temp2>=37) && (cold3=='Y' && temp3>=37)){
            printf("%c", 'E');
        }
        else{
            printf("%c", 'N');
        }
    }
    else if(cold1=='Y' && temp1>=37){
        if((cold2=='Y' && temp2>=37) || (cold3=='Y' && temp3>=37)){
            printf("%c", 'E');
        }
        else{
            printf("%c", 'N');
        }
    }
    else{
        printf("%c", 'N');
    }

    return 0;
}