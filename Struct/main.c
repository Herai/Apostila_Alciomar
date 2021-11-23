#include <stdlib.h>
#include <stdio.h>

int main(void){

    /* struct funcionario{
        char nome[20];
        char sobrenome[20];
        int idade;
        char sexo;
        double salario;
    };
    
    for (int i = 0; i < 20; i++)
    {
        printf("Digite seu nome: ");
        scanf("%s", &nome[i]);
    }
    
    */

   struct ficha_aluno{
       char nome[40];
       int numero;
       float nota;
   };//definição struct

   struct ficha_aluno aluno;

   printf("\n----------Cadastro de Aluno----------\n\n\n");

   printf("Nome do aluno ......: ");
   fgets(aluno.nome, 40, stdin);

   printf("Digite o numero do Aluno: ");
   scanf("%d",&aluno.numero);

   printf("Informe a nota do aluno: ");
   scanf("%f",&aluno.nota);

    printf("\n\n ----------Lendo os dados da Struct ----------\n\n");
    printf("Nome ..........: %s", aluno.nome);
    printf("Numero ..........: %d \n", aluno.numero);
    printf("Nota ..........: %.2f \n", aluno.nota);
}