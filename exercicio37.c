// 37.Calcule a porcentagem da pontuação de um usuário em relação à pontuação máxima de um jogo.
#include <stdio.h>
int main(){
// a pontuação máxima para o jogo é 500
int maxPontua = 500;

// A pontuação atual do jogador (usuário)
int usuarioPontua = 420;

// calcular a porcentagem da pontuação do jogador em relação à pontuação máxima do jogo
float percentagem = (float) usuarioPontua / maxPontua * 100.0;

// imprimir a porcentagem   
printf("A porcentagem da pontuação do usuário é %.2f", percentagem);

return 0;
 }
