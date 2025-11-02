#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_ARQUIVO "binario.txt"

int copiar(FILE *origem, FILE *destino, const char *nome_origem) {
    int c;
    
    rewind(origem); 

    while ((c = fgetc(origem)) != EOF) {
        if (fputc(c, destino) == EOF) {
            fprintf(stderr, "ERRO: Falha de escrita no arquivo de destino.\n");
            return 0;
        }
    }
    
    if (ferror(origem)) {
        fprintf(stderr, "ERRO: Falha de leitura no arquivo de origem '%s'.\n", nome_origem);
        return 0;
    }
    
    return 1;
}

void converterBinario(FILE *arq, int n) {
    if (n > 1) {
        converterBinario(arq, n / 2);
    }
    fprintf(arq, "%d", n % 2); 
}

int main(){

   /*Ex.: 1
    char narq[100];
    FILE *arquivo;
    int cont = 0, caractere;
    
    printf("Digite o nome do arquivo:\n> ");
    if(fgets(narq, sizeof(narq), stdin) == NULL){
        fprintf(stderr, "Erro na leitura do arquivo.");
    }
    narq[strcspn(narq, "\n")] = '\0';

    arquivo = fopen(narq, "r");
    if(arquivo == NULL){
    fprintf(stderr, "Não foi possível abrir o arquivo.");
    }
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            cont++;
        }
    }
    if (cont > 0 || ferror(arquivo) == 0) {
        fseek(arquivo, -1, SEEK_END);
        if (fgetc(arquivo) != '\n' && ftell(arquivo) > 0) {
            cont++;
        } else if (cont == 0 && ftell(arquivo) > 0) {
             cont = 1;
        }
    }
    fclose(arquivo);
    printf("Número de linhas: %d", cont);*/

   /*Ex.: 2
    char narq1[100], narq2[100], narq3[100];
    FILE *arquivo1 = NULL;
    FILE *arquivo2 = NULL;
    FILE *arquivo3 = NULL;
    int s = 0;

    printf("Digite o nome do primeiro arquivo:\n> ");
    if(fgets(narq1, sizeof(narq1), stdin) == NULL)
        return fprintf(stderr, "Erro na leirura do arquivo");
    narq1[strcspn(narq1, "\n")] = '\0';

    printf("Digite o nome do segundo arquivo:\n> ");
    if(fgets(narq2, sizeof(narq2), stdin) == NULL)
        return fprintf(stderr, "Erro na leirura do arquivo");
    narq2[strcspn(narq2, "\n")] = '\0';

    printf("Digite o nome do arquivo a ser criado:\n> ");
    if(fgets(narq3, sizeof(narq3), stdin) == NULL)
        return fprintf(stderr, "Erro na leirura do arquivo");
    narq3[strcspn(narq3, "\n")] = '\0';

    arquivo3 = fopen(narq3, "w");
    if(arquivo3 == NULL){
        fprintf(stderr, "Não foi possível criar o arquivo");
    }

    arquivo1 = fopen(narq1, "r");
    if(arquivo1 == NULL)
        return fprintf(stderr, "Não foi possível abrir o primeiro arquivo");

    arquivo2 = fopen(narq2, "r");
    if(arquivo2 == NULL)
        return fprintf(stderr, "Não foi possível abrir o segundo arquivo");

    if(!copiar(arquivo1, arquivo3, narq1)){
        goto cleanup;
    }

    fputc('\n', arquivo3);

    if(!copiar(arquivo2, arquivo3, narq2)){
        goto cleanup;
    }
    s = 1;

cleanup:
    if(arquivo1 != NULL) fclose(arquivo1);
    if(arquivo2 != NULL) fclose(arquivo2);
    if(arquivo3 != NULL) fclose(arquivo3);

    if (s) {
        printf("\nConcatenação concluída.\n");
        return EXIT_SUCCESS;
    } else {
        printf("\nOcorreu um erro durante o processo. Concatenação falhou.\n");
        return EXIT_FAILURE;
    }*/

   /*Ex.: 3 
    char nome_origem[100], nome_destino[100];
    FILE *origem, *destino;
    int c;

    printf("Origem:\n> ");
    fgets(nome_origem, 100, stdin);
    nome_origem[strcspn(nome_origem, "\n")] = '\0';

    printf("Destino:\n> ");
    fgets(nome_destino, 100, stdin);
    nome_destino[strcspn(nome_destino, "\n")] = '\0';

    origem = fopen(nome_origem, "r");
    if (!origem) {
        fprintf(stderr, "Erro ao abrir origem.\n");
        return 1;
    }
    
    destino = fopen(nome_destino, "w");
    if (!destino) {
        fprintf(stderr, "Erro ao abrir destino.\n");
        fclose(origem);
        return 1;
    }

    while ((c = fgetc(origem)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A'); 
        }
        
        fputc(c, destino);
    }

    fclose(origem);
    fclose(destino);*/

   /*Ex.: 4
    char nome_arquivo[256], palavra_busca[256];
    char palavra_lida[100];
    FILE *arquivo;
    int contador = 0;

    printf("Nome do arquivo:\n> ");
    if (fgets(nome_arquivo, 256, stdin) == NULL) return 1;
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';

    printf("Palavra a buscar:\n> ");
    if (fgets(palavra_busca, 256, stdin) == NULL) return 1;
    palavra_busca[strcspn(palavra_busca, "\n")] = '\0';
    
    arquivo = fopen(nome_arquivo, "r");
    if (!arquivo) {
        fprintf(stderr, "Erro ao abrir o arquivo '%s'.\n", nome_arquivo);
        return 1;
    }

    while (fscanf(arquivo, "%s", palavra_lida) != EOF) {
        
        if (strcmp(palavra_lida, palavra_busca) == 0) {
            contador++;
        }
    }

    fclose(arquivo);

    printf("\nResultado:\n");
    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra_busca, contador);*/

   /*Ex.: 5
    FILE *arquivo;
    int numero;

    arquivo = fopen(NOME_ARQUIVO, "w");
    if (!arquivo) {
        fprintf(stderr, "Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("--- Conversor Decimal para Binario ---\n");
    printf("Digite numeros positivos (negativo para sair):\n");

    while (1) {
        printf("Numero: ");
        if (scanf("%d", &numero) != 1) {
             fprintf(stderr, "Entrada invalida. Encerrando.\n");
             break;
        }

        if (numero < 0) {
            break;
        }
        
        printf("Convertido: ");
        
        converter_e_salvar_binario(arquivo, numero);
        
        fprintf(arquivo, "\n");
        
        printf("\n");
    }

    fclose(arquivo);

    printf("\nProcesso finalizado.\n");
    printf("Os numeros binarios foram salvos em '%s'.\n", NOME_ARQUIVO);*/
     

    return 0;
}