/*
33.Escreva um programa que utiliza o tipo enum para criar uma lista de dias da semana, exibindo o dia baseado na lista enum.
**/

#include<stdio.h>

// enum declaration: 0, 1, 2, 3, 4, 5, 6
enum week{Seg, Ter, Qua, Qui, Sex, Sab, Dom};

int main()
{
  enum week day;
  day = Qua;
  printf("Quarta-feira:%d", day);
  return 0;
}
