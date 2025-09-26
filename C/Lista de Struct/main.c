#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    struct Pessoa{
        char nome[50];
        int idade;
        char endereco[100];
    };

    struct Pessoa P1;
    printf("Digite o nome: ");
    fgets(P1.nome, sizeof(P1.nome), stdin);
    P1.nome[strcspn(P1.nome, "\n")] = 0;
    printf("Digite a idade: ");
    scanf("%d",&P1.idade);
    while(getchar() != '\n');
    printf("Digite o endereço: ");
    fgets(P1.endereco, sizeof(P1.endereco), stdin);
    P1.endereco[strcspn(P1.endereco, "\n")] = 0;
    printf("Nome: %s\n",  P1.nome);
    printf("Idade: %d\n", P1.idade);
    printf("Endereço: %s\n", P1.endereco);*/

   /*Ex.: 2
    struct Ponto{
        double X;
        double Y;
    };

    struct Ponto dponto;
    double d;
    printf("Digite a coordenada X do ponto: ");
    scanf("%lf",&dponto.X);
    printf("Digite a coordenada Y do ponto: ");
    scanf("%lf",&dponto.Y);
    d = sqrt(pow(dponto.X, 2) + pow(dponto.Y, 2));
    printf("A distância do ponto (%.2lf;%.2lf) à origem (0,0) é: %.2lf\n",dponto.X,dponto.Y,d);*/

   /*Ex.: 3
    struct Ponto{
        double X;
        double Y;
    };
    double d;
    struct Ponto ponto1, ponto2;
    printf("Digite a coordenada X do primeiro ponto: ");
    scanf("%lf",&ponto1.X);
    printf("Digite a coordenada Y do primeiro ponto: ");
    scanf("%lf",&ponto1.Y);
    printf("Digite a coordenada X do segundo ponto: ");
    scanf("%lf",&ponto2.X);
    printf("Digite a coordenada Y do segunto ponto: ");
    scanf("%lf",&ponto2.Y);
    d = sqrt(pow((ponto2.X - ponto1.X), 2) + pow((ponto2.Y - ponto1.X), 2));
    printf("A distância entre os pontos (%.2lf;%.2lf) e (%.2lf;%.2lf) é: %.2lf\n",ponto1.X,ponto1.Y,ponto2.X,ponto2.Y,d);*/

   /*Ex.: 4
     struct Ponto{
        double X;
        double Y;
     };
     struct Retangulo{
        struct Ponto supEsq;
        struct Ponto infDir;
     };

     struct Retangulo dretangulo;
     double largura, altura, area, perimetro, diagonal;
     printf("PONTO SUPERIOR ESQUERDO:\n");
     printf("Coordenada X: ");
     scanf("%lf",&dretangulo.supEsq.X);
     printf("Coordenada Y: ");
     scanf("%lf",&dretangulo.supEsq.Y);
     printf("PONTO INFERIOR DIREITO:\n");
     printf("Coordenada X: ");
     scanf("%lf",&dretangulo.infDir.X);
     printf("Coordenada Y: ");
     scanf("%lf",&dretangulo.infDir.Y);
     largura = fabs(dretangulo.infDir.X - dretangulo.supEsq.X);
     altura = fabs(dretangulo.supEsq.Y - dretangulo.infDir.Y);
     area = largura * altura;
     perimetro = 2 * (largura + altura);
     diagonal = sqrt(pow(largura, 2) + pow(altura, 2));
     printf("====== DADOS DO RETÂNGULO ======\n");
     printf("Ponto Superior Esquerdo: (%.2lf;%.2lf)\n",dretangulo.supEsq.X,dretangulo.supEsq.Y);
     printf("Ponto Inferior Direito: (%.2lf;%.2lf)\n",dretangulo.infDir.X,dretangulo.infDir.Y);
     printf("Largura: %.2lf\nAltura: %.2lf\nPerímetro: %.2lf\nÁrea: %.2lf\nDiagonal: %.2lf\n", largura,altura,perimetro,area,diagonal);*/

    /*Ex.: 5
      struct Ponto{
        double X;
        double Y;
     };
     struct Retangulo{
        struct Ponto supEsq;
        struct Ponto infDir;
     };
     struct Retangulo dretangulo;
     struct Ponto dponto;
     bool dentro = false;
     double minX, maxX, minY, maxY;


     printf("PONTO SUPERIOR ESQUERDO:\n");
     printf("Coordenada X: ");
     scanf("%lf",&dretangulo.supEsq.X);
     printf("Coordenada Y: ");
     scanf("%lf",&dretangulo.supEsq.Y);
     printf("PONTO INFERIOR DIREITO:\n");
     printf("Coordenada X: ");
     scanf("%lf",&dretangulo.infDir.X);
     printf("Coordenada Y: ");
     scanf("%lf",&dretangulo.infDir.Y);
     printf("Digite as coordenadas do PONTO:\n");
     printf("Coordenada X: ");
     scanf("%lf",&dponto.X);
     printf("Coordenada Y: ");
     scanf("%lf",&dponto.Y);
     if (dretangulo.supEsq.X < dretangulo.infDir.X) {
        minX = dretangulo.supEsq.X;
        maxX = dretangulo.infDir.X;
     } else {
        minX = dretangulo.infDir.X;
        maxX = dretangulo.supEsq.X;
     }
     if (dretangulo.supEsq.Y < dretangulo.infDir.Y) {
        minY = dretangulo.supEsq.Y;
        maxY = dretangulo.infDir.Y;
     } else {
        minY = dretangulo.infDir.Y;
        maxY = dretangulo.supEsq.Y;
     }
     if (dponto.X >= minX && dponto.X <= maxX &&
        dponto.Y >= minY && dponto.Y <= maxY) {
        dentro = true;
     }
     if (dentro) {
        printf("O ponto ESTÁ DENTRO do retângulo.\n");
     } else {
        printf("O ponto NÃO ESTÁ DENTRO do retângulo.\n");
     }*/

    /*Ex.: 6
     typedef struct aluno {
        int nm;
        char nome[50];
        float notas[3];
     } alunos;

     alunos turma[5];
     int mvp = 0;
     float md, mmd = -1.0;

     for(int i = 0; i < 5; i++){
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Digite o número de matrícula do aluno: ");
        scanf("%d",&turma[i].nm);
        getchar();
        printf("Digite o nome do aluno: ");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = 0;
        printf("Digite a nota da primeira, da segunda e da terceira prova:\n ");
        scanf("%f %f %f", &turma[i].notas[0], &turma[i].notas[1], &turma[i].notas[2]);
     }
     for(int i = 0; i < 5; i++){
        md = (turma[i].notas[0] + turma[i].notas[1] + turma[i].notas[2]) / 3.0;
        if (md > mmd) {
            mmd = md;
            mvp = i;
        }
     }
     printf("Nome: %s\n", turma[mvp].nome);
     printf("Notas: %.2f, %.2f, %.2f\n", turma[mvp].notas[0], turma[mvp].notas[1], turma[mvp].notas[2]);*/

    /*Ex.: 7
     typedef struct {
         int h;
         int min;
         int s;
     } hora;
     hora horario[5];
     int mhora = 0;
     for(int i = 0; i < 5; i++){
        printf("Digite um horário (h:min:s): ", i + 1);
        scanf("%d:%d:%d",&horario[i].h,&horario[i].min,&horario[i].s);
     }
     for (int i = 1; i < 5; i++) {
         if (horario[i].h > horario[mhora].h) {
            mhora = i;
         } else if (horario[i].h == horario[mhora].h) {
             if (horario[i].min > horario[mhora].min) {
                mhora = i;
             } else if (horario[i].min == horario[mhora].min) {
                 if (horario[i].s > horario[mhora].s) {
                    mhora = i;
                 }
             }
         }
     }
     printf("%02d:%02d:%02d\n", horario[mhora].h, horario[mhora].min, horario[mhora].s);*/





    return 0;
}
