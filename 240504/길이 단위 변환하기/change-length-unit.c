#include <stdio.h>

int main() {
    float ft_cm = 30.48;
    float mi_cm = 160934;
    float a = 9.2;
    float b = 1.3;

    printf("%.1fft = %.1fcm", a, a*ft_cm);
    printf("\n");
    printf("%.1fmi = %.1fcm", b, b*mi_cm);
    return 0;
}