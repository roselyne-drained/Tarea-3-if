//
// Created by Roselyne on 9/22/2024.
//
#include <stdio.h>

int main(void) {
    //El siguiente problema nos indica que le pidamos al usuario 3 numero y el programa los muestre
    //De menor a mayor

    //Como siempre primero declaramos variables.

    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    printf("\nIngrese un numero: ");
    scanf("%f", &num1);
    printf("\nIngrese un numero: ");
    scanf("%f", &num2);
    printf("\nIngrese un numero: ");
    scanf("%f", &num3);

    //El numero 1 es el mayor:
    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            printf("\nEl orden de menor a mayor seria: %.f,%.f,%.f", num3,num2,num1);
        }
        else if (num2 < num3){
            printf("\nEl orden de menor a mayor seria: %.f,%.f,%.f", num2, num3, num1);
        }
    }
    //El numero 2 es el mayor:
    else if (num2 > num1 && num2 > num3) {
        if (num3 > num1) {
            printf("\nEl orden de menor a mayor seria: %.f,%.f,%.f", num1,num3,num2);
        }
        else if (num3 < num1) {
            printf("\nEl orden de menor a mayor seria: %.f,%.f,%.f", num3, num1, num2);
        }
    }
    //El numero 3 es el mayor:
    else if (num3 > num2 && num3 > num1) {
        if (num1 < num2) {
            printf("\nEl orden de menor a mayor seria: %.f,%.f,%.f", num1,num2,num3);
        }
        else if (num1 > num2) {
            printf("\nEl orden de menor a mayor seria: %.f,%.f,%.f", num2, num1, num3);
        }

        printf("\nFinalizing the program... :) R.");

        return 0;
    }
}
