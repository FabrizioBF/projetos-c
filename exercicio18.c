/*
Escreva um programa para verificar se um número é positivo, negativo ou é igual zero.
**/

#include<stdio.h>
int main() {
int n;

printf("Digite um número:\n");
scanf ("%d", &n);

if (n > 0)
{
printf("%d é positivo\n", n);
}
else if (n < 0)
{
printf("%d é negativo\n", n);
}
else
{
printf("%d é zero\n", n);
}

return (0);
}
