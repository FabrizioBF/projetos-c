//36.Use diferentes tipos de dados para calcular e gerar o custo total de vários itens.
#include <stdio.h>
int main(){

// criando variáveis de tipos de dados diferentes
int items = 50;
float custo_por_item = 9.99;
float custo_total = items * custo_por_item;
char moeda = '$';

// imprimindo os conteúdos das variáveis
printf("Número de items: %d\n", items);
printf("Custo por item: %.2f %c\n", custo_por_item, moeda);
printf("Custo total = %.2f %c\n", custo_total, moeda);
return 0;
 }
