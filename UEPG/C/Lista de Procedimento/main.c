#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>


void verificador_de_paridade(int number){
    if(number % 2 == 0){
        printf("O número %d é par.", number);
    }else{
        printf("O número %d é ímpar.", number);
    }
}

void meses(int m){
    switch(m){
        case 1:
            printf("Janeiro: 31 dias");
            break;
        case 2:
            printf("Fevereiro: 28 dias (29 em anos bissextos)");
            break;
        case 3:
            printf("Março: 31 dias");
            break;
        case 4:
            printf("Abril: 30 dias");
            break;
        case 5:
            printf("Maio: 31 dias");
            break;
        case 6:
            printf("Junho: 30 dias");
            break;
        case 7:
            printf("Julho: 31 dias");
            break;
        case 8:
            printf("Agosto: 31 dias");
            break;
        case 9:
            printf("Setembro: 30 dias");
            break;
        case 10:
            printf("Outubro: 31 dias");
            break;
        case 11:
            printf("Novembro: 30 dias");
            break;
        case 12:
            printf("Dezembro: 31 dias");
            break;
        default:
            printf("Erro.\nDigite um número válido (1 a 12)");
            break;
    }
}

void triangulo_numerico(int n){
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

void retangulo(int i, int j){

}

float x1, y, x2, y2, x3, y3, x4, y4;
float p;
void coordenadas(){
    printf("Digite as coordenadas (X,Y) do primeiro ponto: ");
    scanf("%f,%f",&x1,&y);
    printf("Digite as coordenadas (X,Y) do segundo ponto: ");
    scanf("%f,%f",&x2,&y2);
    printf("Digite as coordenadas (X,Y) do terceiro ponto: ");
    scanf("%f,%f",&x3,&y3);
    printf("Digite as coordenadas (X,Y) do quarto ponto: ");
    scanf("%f,%f",&x4,&y4);
}
float calcularDistancia(float ax, float ay, float bx, float by) {
    return sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
}
void calcularPerimetro() {
    float lado1 = calcularDistancia(x1, y, x2, y2);
    float lado2 = calcularDistancia(x2, y2, x3, y3);
    p = 2 * (lado1 + lado2);
}
void imprimirPerimetro(){
    printf("Perímetro do retângulo: %.2f\n",p);
}
void conversorSegundos(tempoemsegundo){
    int horas = tempoemsegundo / 3600;
    int minutos = (tempoemsegundo % 3600) / 60;
    int segundos = (tempoemsegundo % 3600) % 60;
    printf("Tempo total: %dh, %dmin e %ds",horas,minutos,segundos);
}

void mostrar_tabela_multiplicacao(int n) {
    if (n < 1 || n > 9) {
        printf("Erro. O numero deve estar no intervalo de 1 a 9.\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

void gerarTrianguloLateral(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void desenhar_retangulo(int linhas, int colunas) {
        for (int i = 1; i <= linhas; i++) {
            for (int j = 1; j <= colunas; j++) {
                if ((i == 1 || i == linhas) && (j == 1 || j == colunas)) {
                    printf("+");
                }
                else if (i == 1 || i == linhas) {
                    printf("-");
                }
                else if (j == 1 || j == colunas) {
                    printf("|");
                }
                else {
                    printf(" ");
            }
        }
        printf("\n");
    }
}
void criar_retangulo() {
    int linhas, colunas;

    printf("Digite o numero de linhas para o retangulo: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas para o retangulo: ");
    scanf("%d", &colunas);

    desenhar_retangulo(linhas, colunas);
}


int main()
{
    setlocale(LC_ALL,"Portuguese");

    /*Ex.: 1
     int a;
     printf("Digite um valor inteiro:\n");
     scanf("%d",&a);
     verificador_de_paridade(a);*/

    /*Ex.: 2
     int a;
     printf("Digite um número de 1 a 12:\n> ");
     scanf("%d",&a);
     meses(a);*/

    /*Ex.: 3
      int linhas;
      printf("Digite o número de linhas para o triângulo numérico: ");
      scanf("%d",&linhas);
      triangulo_numerico(linhas);*/

     /*Ex.: 4
      criar_retangulo();*/

     //Ex.: 5
      /*coordenadas();
      calcularPerimetro();
      imprimirPerimetro();*/

     /*Ex.: 6
      int s;
      printf("Digite o total de segundos a ser convertido:\n> ");
      scanf("%d",&s);
      conversorSegundos(s);*/

     /*Ex.: 7
      int numero;
      printf("Digite um numero inteiro de 1 a 9: ");
      scanf("%d", &numero);
      mostrar_tabela_multiplicacao(numero);*/

     /*Ex.: 8
      int valor_n;
      printf("Digite um valor inteiro para n: ");
      scanf("%d", &valor_n);
      gerarTrianguloLateral(valor_n);*/

    return 0;
}
