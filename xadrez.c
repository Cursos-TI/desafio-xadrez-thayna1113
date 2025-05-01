#include <stdio.h>

int main() {

int torre = 1;
int bispo = 1;
int rainha = 1;

printf("**Bispo se movimenta**\n");

for (bispo = 1; bispo <= 5; bispo++) //limitando a quantidade de passos
{
    printf("cima e direita\n"); //bispo anda cinco casas na diagonal
}

printf("**torre se movimenta**\n");

while (torre <= 5)
{
    printf("direita\n"); //torre anda cinco casas para a direita
    torre++; //adiciona um numero a mais
}

printf("**Rainha se movimenta**\n");

do
{
    printf("esquerda\n");
    rainha++;
    
} while (rainha <= 8);


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
