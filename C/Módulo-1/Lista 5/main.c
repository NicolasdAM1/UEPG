#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Nicolas de Antoni Mendes
int main()
{
    setlocale(LC_ALL, "Portuguese");

   //Lista 5

   /*Ex.: 1
    float a;
    printf("Digite um n�mero:\n");
    scanf("%f",&a);
    if(a>20){
        printf("N�mero maior que 20\n");
    }
    if(a<20) {
        printf("N�mero menor que 20\n");
    }
    if(a==20) {
        printf("N�mero igual a 20\n");
    }*/

   /*Ex.: 2
    int a, b, soma;
    printf("Efetue a adi��o de dois n�meros:\n");
    scanf("%d+%d",&a,&b);
    soma = a + b;
    if(soma>10) {
        printf("%d",soma);
    }
    if(soma<10) {
        printf("Soma menor que 10");
    }
    if(soma==10) {
        printf("Soma igual a 10");
    }*/

   /*Ex.: 3
    int N;
    printf("Digite um n�mero:\n");
    scanf("%d",&N);
    if(N%2==0){
        printf("N�mero par");
    }else{
        printf("N�mero �mpar");
    }*/

   /*Ex.: 4
    int N;
    printf("Digite um n�mero:\n");
    scanf("%d",&N);
    if(N<0){printf("Negativo");}
    if(N==0){printf("Nulo");}
    if(N>0){printf("Positivo");}*/

   /*Ex.: 5
    float a, b, soma, s2, s3;
    printf("Efetue a soma de dois n�meros:\n");
    scanf("%f+%f",&a,&b);
    soma = a + b;
    if(soma>20){
        s2 = soma + 8;
        printf("Valor: %.1f",s2);
    }else{
        s3 = soma - 5;
        printf("Valor: %.1f",s3);
    }*/

   /*Ex.: 6
    double N, sr, pw;
    printf("Digite um n�mero:\n");
    scanf("%lf",&N);
    if(N>=0){
        sr = sqrt(N);
        printf("Valor: %lf",sr);
    }else{
        pw = N * N;
        printf("Valor: %.1lf",pw);
    }*/

   /*Ex.: 7
    int a, b;
    printf("Digite um n�mero:\n");
    scanf("%d",&a);
    printf("Digite um segundo n�mero:\n");
    scanf("%d",&b);
    if(a>b){printf("Maior: %d\nMenor: %d",a,b);
    }else{printf("Maior: %d\nMenor: %d",b,a);
    }*/

   /*Ex.: 8
    int n, d;
    printf("Digite o numerador:\n");
    scanf("%d",&n);
    printf("Agora o denominador:\n");
    scanf("%d",&d);
    if(n%d==0){
        printf("%d � divis�vel por %d",n,d);
    }else{printf("%d n�o � divis�vel por %d",n,d);
    }*/

   /*Ex.: 9
    int n;
    printf("Digite um n�mero:\n");
    scanf("%d",&n);
    if(n%3==0){printf("%d � m�ltiplo 3",n);
    }else{printf("%d n�o � m�ltiplo de 3",n);
    }*/

   /*Ex.: 10
    int n;
    printf("Digite um n�mero:\n");
    scanf("%d",&n);
    if(n%5==0){
        printf("%d � divis�vel por 5",n);
    }else{printf("%d n�o � divis�vel por 5",n);
    }*/

   /*Ex.: 11
    int n;
    printf("Digite um n�mero:\n");
    scanf("%d",&n);
    if(n%21==0){
        printf("%d � divis�vel por 3 e por 7",n);
    }else{printf("%d n�o � divis�vel por 3 e por 7",n);
    }*/

   /*Ex.: 12
    int n;
    printf("Digite um n�mero:\n");
    scanf("%d",&n);
    if(n%10==0){
            printf("%d � divis�vel por 10\n",n);
            if(n%5==0){printf("%d � divis�vel por 5\n",n);}
            if(n%2==0){printf("%d � divis�vel por 2\n",n);}
    }else{
    if(n%5==0){printf("%d � divis�vel por 5\n",n);}
    if(n%2==0){printf("%d � divis�vel por 2\n",n);}
    }
    if(n%2!=0){printf("%d n�o � divis�vel por 2\n",n);}
    if(n%5!=0){printf("%d n�o � divis�vel por 5\n",n);}
    if(n%10!=0){printf("%d n�o � divis�vel por 10\n",n);}*/

   /*Ex.: 13
   float SB, prest;
    printf("Valor do sal�rio bruto:\n");
    scanf("%f",&SB);
    printf("Valor da presta��o:\n");
    scanf("%f",&prest);
    if(prest <=SB * 0.3){printf("A presta��o pode ser concedida");
    }else{printf("O empr�stimo n�o pode ser efetuado");
    }*/

   /*Ex.: 14
    int A, B, C, D, maior, menor;
    printf("Digite quatro valores quaisquer:\n");
    scanf("%d %d %d %d",&A,&B,&C,&D);
    maior = menor = A;
    if(B > maior) maior = B;
    if(C > maior) maior = C;
    if(D > maior) maior = D;
    if(B < menor) menor = B;
    if(C < menor) menor = C;
    if(D < menor) menor = D;
    printf("Maior: %d\nMenor: %d",maior, menor);*/

   /*Ex.: 15
    int A, B, C, maior, meio, menor;
    printf("Digite tr�s n�meros quaisquer:\n");
    scanf("%d %d %d",&A,&B,&C);
    maior = menor = meio = A;
    if(B > maior) maior = B;
    if(C > maior) maior = C;
    if(maior > A && A > menor) meio = A;
    if(maior > B && B > menor) meio = B;
    if(maior > C && C > menor) meio = C;
    if(B < menor) menor = B;
    if(C < menor) menor = C;
    printf("Ordem crescente: %d<%d<%d",menor,meio,maior);*/

   /*Ex.: 16
    int A, B, C, menor, meio, maior;
    printf("Digite tr�s n�meros quaisquer:\n");
    scanf("%d %d %d",&A,&B,&C);
    menor = meio = maior = A;
    if(B > maior) maior = B;
    if(C > maior)maior = C;
    if(maior > A && A > menor) meio = A;
    if(maior > B && B > menor) meio = B;
    if(maior > C && C > menor) meio = C;
    if(B < menor) menor < B;
    if(C < menor) menor < C;
    printf("Ordem decrescente: %d>%d>%d",maior,meio,menor);*/

   /*Ex.: 17
    float n;
    printf("Digite um n�mero:\n");
    scanf("%f",&n);
    if(20 <= n && n <= 90){printf("O n�mero est� compreendido entre 20 e 90");
    }else{printf("O n�mero n�o est� na faixa de valores entre 20 e 90");
    }*/

   /*Ex.: 18
    int n;
    printf("Digite um n�mero:\n");
    scanf("%d",&n);
    if(500 <= n && n <= 1000){printf("O n�mero est� no intervalo entre 500 e 1000\n");
    }else{
    printf("O n�mero n�o est� entre 500 e 1000\n");
    if(n==5){printf("N�mero igual a %d\n",n);}
    if(n==200){printf("N�mero igual a %d\n",n);}
    if(n==400){printf("N�mero igual a %d\n",n);}
    if(n!=5){printf("N�mero diferente de 5\n");}
    if(n!=200){printf("N�mero diferente de 200\n");}
    if(n!=400){printf("N�mero diferente de 400\n");}
    }*/

   /*Ex.: 19
    double a, b, sr, pw;
    printf("Digite dois n�meros:\n");
    scanf("%lf %lf",&a,&b);
    if(a>b){
        sr = sqrt(a);
        pw = b * b;
        printf("Valores: %lf e %lf\n",sr,pw);
    }
    if(b>a){
        sr = sqrt(b);
        pw = a * a;
        printf("Valores: %lf e %lf\n",sr,pw);
    }*/

   /*Ex.: 20
    float peso, altura, IMC;
    printf("C�lculo de IMC\nPeso (em Kg):\n");
    scanf("%f",&peso);
    printf("Altura (em metros):\n");
    scanf("%f",&altura);
    IMC=peso/(altura*altura);
    printf("%f\n",IMC);
    if(IMC < 20){printf("Abaixo do peso");}
    if(20 <= IMC && IMC < 25){printf("Peso normal");}
    if(25 <= IMC && IMC < 30){printf("Sobrepeso");}
    if(30 <= IMC && IMC < 40){printf("Obesidade");}
    if(40 <= IMC){printf("Obesidade m�rbida");}*/

   /*Ex.: 21
    float sm, cred;
    printf("Informe o saldo m�dio:\n");
    scanf("%f",&sm);
    if(sm <= 500){printf("Nenhum cr�dito ser� concedido\n");}
    if(501 < sm && sm <= 1000)cred = sm * 0.3;
    if(1001 < sm && sm <= 3000)cred = sm * 0.4;
    if(3001 <= sm)cred = sm * 0.5;
    printf("Valor de cr�dito: %.2f",cred);*/


    return 0;
}
