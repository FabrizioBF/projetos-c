/*
Escreva um programa para verificar se um número é par ou ímpar.
**/

#include <stdio.h>

int main(){
    int num;
    printf("Digite um número inteiro para verificar se é par ou ímpar: ");
    scanf("%d", &num);
    if (num%2)
   	 printf("%d é número ímpar.", num);
    else
   	 printf("%d é número par.", num);
    return 0;
}
