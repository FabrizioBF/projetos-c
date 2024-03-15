/*
Escreva um programa para verificar se o usuário é masculino ou feminino.
**/

#include<stdio.h>
int main() {
char c;
printf("Insira o gênero m para masculino ou f para feminino:\n");
scanf ("%c", &c);

if (c=='m')
{
printf("Você é masculino");
}
else if (c=='f')
{
printf("Você é feminino");
}
else
{
printf("Outro gênero");
}

return (0);
}
