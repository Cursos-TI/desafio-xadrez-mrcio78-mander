#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

        int opcao;      // essa variável servirá para a escolha da peça do tabuleiro
        char sair;      // resolvi dar a opção de continuar no programa escolhendo outras peças ou encerrar, então essa variável servirá para decidir se o programa continua ou não

    do {
        // Exibe o menu principal com as opções para o usuário escolher qual peça deseja mover
        printf("=== Movimentando as peças do xadrez ===\n\n");
        printf("Escolha uma peça para mover:\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("Digite o número da peça: ");
        scanf("%d", &opcao);

        printf("\n");


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

        // BISPO -> usando while
        if (opcao == 1) {
        printf("Movimento do BISPO:\n");
        int i = 1;
        while (i < 5) {
            printf("Cima, Direita (%d)\n", i); //imprime o movimento do Bispo
            i++
                }
        }

        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        //TORRE -> usando for
        else if (opcao ==2) {
        printf ("Movimento da TORRE:\n");
        for (int i = 1; i <= 5; i++) {
            printf("Direira (%d)\n, i); // imprime o movimento da Torre
            }

        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.                
        //RAINHA -<=> usando do-while
        else if (opcao == 3) {
            printf("Movimento da RAINHA"\n);
                int i = 1;
                do {
                    printf("Esquerda (%d)\n", i); imprime o movimento da rainha
                    i++;
                } while (i <= 8);

            
        }
        // No caso de ser escolhida uma opção inválida
        else {
            printf("Opção inválida! Escolha 1, 2 ou 3.\n");
        }

        // Pergunta se o usuário quer sair
        printf("\nDeseja sair? (s/n): ");
        scanf(" %c", &sair); 

        printf("\n");

    } while (sair == 'n' || sair == 'N'); // repete enquanto o usuário não quiser sair

    printf("--- Programa encerrado. Até logo! ---\n"); // caso o usuário escolha sair (diferente de n)

    return 0;
}
   
