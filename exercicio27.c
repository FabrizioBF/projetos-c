/*
27.Escreva um programa para verificar se um número inteiro digitado corresponde a uma situação específica da instrução
switch-case.
**/

#include <stdio.h>

int main() {  
int num = 4;

switch (num) {  
case 1:  
printf("O Valor é 1\n");  
break;  
case 2:  
printf("O Valor é 2\n");  
break;  
case 3:  
printf("O Valor é 3\n");  
break;  
default:  
printf("O Valor não é 1, 2 ou 3\n");  
break;  
}  
 	 
return 0;  
}
