#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


#define MIN_VAL 2

typedef struct{
        char nome[100];
        int idade;
        char endereco[200];
    }Cadastro;

Cadastro* aloc_cad(int N){
    if(N<=0)
        return NULL;
    Cadastro *vetor_cadastros = (Cadastro *)malloc(N * sizeof(Cadastro));

    if (vetor_cadastros == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    Cadastro *ptr_atual = vetor_cadastros;

    for (int i = 0; i < N; i++) {
        printf("\nCadastro %d:\n", i + 1);  
        printf("Nome: ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        if (fgets(ptr_atual->nome, sizeof(ptr_atual->nome), stdin) == NULL) {
            free(vetor_cadastros);
            return NULL;
        }    
        ptr_atual->nome[strcspn(ptr_atual->nome, "\n")] = '\0';

        printf("Idade: ");

        if (scanf("%d", &(ptr_atual->idade)) != 1) {
             printf("Idade invalida. Interrompendo.\n");
             free(vetor_cadastros);
             return NULL;
        }

        printf("Endereco: ");
        while ((c = getchar()) != '\n' && c != EOF);
        
        if (fgets(ptr_atual->endereco, sizeof(ptr_atual->endereco), stdin) == NULL) {
            free(vetor_cadastros);
            return NULL;
        }
        ptr_atual->endereco[strcspn(ptr_atual->endereco, "\n")] = '\0';
        

        ptr_atual++;
    }

    return vetor_cadastros;
}


int main(){

    setlocale(LC_ALL, "Portuguese");

   /*Ex.: 1
    printf("Tipo char:   %zu bytes\n", sizeof(char));
    printf("Tipo int:    %zu bytes\n", sizeof(int));
    printf("Tipo float:  %zu bytes\n", sizeof(float));
    printf("Tipo double: %zu bytes\n", sizeof(double));*/
    
   /*Ex.: 2
    typedef struct{
         long int matricula;
         char nome[100];
         float nota[3];
    }aluno;
    aluno A1;
    printf("Digite o número de matrícula deste aluno:\n> ");
    scanf("%ld",&A1.matricula);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Digite o nome do aluno:\n> ");
    fgets(A1.nome, sizeof(A1.nome), stdin);
    A1.nome[strcspn(A1.nome, "\n")] = '\0';
    for(int i = 0; i <= 2; i++){
      printf("Digite a nota da prova %d\n> ",i + 1);
      scanf("%f",&A1.nota[i]);
    }
    printf("Tamanho da estrutura: %zu bytes\n", sizeof(aluno));*/

   /*Ex.: 3
    int N;
    printf("Quantos cadastros voce deseja registrar (N)?\n> ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Entrada invalida. Encerrando.\n");
        return 1;
    }

    Cadastro *lista_cadastros = aloc_cad(N);

    if (lista_cadastros == NULL) {
        printf("Programa encerrado devido a erro de alocacao ou entrada de dados.\n");
        return 1;
    }

    printf("\n====================================\n");
    printf("  LISTA DE CADASTROS REGISTRADOS  \n");
    printf("====================================\n");

    for (int i = 0; i < N; i++) {
        Cadastro *c = lista_cadastros + i;
        
        printf("Cadastro %d:\n", i + 1);
        printf("  Nome: %s\n", c->nome);
        printf("  Idade: %d\n", c->idade);
        printf("  Endereco: %s\n", c->endereco);
        printf("------------------------------------\n");
    }*/

   /*Ex.: 4
    int n;
    printf("Digite um número para ser o tamanho do vetor:\n> ");
    scanf("%d",&n);
    int *vetor = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Digite um valor para a posição [%d]\n", i);
        scanf("%d",&vetor[i]);
    } 
    for (int i = 0; i < n; i++) {
        printf("Vetor[%d]: %d\n", i, *(vetor + i));
    }
    free(vetor);*/

   /*Ex.: 5
    int N;
    int *V = NULL;

    do {
        printf("Tamanho de N: ");
        if (scanf("%d", &N) != 1 || N <= 0) {
            printf("Inválido. N deve ser inteiro e positivo.\n");
            while (getchar() != '\n' && !feof(stdin));
        }
    } while (N <= 0);

    V = (int *)malloc(N * sizeof(int));
    if (!V) {
        printf("Falha na alocação.\n");
        return 1;
    }

    printf("Digite os %d valores (>= %d):\n", N, MIN_VAL);
    for (int i = 0; i < N; i++) {
        do {
            printf("V[%d]: ", i);
            if (scanf("%d", &V[i]) != 1) {
                printf("Inválido.\n");
                while (getchar() != '\n' && !feof(stdin)); 
                continue;
            }
            if (V[i] < MIN_VAL) {
                printf("Valor deve ser >= %d.\n", MIN_VAL);
            }
        } while (V[i] < MIN_VAL);
    }
    free(V);*/
    
     

}