#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Nicolas de Antoni Mendes

int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    int n;
    float a, b, c, geo, pon, harm, ari;
    printf("Digite três números inteiros e positivos:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("Digite o número da média desejada:\nGeométrica - 1\nPonderada - 2\nHarmônica - 3\nAritmética - 4\n");
    scanf("%d",&n);
    switch(n){
        case 1: geo = cbrt(a*b*c);
            printf("Valor da média geométrica: %f",geo);
            break;
        case 2: pon = ((a+2)*(b+3)*c)/6;
            printf("Valor da média ponderada: %f",pon);
            break;
        case 3: harm = 1/((1/a)+(1/b)+(1/c));
            printf("Valor da média harmônica: %f",harm);
            break;
        case 4: ari = (a+b+c)/3;
            printf("Valor da média aritmética: %.1f",ari);
            break;
            default: printf("O número selecionado não corresponde a nenhuma das média citadas !");
    }*/

   /*Ex.: 2
    int dia;
    printf("Digite um número inteiro de 1 a 7\n");
    scanf("%d",&dia);
    switch(dia){
        case 1: printf("Domingo");
        break;
        case 2: printf("Segunda-feira");
        break;
        case 3: printf("Terça-feira");
        break;
        case 4: printf("Quarta-feira");
        break;
        case 5: printf("Quinta-feira");
        break;
        case 6: printf("Sexta-feira");
        break;
        case 7: printf("Sábado");
        break;
    }*/

   /*Ex.: 3
    int n;
    float a, b, c;
    printf("Digite a operação matemática desejada:\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d",&n);
    switch(n) {
        case 1:
        printf("Digite dois valores para realizar a operação escolhida:\n");
        scanf("%f %f",&a,&b);
        c = a + b;
        printf("Resultado: %f\n",c);
        break;
        case 2:
        printf("Digite dois valores para realizar a operação escolhida:\n");
        scanf("%f %f",&a,&b);
        c = a - b;
        printf("Resultado: %f\n",c);
        break;
        case 3:
        printf("Digite dois valores para realizar a operação escolhida:\n");
        scanf("%f %f",&a,&b);
        c = a * b;
        printf("Resultado: %f\n",c);
        break;
        case 4:
        printf("Digite dois valores para realizar a operação escolhida:\n");
        scanf("%f %f",&a,&b);
        c = a / b;
        printf("Resultado: %f\n",c);
        break;
    }*/

   /*Ex.: 4
    float valorProduto, valorFinal;
    char estado[3];
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valorProduto);
    printf("Digite o estado de destino (MG, SP, RJ, MS): ");
    scanf("%s", estado);
    switch (estado[0]) {
        case 'M':
            if (estado[1] == 'G') {
                valorFinal = valorProduto * 1.07;
                printf("Valor final do produto com imposto (MG): R$ %.2f\n", valorFinal);
            } else if (estado[1] == 'S') {
                valorFinal = valorProduto * 1.08;
                printf("Valor final do produto com imposto (MS): R$ %.2f\n", valorFinal);
            } else {
                printf("Estado inválido.\n");
            }
            break;
        case 'S':
            if (estado[1] == 'P') {
                valorFinal = valorProduto * 1.12;
                printf("Valor final do produto com imposto (SP): R$ %.2f\n", valorFinal);
            } else {
                printf("Estado inválido.\n");
            }
            break;
        case 'R':
            if (estado[1] == 'J') {
                valorFinal = valorProduto * 1.15;
                printf("Valor final do produto com imposto (RJ): R$ %.2f\n", valorFinal);
            } else {
                printf("Estado inválido.\n");
            }
            break;
        default:
            printf("Estado inválido.\n");
    }*/

   /*Ex.: 5
    int n;
    printf("Digite um número:\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("Janeiro");
        break;
        case 2:printf("Fevereiro");
        break;
        case 3:printf("Março");
        break;
        case 4:printf("Abril");
        break;
        case 5:printf("Maio");
        break;
        case 6:printf("Junho");
        break;
        case 7:printf("Julho");
        break;
        case 8:printf("Agosto");
        break;
        case 9:printf("Setembro");
        break;
        case 10:printf("Outubro");
        break;
        case 11:printf("Novembro");
        break;
        case 12:printf("Dezembro");
        break;
    }*/


    return 0;
}
