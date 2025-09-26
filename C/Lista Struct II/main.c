#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

struct atleta {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
    };

void exibir_atleta(struct atleta a) {
    printf("Nome: %s\n", a.nome);
    printf("Esporte: %s\n", a.esporte);
    printf("Idade: %d\n", a.idade);
    printf("Altura: %.2f m\n", a.altura);
}

struct data {
    int dia;
    int mes;
    int ano;
};

const int dias_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int eh_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}
    long long int contar_dias(struct data d) {
    long long int dias_totais = d.ano * 365 + d.dia;
    dias_totais += d.ano / 4 - d.ano / 100 + d.ano / 400;
    for (int i = 1; i < d.mes; i++) {
        dias_totais += dias_no_mes[i];
    }
    if (d.mes > 2 && eh_bissexto(d.ano)) {
        dias_totais++;
    }

    return dias_totais;
    }

int main()
{
 setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    struct pessoa {
    char nome[50];
    int dia, mes, ano;
    };
    struct pessoa p[6];
    int mais_velha_idx = 0;
    int mais_nova_idx = 0;

    for (int i = 0; i < 6; i++) {
        printf("--- Pessoa %d ---\n", i + 1);
        printf("Digite o nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';
        printf("Digite a data de nascimento (dia mes ano): ");
        scanf("%d %d %d", &p[i].dia, &p[i].mes, &p[i].ano);
        limpar_buffer();
    }
    for (int i = 1; i < 6; i++) {
        if (p[i].ano < p[mais_velha_idx].ano) {
            mais_velha_idx = i;
        } else if (p[i].ano > p[mais_nova_idx].ano) {
            mais_nova_idx = i;
        } else if (p[i].ano == p[mais_velha_idx].ano) {
            if (p[i].mes < p[mais_velha_idx].mes) {
                mais_velha_idx = i;
            } else if (p[i].mes > p[mais_nova_idx].mes) {
                mais_nova_idx = i;
            } else if (p[i].mes == p[mais_velha_idx].mes) {
                if (p[i].dia < p[mais_velha_idx].dia) {
                    mais_velha_idx = i;
                } else if (p[i].dia > p[mais_nova_idx].dia) {
                    mais_nova_idx = i;
                }
            }
        }
    }

    printf("\n--- Resultados ---\n");
    printf("A pessoa mais velha é: %s\n", p[mais_velha_idx].nome);
    printf("A pessoa mais nova é: %s\n", p[mais_nova_idx].nome);*/

   /*Ex.: 2
    struct atleta {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
    };
    struct atleta competidores[5];
    int mais_velho_idx = 0;
    int mais_alto_idx = 0;

    for (int i = 0; i < 5; i++) {
        printf("--- Atleta %d ---\n", i + 1);

        printf("Nome: ");
        fgets(competidores[i].nome, sizeof(competidores[i].nome), stdin);
        competidores[i].nome[strcspn(competidores[i].nome, "\n")] = '\0';

        printf("Esporte: ");
        fgets(competidores[i].esporte, sizeof(competidores[i].esporte), stdin);
        competidores[i].esporte[strcspn(competidores[i].esporte, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &competidores[i].idade);

        printf("Altura (em metros, ex: 1.85): ");
        scanf("%f", &competidores[i].altura);

        limpar_buffer();
    }
    for (int i = 1; i < 5; i++) {
        if (competidores[i].idade > competidores[mais_velho_idx].idade) {
            mais_velho_idx = i;
        }
        if (competidores[i].altura > competidores[mais_alto_idx].altura) {
            mais_alto_idx = i;
        }
    }
    printf("\n--- Resultados ---\n");
    printf("O atleta mais velho e: %s, com %d anos.\n", competidores[mais_velho_idx].nome, competidores[mais_velho_idx].idade);
    printf("O atleta mais alto e: %s, com %.2f metros de altura.\n", competidores[mais_alto_idx].nome, competidores[mais_alto_idx].altura);*/

   /*Ex.: 3
    struct atleta competidores[5];

    for (int i = 0; i < 5; i++) {
        printf("--- Atleta %d ---\n", i + 1);

        printf("Nome: ");
        fgets(competidores[i].nome, sizeof(competidores[i].nome), stdin);
        competidores[i].nome[strcspn(competidores[i].nome, "\n")] = '\0';

        printf("Esporte: ");
        fgets(competidores[i].esporte, sizeof(competidores[i].esporte), stdin);
        competidores[i].esporte[strcspn(competidores[i].esporte, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &competidores[i].idade);

        printf("Altura (em metros, ex: 1.85): ");
        scanf("%f", &competidores[i].altura);

        limpar_buffer();
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (competidores[j].idade < competidores[j + 1].idade) {
                struct atleta temp = competidores[j];
                competidores[j] = competidores[j + 1];
                competidores[j + 1] = temp;
            }
        }
    }

    printf("\n--- Atletas ordenados por idade (do mais velho para o mais novo) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\n--- Atleta %d ---\n", i + 1);
        exibir_atleta(competidores[i]);
    }*/

   /*Ex.: 4
    struct data data1, data2;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
    long long int total_dias1 = contar_dias(data1);
    long long int total_dias2 = contar_dias(data2);
    long long int diferenca = total_dias2 - total_dias1;
    if (diferenca < 0) {
        diferenca = -diferenca;
    }
    printf("\nO numero de dias entre as duas datas e: %lld\n", diferenca);*/

   //Ex.: 6




    return 0;
}
