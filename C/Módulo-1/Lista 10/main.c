#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    int N;
    printf("Digite um n�mero inteiro positivo:\n");
    scanf("%d",&N);
    for(int m = 0; m <= N; m++){
        printf("%d\n",m);
    }*/

   /*Ex.: 2
    int N;
    printf("Digite um n�mero inteiro positivo:\n");
    scanf("%d",&N);
    for(int m = N; m >= 0; m--){
        printf("%d\n",m);
    }*/

   /*Ex.: 3
    int N, l = 1;
    printf("Digite um n�mero inteiro positivo:\n");
    scanf("%d",&N);
    l = N * 2;
    for(int m = 1; m <= N; m++){
        while(m<=l){
            if(m%2!=0){
                printf("%d\n",m);
                m++;
            }else{
                m++;
            }
        }
    }*/

   /*Ex.: 4
    int a = 1;
    for(a; a <= 15; a++){
        if(a%3==0){
            printf("%d\n",a);
        }
    }*/

   /*Ex.: 5
    int s = 0;
    for(int a = 0; a <= 100; a++){
        if(a%2==0){
            s = s + a;
        }
    }
    printf("%d",s);*/

   /*Ex.: 6
    for(int a = 10; a >= 0; a--){
        printf("%d\n",a);
    }
    for(int a=1; a>0;a--){
        printf("FIM!");
    }*/

   //Ex.: 7
    int N, num = 1;
    printf("Digite um n�mero inteiro positivo:\n");
    scanf("%d",&N);
    for(int m = 1; m <= N; m++){
        for(int l = 1; l <= m; l++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    } 

   /*Ex.: 8
    int a, c = 1;
    printf("Digite um n�mero inteiro maior que 1:\n");
    scanf("%d",&a);
    for(int b = 2; b < a; b++){
        if(a%b==0){
            c = 0;
            break;
        }
    }
    if(c==1){printf("� primo");
    }else{printf("N�o � primo");}*/


    return 0;
}
