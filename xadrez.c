#include <stdio.h>
#include <locale.h>
// Desafio de Xadrez - MateCheck
// Este c�digo inicial serve como base para o desenvolvimento do sistema de movimenta��o das pe�as de xadrez.
// O objetivo � utilizar estruturas de repeti��o e fun��es para determinar os limites de movimenta��o dentro do jogo.

void moverbispo(int diagonais){
   if (diagonais == 0){return;}

    for ( int i = 0; i < 1; i++)
    {
      for (int j = 0; j < 1; j++)
      {
        printf("Cima\n");
        printf("Direita\n");
      }
 
      moverbispo(diagonais - 1);
    }
   

}

void movertorre(int casas){
  if (casas == 0){return;}

  printf("Direita\n");
  movertorre(casas - 1);
}

void moverrainha(int casas){
    if (casas == 0){return;}
    printf("direita\n");
    moverrainha(casas - 1);
}


void moverCavalo() {
  int movimentosFeitos = 0;
  for (int i = 1; i < 4; i++) {
      for (int j = 0; j < 2; j++) {
          if (movimentosFeitos == 2) {
              printf("Direita\n");
              movimentosFeitos++;
              break;
          }
          if (j < 3) {
              printf("Cima\n");
              movimentosFeitos++;
          }
      }
      if (movimentosFeitos >= 3) break;
  }
}


int main() {

    setlocale(LC_ALL,"Portuguese_Brasil");
    // Implementa��o de Movimenta��o do Bispo
    // Sugest�o: Utilize uma estrutura de repeti��o para simular a movimenta��o do Bispo em diagonal.
    printf("Movimento do Bispo:\n");
    moverbispo(2);
    printf("\n");
    


    // Implementa��o de Movimenta��o da Torre
    // Sugest�o: Utilize uma estrutura de repeti��o para simular a movimenta��o da Torre para a direita.
    printf("Movimento da Torre:\n");
    movertorre(3);
    printf("\n");
  

    // Implementa��o de Movimenta��o da Rainha
    // Sugest�o: Utilize uma estrutura de repeti��o para simular a movimenta��o da Rainha para a esquerda.
   printf("Movimento da Rainha:\n");
   moverrainha(3);
    printf("\n");

    // N�vel Aventureiro - Movimenta��o do Cavalo
    // Sugest�o: Utilize loops aninhados para simular a movimenta��o do Cavalo em L.
   printf("Movimento do Cavalo:\n");
   moverCavalo();



    // Um loop pode representar a movimenta��o horizontal e outro vertical.

    // N�vel Mestre - Fun��es Recursivas e Loops Aninhados
    // Sugest�o: Substitua as movimenta��es das pe�as por fun��es recursivas.
    // Exemplo: Crie uma fun��o recursiva para o movimento do Bispo.

    // Sugest�o: Implemente a movimenta��o do Cavalo utilizando loops com vari�veis m�ltiplas e condi��es avan�adas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
