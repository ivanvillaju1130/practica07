#include <stdio.h>

/*
INSTRUCCIONES:
Completa el switch usando la variable "dia"
*/

int main() {
    int dia;
    printf("Ingresa el número de día\n");
    scanf("%d", &dia);

    switch (dia) {
        case 1: printf("Es Lunes\n"); break;
        case 2: printf("Es Martes\n"); break;
        case 3: printf("Es Miercoles\n"); break;
        case 4: printf("Es Jueves\n"); break;
        case 5: printf("Es Viernes\n"); break;
        case 6: printf("Es Sabado\n"); break;
        case 7: printf("Es Domingo\n"); break;
        default: printf("Dia invalido\n");
    }

    return 0;
}
