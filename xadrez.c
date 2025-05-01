#include <stdio.h>
 
void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}
void moverRainha(int casas){
    if (casas > 0)
    {
        printf("esquerda\n");
        moverRainha(casas - 1);
    }
    
}
void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {       // loop externo (vertical)
            for (int j = 0; j < 1; j++) {   // loop interno (horizontal)
                printf("Cima e Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}
int main() {
    
 printf("**torre se movimenta**\n");
moverTorre(5);

 printf("\n");
 printf("**Rainha se movimenta**\n");
moverRainha(8);

 printf("\n");
 printf("**Bispo se movimenta**\n");
moverBispo(5);

int cavalo = 1;

printf("\n");
printf("**cavalo se movimenta**\n");

for (int cavalo = 1, j = 4; cavalo < j; cavalo++, j--)
{
    printf("cima\n");
}
while (cavalo <= 1) {
    printf("direita\n");
    cavalo++;
}

    return 0;
}