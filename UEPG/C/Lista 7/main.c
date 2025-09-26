#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    int a = 0;
    while(a<=50){
        printf("%d\n",a);
        a++;
    }*/

   /*Ex.: 2
    int a = 2;
    while(a<100){
        printf("%d\n",a);
        a++;
    }*/

   /*Ex.: 3
    int a = 100;
    while(a>=1){
        printf("%d\n",a);
        a--;
    }*/

   /*Ex.: 4
    int a = 100;
    while(a<=200){
        printf("%d\n",a);
        a++;
    }*/

   /*Ex.: 5
    int a = 200;
    while(a>=100){
        printf("%d\n",a);
        a--;
    }*/

   /*Ex.: 6
    int a = 5;
    while(a<=500){
        if(a%5==0){
            printf("%d\n",a);
        }
        a++;
    }*/

   /*Ex.: 7
    int a = 2;
    while(a<=100){
        if(a%2==0){
            printf("%d\n",a);
        }
        a++;
    }*/

   /*Ex.: 8
    int a = 1;
    while(a<=100){
        if(a%2!=0){
            printf("%d\n",a);
        }
        a++;
    }*/

   /*Ex.: 9
    int a = 1;
    int b;
    while(a<=20){
        b = a * a;
        printf("%d\n",b);
        a++;
    }*/

   /*Ex.: 10
    int a = 1;
    while(a<=100){
        if(a%2!=0){
            printf("%d\n",a);
        }
        a++;
    }*/

   /*Ex.: 11
    int a = 1;
    float n;
    while(a<=10){
        printf("Digite o número %d:\n",a);
        scanf("%f",&n);
        printf("%f\n",n/2);
        a++;
    }*/

   /*Ex.: 12
    int c = 1, n;
    while(c<=10){
        printf("Digite o número %d:\n",c);
        scanf("%d",&n);
        printf("%d\n",n*n);
        c++;
        n=0;
    }*/

   /*Ex.: 13
    int c = 1;
    double n;
    while(c<=15){
        printf("Digite o número %d:\n",c);
        scanf("%lf",&n);
        printf("%lf\n",sqrt(n));
        c++;
    }*/

   /*Ex.: 14
    int c = 1;
    double n;
    while(c<=8){
        printf("Digite o %dº número:\n",c);
        scanf("%lf",&n);
        printf("%lf\n",log10(n));
        c++;
    }*/

   /*Ex.: 15
    int c = 1, n=0;
    while(c<=100){
        printf("%d\n",c);
        n = n + c;
        c++;
    }
    printf("%d",n);*/

   /*Ex.: 16
    int a = 1, n = 0;
    while(a<=100){
        printf("%d\n",a);
        n = (n+a)*(n+a);
        a++;
    }
    printf("%d",n);*/

   /*Ex.: 17
    int a = 1, n = 0;
    float m;
    while(a<=100){
        printf("%d\n",a);
        n = a + n;
        a++;
    }
    printf("%f",m=n/2);*/

   /*Ex.: 18
    int a = 1;
    double n;
    while(a<=100){
        printf("%d\n",a);
        a++;
        n = a*a*a;
    }
    printf("%lf",n);*/

   /*Ex.: 19
    int a = 1, n = 0;
    float m;
    while(a<= 100){
        printf("%d\n",a);
        n = a + n;
        a++;
    }
    printf("%f",m=n/2);*/

   /*Ex.: 20
    int a = 1, n, maior, menor;
    while(a<=10){
        printf("DIGITE O %dº NÚMERO:\n",a);
        scanf("%d",&n);
        if(a==1){
            maior = menor = n;
        }else{
            if(n>maior){maior = n;}
            if(n<menor){menor = n;}
        }
        a++;
    }
    printf("Maior: %d\nMenor: %d",maior,menor);*/

   /*Ex.: 21
    int a = 1, n, maior, m2;
    while(a<=10){
        printf("Digite o %dº número:\n",a);
        scanf("%d",&n);
        if(a==1){
            maior = m2 = n;
        }else{
            if(n>maior){maior = n;}
            if(n>m2 && n<maior){m2 = n;}
            }
        a++;
    }
    printf("Maior: %d\nSegundo maior: %d",maior,m2);*/

   /*Ex.: 22
    int a, b, n, s = 0;
    a =+1;
    b =-1;
    printf("Digite o limite inferior:\n");
    scanf("%d",&a);
    printf("Digite o limite superior:\n");
    scanf("%d",&b);
    n = a;
    printf("Números pares no intervalo (%d, %d):\n",a,b);
    while(n<=b){
        if(n%2==0){
            printf("%d\n",n);
            s = s + n;
        }
        n++;
    }
    printf("Soma dos pares: %d",s);*/

   /*Ex.: 23
    int NUM, n = 1;
    printf("Digite um número para o intervalo [1, NUM]:\n");
    scanf("%d",&NUM);
    while(n<=NUM){
        if(n%3==0 && n%5==0){
            printf("%d\n",n);
        }
        n++;
    }*/

   /*Ex.: 24
    int a = 1, n, p = 0, imp = 0;
    while(a<=200){
        printf("Digite o %dº número:\n",a);
        scanf("%d",&n);
        a++;
        if(n%2==0){
                p = p + 1;
                }else{
                    imp = imp + 1;
                }
    }
    printf("Quantidade de números pares: %d\nQuantidade de números ímpares: %d",p,imp);*/

   /*Ex.: 25
    int a = 1, n, t = 0;
    while(a<=15){
        printf("Digite o %dº número:\n",a);
        scanf("%d",&n);
        a++;
        if(n > 30){t = t + 1;}
    }
    printf("Foram digitados %d números maiores que 30\n",t);*/

   /*Ex.: 26
    int a = 1, n, neg = 0, s;
    while(a<=20){
        printf("Digite o %dº número:\n",a);
        scanf("%d",&n);
        a++;
        if(n < 0){
                neg = neg + 1;
        }else{
            s = s + n;
        }
    }
    printf("Soma dos números positivos: %d\nTotal dos números negativos: %d",s,neg);*/


    return 0;
}
