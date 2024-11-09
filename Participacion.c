//
// Created by Roselyne on 9/28/2024.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //Declaramos variables:
    int operacion;
    float num1 = 0;
    float num2 = 0;

    printf("\nBienvenida, Por favor seleccione una operacion:");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Division");
    printf("\n5. Salir ");
    printf("\nIngresa la operacion que desea realzar:");
    scanf("%d", &operacion);

    switch (operacion){
        case 1:
            printf("\nIngresa el primer numero:");
            scanf("%f", &num1);
            printf("\nIngresa el segundo numero:");
            scanf("%f", &num2);
            float suma = num1 +num2;
            printf("\nLa suma es: %.2f", suma);
            printf("\nFin del programa, Hasta luego :) R.");
            break;

        case 2:
            printf("\nIngresa el primer numero:");
            scanf("%f", &num1);
            printf("\nIngresa el segundo numero:");
            scanf("%f", &num2);
            float resta = num1 -num2;
            printf("\nLa resta es: %.2f", resta);
            printf("\nFin del programa, Hasta luego :) R.");
            break;

        case 3:
            printf("\nIngresa el primer numero:");
            scanf("%f", &num1);
            printf("\nIngresa el segundo numero:");
            scanf("%f", &num2);
            float multiplicacion = num1 * num2;
            printf("\nLa multiplicacion es: %.2f", multiplicacion);
            printf("\nFin del programa, Hasta luego :) R.");
            break;

        case 4:
            printf("\nIngresa el primer numero:");
            scanf("%f", &num1);
            printf("\nIngresa el segundo numero:");
            scanf("%f", &num2);
            float division = num1 / num2;
            printf("\nLa division es: %.2f", division);
            printf("\nFin del programa, Hasta luego :) R.");
            break;

        case 5:
            printf("\nFin del programa, Hasta luego :) R.");
            break;

    default:
        printf("\nOperacion invalida");
        printf("\nFin del programa, Hasta luego :) R.");

    }


}
