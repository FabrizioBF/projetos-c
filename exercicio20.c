/*
Escreva um programa para comparar dois números usando if/else.
**/

#include<stdio.h>
int main() {
int n1, n2;

printf("Insira dois números para comparar:\n");
scanf("%d%d", &n1,&n2);

if (n1 > n2)
{
printf("O primeiro número é maior que o segundo número.");
}
else
{
printf("O segundo número é maior que o primeiro número.");
}

return (0);
}
