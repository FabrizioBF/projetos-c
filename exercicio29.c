/*
29.Escreva um programa que pergunta ao usuário sobre uma senha e continua perguntando até que a senha correta seja inserida.
**/

#include <stdio.h>  
#include <string.h>  

int main() {
  char password[] = "minhasenhasecreta2024";
  char input[25];

  do {
    printf("Entre com a senha: ");
    scanf("%s", input);

  }while(strcmp(input, password) != 0);
  printf("Acesso concedido!\n");
  return 0;  
}
