#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    if(3<=m && m<=5){
        printf("%s", "Spring");
    }
    else if(6<=m && m<=8){
        printf("%s", "Summer");
    }
    else if(9<=m && m<=11){
        printf("%s", "Fall");
    }
    else{
        printf("%s", "Winter");
    }
    
    return 0;
}