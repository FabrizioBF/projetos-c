/*
Escreva um programa para verificar o digito (1 - 5) inserido pelo usuário.
**/

#include<stdio.h>
int main() {
int n;
printf("Insira um dígito de 1 a 5:\n");
scanf ("%d", &n);
switch (n) {
case 1:
printf("Você digitou 1\n");
break;
case 2:
printf("Você digitou 2\n");
break;
case 3:
printf("Você digitou 3\n");
break;
case 4:
printf("Você digitou 4\n");
break;
case 5:
printf("Você digitou 5\n");
break;
default:
printf("Digito inválido.\n");
}

return (0);
}
