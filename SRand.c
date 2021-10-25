#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    unsigned seed;

    printf("Digite a semente: ");
    scanf("%u", &seed);                         // %u é usado para adicionar coisas na variavel Unsigned

    srand(seed);                               // Inicia gerador de numero aleatorio

    for (i = 1; i<= 10; i++){
        printf("%10d", 1 + (rand () % 6));

    if (i % 5 == 0){                            // Se i for divisivel por 5 ele vira 
        printf("\n");
        }
    }
    return 0;
}