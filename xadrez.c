#include <stdio.h>

int main() {

int torre = 1;
int bispo = 1;
int rainha = 1;
int cavalo = 1;

printf("**Bispo se movimenta**\n");

for (bispo = 1; bispo <= 5; bispo++) //limitando a quantidade de passos
{
    printf("cima e direita\n"); //bispo anda cinco casas na diagonal
}

printf("\n");
printf("**torre se movimenta**\n");

while (torre <= 5)
{
    printf("direita\n"); //torre anda cinco casas para a direita
    torre++; //adiciona um numero a mais
}

printf("\n");
printf("**Rainha se movimenta**\n");

do
{
    printf("esquerda\n");
    rainha++;
    
} while (rainha <= 8);

printf("\n");
printf("**cavalo se movimenta**\n");

for (int cavalo = 1; cavalo <= 1; cavalo++)
{
    for (int j = 1; j <= 2; j++) {
        printf("baixo\n");
        printf("\n");
    }
    while (cavalo <= 1) {
        printf("esquerda\n");
        cavalo++;
    }

    printf("\n");
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
