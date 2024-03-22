/*
28.Escreva um programa que utiliza a instrução switch para receber um valor inteiro e verifique se ele é igual a 10, 50,
100 ou não é igual a esses números.
**/

#include<stdio.h>  

int main(){
int number=0;
printf("Digite um número inteiro: ");    
scanf("%d",&number);    
    
switch(number){    
case 10:    
printf("Número digitado é igual a 10");    
break;    
    
case 50:    
printf("Número digitado é igual a 50");    
break;    
    
case 100:    
printf("Número digitado é igual a 100");    
break;    
    
default:    
printf("Número digitado não é igual a 10, 50 ou 100!");    
}    
return 0;  
}
