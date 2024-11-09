//
// Created by Roselyne on 9/28/2024.
//
#include <stdio.h>

main(void) {

    char ch;
    printf("\nIngrese una vocal: ");
    scanf("%c", &ch);
    switch (ch) {
    case 'a':
    case 'A':
printf("\nLa vocal que usted selecciono es la A");
        break;
    case 'e':
    case 'E':
printf("\nLa vocal que usted selecciono es la E");
        break;
    case 'i':
    case 'I':
printf("\nLa vocal que usted selecciono es la I");
        break;
    case 'o':
    case 'O':
printf("\nLa vocal que usted selecciono es la O");
        break;
    case 'u':
    case 'U':
printf("\nLa vocal que usted selecciono es la U");
        break;

    default: printf("\nOperacion incorrecta, Fin del programa :P, R.");
    }
}