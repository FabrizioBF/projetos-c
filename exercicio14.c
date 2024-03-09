/*
14.Escreva um programa que insira dois valores inteiros e exiba o somatório na tela
**/

#include <stdio.h>

int main(){
    int num1, num2, soma;
    
    printf("Por favor, insira o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Por favor, insira o segundo número inteiro: ");
    scanf("%d", &num2);
    
    soma = num1+num2;
    
    printf("%d+%d = %d", num1, num2, soma);
    return 0;
}
