/*
31.Escreva um programa para imprimir uma tabela para o número fornecido usando o loop do-while.
**/

#include<stdio.h>  

int main(){   

int i=1,number=0;   
printf("Digite um número inteiro: ");   
scanf("%d",&number);

do{  
printf("%d \n",(number*i));   
i++;   
}while(i<=5);   
return 0;   
} 
