#include <stdio.h>

/*
INSTRUCCIONES:
Aprobado si la calificación es >= 60
*/

int main() {
    int calificacion;
    printf("Ingresa su calificación\n");
    scanf("%d", &calificacion);

    if (calificacion>6) {
        printf("Aprobado\n");
    } else {
        printf("Reprobado\n");
    }

    return 0;
}
