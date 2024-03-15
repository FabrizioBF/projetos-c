/*
Escreva um programa para verificar se um determinado número é positivo ou negativo.
**/

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>=0)
   	 printf("%d is a positive number.", num);
    else
   	 printf("%d is a negative number.", num);
    return 0;
}
