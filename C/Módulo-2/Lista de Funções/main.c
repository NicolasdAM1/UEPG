#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int ex1(int a, int b, int c){
    if(a <= 1){
        return 0;
    }
    int soma = 0;
    int vb, vc;
    if(b < c){
        vb = b;
        vc = c;
    }else{
        vb = c;
        vc = b;
    }
    for(int i = vb; i <= vc; i++){
        if(i%a==0){
            soma += i;
        }
    }
    printf("A soma dos números inteiros inteiros do intervalo [%d,%d] divisíveis por %d é igual a: %d",vb,vc,a,soma);
}

int convertor_segundos(int h, int min, int s){
    int stotal = 0;
    stotal += (h * 3600) + (min * 60) + s;
    printf("Total de segundos: %d",stotal);
}

int ex3(int n4d){
    int p2d, s2d, nn, nn2;
    p2d = n4d / 100;
    s2d = n4d % 100;
    nn = p2d + s2d;
    nn2 = nn * nn;
    if(nn2 == n4d){
        printf("1");
    }else{
        printf("0");
    }
}

int selecionar_media(float p1, float p2, float p3, char m){
    float md = 0.0;
    if(m == 'A' || m == 'a'){
        md += (p1 + p2 + p3) / 3.0;
        printf("%.2f",md);
        return 1;
    }else if (m == 'P' || m == 'p'){
        md += ((p1 * 5) + (p2 * 3) + (p3 * 2)) / 10.0;
        printf("%.2f",md);
        return 1;
    }else{
        printf("Nenhuma média foi selecionada;");
        return 0;
    }
}

int fatorial(int n){
    int nfatorial = 1;
    for(int i = 2; i <= n; i++){
        nfatorial = nfatorial * i;
    }
    printf("O Fatorial de %d é: %d",n,nfatorial);

}

int verificador_de_n_primo(int num){
    if(num <= 1){
        return -1;
    }
    for(int i = 2; i * i <= num; i++){
        if(num%i==0){
            return -1;
        }
    }
    return 0;
}

int media(int v1, int v2, int v3){
    float mdv = 0.0;
    mdv += (v1 + v2 + v3) / 3.0;
    printf("Média dos valores: %.2f",mdv);
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    int a, b, c;
    printf("Digite o valor de a (número inteiro maior que 1):\n> ");
    scanf("%d",&a);
    if(a <=1){
        printf("Número inválido.\n");
        return 0;
    }
    printf("Digite o valor de b:\n>");
    scanf("%d",&b);
    printf("Digite o valor de c:\n>");
    scanf("%d",&c);
    ex1(a,b,c);*/

   /*Ex.: 2
    int h, min, s;
    printf("Digite um horário (h:min:s):\n> ");
    scanf("%d:%d:%d",&h,&min,&s);
    convertor_segundos(h,min,s);*/

   /*Ex.: 3
    int n4d;
    printf("Digite um número de 4 dígitos:\n> ");
    scanf("%d",&n4d);
    if(n4d < 1000 || n4d > 9999){
        printf("Número inválido.");
        return 0;
    }
    ex3(n4d);*/

   /*Ex.: 4
    float p1, p2, p3;
    char m;
    printf("Digite as três notas em sua respectiva ordem:\n> ");
    scanf("%f %f %f",&p1,&p2,&p3);
    while (getchar() != '\n');
    printf("Selecione a média desejada ('A' para aritmética ou 'P' para ponderada):\n> ");
    scanf("%c",&m);
    selecionar_media(p1,p2,p3,m);*/

   /*Ex.: 5
    int n;
    int nfatorial;
    printf("Digite um número inteiro positivo: ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Número inválido");
        return -1;
    }
    fatorial(n);*/

   /*Ex.: 6
     int num;
     printf("Digite um valor inteiro positivo:\n> ");
     scanf("%d",&num);
     verificador_de_n_primo(num);
     int resultado = verificador_de_n_primo(num);
     if(resultado == -1){
        printf("O número %d não é primo",num);
     }
     if(resultado == 0){
        printf("O número %d é primo",num);
     }*/

   /*Ex.: 7
     int v1, v2, v3;
     printf("Digite três números inteiros positivos:\n> ");
     scanf("%d %d %d",&v1,&v2,&v3);
     media(v1,v2,v3);*/

    return 0;
}
