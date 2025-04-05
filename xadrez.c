#include <stdio.h>
#include <locale.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo:\n");
    moverbispo(2);
    printf("\n");
    


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da Torre:\n");
    movertorre(3);
    printf("\n");
  

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
   printf("Movimento da Rainha:\n");
   moverrainha(3);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
   printf("Movimento do Cavalo:\n");
   moverCavalo();



    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
