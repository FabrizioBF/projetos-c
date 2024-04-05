//39.Saída "Velho suficiente para votar!" se idade for maior ou igual a 18. Caso contrário, imprima "Não tem idade
// suficiente para votar.":

#include <stdio.h>

int main(){
int minhaIdade = 25;
int idadeVotar = 18;

if (minhaIdade >= idadeVotar) {
  printf("Idade suficiente para votar!");
} else {
  printf("Não tem idade suficiente para votar.");
 }
return 0;
 }
