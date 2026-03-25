#include <stdio.h>

/*
INSTRUCCIONES:
A >= 90
B >= 80
C >= 70
F < 70
*/

int main() {
    int cal;
    printf("Ingresa su calificación\n");
    scanf("%d", &cal);

    if (cal >= 9) {
        printf("A\n");
    } else if (cal >= 8) {
        printf("B\n");
    } else if (cal >=7) {
        printf("C\n");
    } else {
        printf("F\n");
    }

    return 0;
}
