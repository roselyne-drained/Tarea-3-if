//
// Created by Roselyne on 9/22/2024.
//
#include <stdio.h>

int main(void) {

    //Ahora queremos pedir un numero y determinar si es par y es divisible entre 7.
    //Como siempre primero variables.

    int num = 0;
    printf("\nIngrese un numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("\nEl numero que ingreso es par.");

    } else {
        printf("\nEl numero que ingreso es impar.");
    }

    if (num % 7 == 0) {
        printf("\nEl numero que ingreso es divisible entre 7.");

    } else {
        printf("\nEl numero que ingreso no es divisible entre 7.");
    }

    printf("\nFin del programa, hasta luego! R. :P");

    return 0;

}
