/*
11.Escreva um programa que solicita ao usuário  o comprimento de um lado e imprima
a área de um quadrado:
**/

#include <stdio.h>
int main() {
int a, s;

printf("Insira o comprimento do lado: ");

scanf("%d", &s); //armazena o comprimento em s

a = s * s; //calcula a área; armazenar em a

printf("\nA área do quadrado é %d\n", a);
}
