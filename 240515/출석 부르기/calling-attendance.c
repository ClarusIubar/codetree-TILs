#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if(number == 1){
        printf("%s", "John");
    }
    else if(number == 2){
        printf("%s", "Tom");
    }
    else if(number == 3){
        printf("%s", "Paul");
    }
    else {
        printf("%s", "Vacancy");
    }
    return 0;
}