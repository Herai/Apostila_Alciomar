#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*int y = 5;
    int *yPtr;  

    yPtr = &y;

   printf("%d", *yPtr);
   */

    int a = 7 ;
    int *aPtr = &a;

    printf("O endereco de a e %p" "\nO Valor de aPtr e %p",&a, aPtr);

    printf("\n\nO valor de a e %d" "\nO valor de *aPtr e %d", a, *aPtr);

    printf("\n\nMostrando que * e & sao complementos um " "do outro\n&*aPtr = %p" "\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}