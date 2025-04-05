#include <stdio.h>
#include <locale.h>
// Desafio de Xadrez - MateCheck
// Este c�digo inicial serve como base para o desenvolvimento do sistema de movimenta��o das pe�as de xadrez.
// O objetivo � utilizar estruturas de repeti��o e fun��es para determinar os limites de movimenta��o dentro do jogo.

int main() {

    setlocale(LC_ALL,"Portuguese_Brasil");

    // N�vel Novato - Movimenta��o das Pe�as
    // Sugest�o: Declare vari�veis constantes para representar o n�mero de casas que cada pe�a pode se mover.
    int bispo = 5, torre = 5, rainha = 8;

    // Implementa��o de Movimenta��o do Bispo
    // Sugest�o: Utilize uma estrutura de repeti��o para simular a movimenta��o do Bispo em diagonal.
    
    while ((bispo <=5) && (bispo > 0))
    {
        printf("Cima, Direita\n");
        bispo--;
    }
    


    // Implementa��o de Movimenta��o da Torre
    // Sugest�o: Utilize uma estrutura de repeti��o para simular a movimenta��o da Torre para a direita.
    do
    {
       if (torre <= 5)
        {
          printf("Direita\n");
        }
          torre--;
    } while (torre > 0);
 
  

    // Implementa��o de Movimenta��o da Rainha
    // Sugest�o: Utilize uma estrutura de repeti��o para simular a movimenta��o da Rainha para a esquerda.
   
 for (rainha = 8; (rainha <= 8) && (rainha > 0); rainha--)
    {
    
      printf("esquerda\n");
        
    }
    






























    // N�vel Aventureiro - Movimenta��o do Cavalo
    // Sugest�o: Utilize loops aninhados para simular a movimenta��o do Cavalo em L.
    // Um loop pode representar a movimenta��o horizontal e outro vertical.

    // N�vel Mestre - Fun��es Recursivas e Loops Aninhados
    // Sugest�o: Substitua as movimenta��es das pe�as por fun��es recursivas.
    // Exemplo: Crie uma fun��o recursiva para o movimento do Bispo.

    // Sugest�o: Implemente a movimenta��o do Cavalo utilizando loops com vari�veis m�ltiplas e condi��es avan�adas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
