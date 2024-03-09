/*
15.Escreva um programa para inserir dois inteiros e mostrar o resultado da divisão.
**/

#include <stdio.h>

int main(){
    int num1, num2, quoc, rest;
    
    printf("Insira o dividendo: ");
    scanf("%d", &num1);
    
    printf("Insira o divisor: ");
    scanf("%d", &num2);
    
    quoc = num1/num2;
    rest = num1%num2;
    
    printf("Quociente = %d\nResto = %d", quoc, rest);
    return 0;
}
