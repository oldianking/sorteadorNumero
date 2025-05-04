#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Funções.
    srand(time(0));
    // Variáveis.
    int opcao, numeroSecreto, palpite, regras;
    char S_N;
    // Menu principal do jogo.
    while (opcao < 1 || opcao > 3) {
    printf("\n1. INICIAR JOGO\n");
    printf("\n2. VER REGRAS\n");
    printf("\n3. SAIR\n");
    printf("\nESCOLHA UMA OPÇÃO: ");
    scanf("%d", &opcao);
    // Estrutura de escolha do usuário.
    switch (opcao) {
        // Início do jogo.
        case 1:
            while (1) {
            numeroSecreto = rand() % 11;
            while (palpite != numeroSecreto) {
            printf("\nDigite seu palpite: ");
            scanf("%d", &palpite);    
            if (palpite < 0 || palpite > 10) {
                printf("\nNúmero inválido. Digite um número entre 0 e 10.\n");
                continue;
            }       
            if (palpite == numeroSecreto) {
                printf("\nNúmero secreto: %d\n", numeroSecreto);
                printf("\n---------------------\n");
                printf("\nPARABÉNS! VOCÊ ACERTOU!\n");
                printf("---------------------\n");
                printf("Deseja jogar novamente? [S] ou [N]: ");
                scanf(" %c", &S_N);
                if (S_N == 'S') {
                    break;
                } else if (S_N == 'N') {
                    return 0;
                }
            }
            else {
                printf("\nVOCÊ ERROU. TENTE NOVAMENTE.\n");
            }
            }}
        break;
        // Regras do jogo.
        case 2:
            while (regras < 1 || regras > 3) {
            printf("\n[1] Números\n");
            printf("\n[2] Letras\n");
            printf("\n[3] Diversão\n");
            printf("\nSobre qual regra deseja ler? ");
            scanf("%d", &regras);
            switch (regras) {
                case 1:
                    printf("\nUtilize apenas números de 0 à 10.\n");
                break;
                case 2:
                    printf("\nNão utilize letras, palavras, caracteres especiais ou números inválidos.\n");
                break;
                case 3:
                    printf("\nSempre se divirta.\n");
                break;
                default:
                    printf("\nOpção inválida! Digite novamente.\n");
                break;
            }}
        break;
        // Finaliza o jogo.
        case 3:
            printf("\nATÉ MAIS! :)\n");
        break;
        default:
            printf("\nOpção inválida! Digite 1, 2 ou 3.\n");
        break;
    }}
}