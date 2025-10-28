#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    int m[3][3], i, j;
    int menor;
    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    menor = m[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] < menor) {
                menor = m[i][j];
            }
        }
    }
    printf("Menor valor da matriz: %d",menor);*/

   /*Ex.: 2
    int m[4][4], i, j;
    int maior, im, jm;
    printf("Digite os valores da matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    maior = m[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(m[i][j] > maior){
                maior = m[i][j];
                im = i;
                jm = j;
            }
        }
    }
    printf("Maior valor da matriz: %d\n",maior);
    printf("Posição do maior valor: [%d][%d]",im,jm);*/

   /*Ex.: 3
    int matriz[5][5], i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    printf("Matriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }*/

   /*Ex.: 4
    int m[4][4], i , j;
    int d = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
            if(m[i][j] < 10){
                d++;
            }
        }
    }
    printf("%d valor(es) maior(es) que 10",d);*/

   /*Ex.: 5
    int m[4][4], i , j;
    int n = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
            if(m[i][j] < 0){
                n++;
            }
        }
    }
    printf("%d valor(es) negativo(s)",n);*/

   /*Ex.: 6
    int m[3][3], i, j;
    int s = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
            if(i == j){
                s = s + m[i][j];
            }
        }
    }
    printf("Soma dos valores da diagonal principal: %d",s);*/

   /*Ex.: 7
    int m[3][3], i, j;
    int s = 0;
    printf("Digite os valores da matriz 3x3: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                if(i + j == 2){
                    s = s + m[i][j];
                }
        }
    }
    printf("Soma da diagonal secundária: %d",s);*/

   /*Ex.: 8
    int A[10][10], i, j;
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(i < j) {
                A[i][j] = 2*i + 7*j - 2;
            } else if(i == j) {
                A[i][j] = 3*i*i - 1;
            } else {
                A[i][j] = 4*i*i*i + 5*j*j + 1;
            }
        }
    }
    printf("Matriz A[10][10]:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }*/


    return 0;
}
