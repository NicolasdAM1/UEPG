#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>


char *pont_string(char *pri, char *sec){
    char *p = pri;
    while(*p != '\0'){
        char *pp = p;
        char *ss = sec;
        while(*pp != '\0' && *ss != '\0' && *pp  == *ss){
            pp++;
            ss++;
        }
        if(*ss == '\0')
            return (char *)p;
        p++;
    }
    return NULL;
}

void preencher_vetor(int *vetor, size_t tamanho, int valor) {
    int *ptr_atual = vetor;
    int *limite = vetor + tamanho;

    while (ptr_atual < limite) {
        *ptr_atual = valor;
        ptr_atual++;
    }
}

void imprimir_vetor(int *v, int b){
    int *p = v;
    int *fim = v + b;
    while (p < fim) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}



int main(){
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    char *a, *b;
    printf("Digite uma frase:\n> ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0'; 
    printf("Digite outra frase:\n> ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0'; 

    char *resultado;
    resultado = pont_string(a,b);
    if(resultado){
        printf("A segunda string ocorre dentro da primeira");
    } else {
        printf("A segunda string não ocorre dentro da primeira");
    }*/

   /*Ex.: 2
     int meu_vetor[10];
    int valor_preencher = 42;
    size_t tamanho_vetor = sizeof(meu_vetor) / sizeof(meu_vetor[0]);

    printf("--- Vetor Antes do Preenchimento ---\n");
    for (size_t i = 0; i < tamanho_vetor; i++) {
        printf("Vetor[%zu]: %d\n", i, meu_vetor[i]);
    }
    
    preencher_vetor(meu_vetor, tamanho_vetor, valor_preencher);

    printf("\n--- Vetor Depois do Preenchimento (Valor: %d) ---\n", valor_preencher);
    for (size_t i = 0; i < tamanho_vetor; i++) {
        printf("Vetor[%zu]: %d\n", i, meu_vetor[i]);
    }*/

   //Ex.: 3
    int a;
    printf("Digite um valor:\n> ");
    scanf("%d",&a);
    int vet[a];
    imprimir_vetor(vet,a);

   /*Ex.: 4
    int a, *b, **c, ***d;
    printf("Digite um valor inteiro:\n> ");
    scanf("%d",&a);
    b = &a;
    c = &b;
    d = &c;
    printf("Dobro: %d\nTriplo: %d\nQuádruplo: %d", 2 * (*b), 3 * (**c), 4 * (***d));*/

    return 0;
}