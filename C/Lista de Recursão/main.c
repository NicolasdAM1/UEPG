#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int soma(int n){
    if(n == 1)
        return 1;
    return n + soma(n-1);
}

int imprimirCrescentes(int nn){
    if(nn < 0)
        return 0;
    imprimirCrescentes(nn-1);
    printf("%d\n",nn);

}

int imprimirDecrescente(int nnd){
    if(nnd < 0)
        return 0;
    printf("%d\n",nnd);
    return imprimirDecrescente(nnd-1);
}

int multi(int x, int y){
    if(y == 0)
        return 0;
    return x + multi(x, y-1);
//    return x + multi(x,y-1);
}

int soma_sucessiva(int x, int y) {
    if (y == 0)
        return 0;
    return x + soma_sucessiva(x, y - 1);
}

int fatorial(int nf){
    if(nf == 0 || nf == 1)
        return 1;
    return nf * fatorial(nf-1);
}

int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int inverter_aux(int n, int invertido) {
    if (n == 0) {
        return invertido;
    }
    return inverter_aux(n / 10, (invertido * 10) + (n % 10));
}
int inverter_numero(int n) {
    return inverter_aux(n, 0);
}


int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    int n;
    printf("Digite um número inteiro positivo:\n> ");
    scanf("%d",&n);
    printf("%d\n", soma(n));
    return 0;*/

   /*Ex.: 2
    int nn;
    printf("Digite um número inteiro positivo:\n> ");
    scanf("%d",&nn);
    printf("Números de 0 até %d:\n",nn);
    imprimirCrescentes(nn);*/

   /*Ex.: 3
    int nnd;
    printf("Digite um número inteiro positivo:\n> ");
    scanf("%d",&nnd);
    imprimirDecrescente(nnd);*/

   /*Ex.: 6
    int x, y, resultado;
    printf("Digite o valor de x e de y\n> ");
    scanf("%d %d",&x, &y);
    resultado = multi(x,y);
    printf("Resultado: %d",resultado);*/

   /*Ex.: 7
    int numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    int resultado = soma_sucessiva(numero1, numero2);
    printf("O resultado de %d * %d é: %d\n", numero1, numero2, resultado);*/

   /*Ex.: 8
    int nf;
    printf("Digite o número que será fatorado:\n> ");
    scanf("%d",&nf);
    fatorial(nf);
    printf("%d",fatorial(nf));*/

   /*Ex.: 9
    int n;
    printf("Digite o número desejado:\n> ");
    scanf("%d",&n);
    fibonacci(n);
    printf("%d",fibonacci(n));*/

   //Ex.: 10
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    int numero_invertido = inverter_numero(numero);
    printf("O número invertido é: %d\n", numero_invertido);


    return 0;
}
