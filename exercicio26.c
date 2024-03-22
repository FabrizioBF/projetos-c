/*
26.Escreva um programa para exibir os conteúdos de duas variáveis string. Utilize o '%s'  como especificador de formato
para a string na linguagem c.
**/

#include<stdio.h>  
#include <string.h>

int main(){
char ch1[11]={'p', 'e', 'r', 'n', 'a', 'm', 'b', 'u', 'c', 'o'};    
char ch2[11]="PERNAMBUCO";

printf("Valor da array de caracteres é: %s\n", ch1);
printf("Valor literal da string é: %s\n", ch2);
return 0;    
    }
