#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

   //Ex.: 1
    /*int vet[6];
    printf("Digite 6 valores:\n");
    for(int a = 0; a < 6; a++){
        scanf("%d",&vet[a]);
    }
    for(int a = 0; a < 6; a++){
        printf("%d\n",vet[a]);
    }*/

   /*Ex.: 2
    int vet[6];
    printf("Digite 6 valores:\n");
    for(int a = 0; a < 6; a++){
        scanf("%d",&vet[a]);
    }
    for(int a = 6; a >= 0; a--){
        printf("%d\n",vet[a]);
    }*/

   /*Ex.: 3
    int vet[5];
    float m;
    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&vet[i]);
        m = m + vet[i];
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n",vet[i]);
    }
    printf("Média dos valores: %f", m / 5.0);*/

   /*Ex.: 4
    int A[6] = {1,0,5,-2,-5,7};
    int s;
    s = A[0] + A[1] + A[5];
    A[3] = 100;
    printf("Soma da 1ª, 2ª e 6ª posição: %d\n",s);
    for(int a = 0; a < 6; a++){
        printf("%d\n",A[a]);
    }*/

   /*Ex.: 6
    int vet[10], p = 0;
    printf("Digite 10 números:\n");
    for(int a = 0; a < 10; a++){
        scanf("%d",&vet[a]);
        if(vet[a]%2==0){
            p++;
        }
    }
    printf("Número(s) par(es) armazenado(s): %d",p);*/

   /*Ex.: 7
    int X[10];
    int menor, maior;
    printf("Digite 10 valores:\n");
    scanf("%d",&X[0]);
    menor = maior = X[0];
    for(int a = 1; a < 10; a++){
        scanf("%d",&X[a]);
        if(X[a] > maior){maior = X[a];}
        if(X[a] < menor){menor = X[a];}
    }
    printf("Menor valor: %d\n",menor);
    printf("Maior valor: %d\n",maior);*/

   /*Ex.: 8
    int vet[10];
    int n = 0, s = 0;
    printf("Digite 10 valores: \n");
    for(int a = 0; a < 10; a++){
        scanf("%d",&vet[a]);
        if(vet[a] < 0){n++;}
        if(vet[a] >= 0){s = s + vet[a];}
    }
    printf("Quantidade de números negativos: %d\n",n);
    printf("Soma dos números positivos: %d",s);*/

   /*Ex.: 9
    int A[10], B[10];
    printf("Digite 10 valores para A:\n");
    for(int a = 0; a < 10; a++){
        scanf("%d",&A[a]);
    }
    printf("Digite 10 valores para B:\n");
    for(int b = 0; b < 10; b++){
        scanf("%d",&B[b]);
    }
    printf("Valores de C:\n");
    int C[10];
    for(int c = 0; c < 10; c++){
        C[c] = A[c] - B[c];
        printf("%d\n",C[c]);
    }*/

   /*Ex.: 10
    int vet[100];
    int n = 0;
    for(int a = 0; a < 100;){
        if(n%7!=0){
            vet[a] = n;
            a++;
        }
        n++;
    }
    for(int a = 0; a < 100; a++){
        printf("%d\n",vet[a]);
    }*/

   /*Ex.: 11
    float a[20], b[20];
    int n;
    printf("Quantos números deseja inserir (máx 20)?\n ");
    scanf("%d", &n);
    printf("Digite os %d números reais:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        b[i] = a[i] * a[i];
    }
    printf("\nNúmero: Original\tQuadrado\n");
    for (int i = 0; i < n; i++) {
        printf("%f\t\t%f\n", a[i], b[i]);
    }*/







    return 0;
}
