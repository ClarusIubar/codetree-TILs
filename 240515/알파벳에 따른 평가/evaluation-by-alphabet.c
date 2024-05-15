#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if(c == 'S'){
        printf("%s", "Superior");
    }
    else if(c == 'A'){
        printf("%s", "Excellent");
    }
    else if(c == 'B'){
        printf("%s", "Good");
    }
    else if(c == 'C'){
        printf("%s", "Usually");
    }
    else if(c == 'D'){
        printf("%s", "Effort");
    }
    else{
        printf("%s", "Failure");
    }
    return 0;
}