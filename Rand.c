#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i = 1; i<= 20; i++){
        printf("%10d", 1 + (rand() % 6));  // %10d significa a quantidade de espaço que vai ter entre os numeros
            if(i % 5 == 0){                // Se tiver %5d o espaço é menor e %15d o espaço vai ser maior 
                printf("\n");
        }
    }
    return 0;
}

