//
// Created by Roselyne on 9/22/2024.
//
#include <stdio.h>


int main(void) {

    //Para este ejercicio nos pide que el usuario ingrese 3 numeros y que detecte si hay alguno repetido
    //Y nos mencione cual es el numero repetido.

    //Como siempre primero variables.

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("\nIngrese su primer numero: ");
    scanf("%d", &num1);
    printf("\nIngrese su segundo numero: ");
    scanf("%d", &num2);
    printf("\nIngrese su tercer numero: ");
    scanf("%d", &num3);

    if (num1 == num2) {

        printf("\nSe repetio el nunero 1 con el numero 2, ambos son: %d" , num1);
    }
    else if (num1 == num3) {

        printf("\nSe repetio el numero 1 con el numero 3, ambos son: %d", num1);

    } else if (num2 == num3) {

        printf("\nSe repetio el numero 2 con el numero 3, ambos son: %d", num2);

    }

    else if (num1 == num2 && num2 == num3) {

        printf("\nLos 3 numero son iguales.");
    }

    else if (num1 != num3 && num2 != num3) {

        printf("\nNingun numero se repite");

    }

    printf("\nFin del Programa :) R.");
}
