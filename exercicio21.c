/*
Escreva um programa para comparar dois números usando else/if
**/

#include<stdio.h>
int main(){
int n1, n2;

printf("Insira dois números para comparar:\n");
scanf("%d%d",&n1,&n2);

if (n1 > n2)
{
printf("O primeiro número é maior que o segundo número.");
}
else if (n2 > n1)
{
printf("O segundo número é maior que o primeiro número.");
}
else
{
printf("\nOs números dados são iguais.");
}

return (0);
}
