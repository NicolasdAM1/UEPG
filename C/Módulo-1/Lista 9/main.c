#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

  /*Ex.: 1
   int n = 2, m = 0;
   do{
    if(n%2==0){
        m = m + n;
    }
    n++;
    }while(n<=100);
    printf("%d",m);*/

   /*Ex.: 2
    int cont = 10;
    do{
        printf("%d\n",cont);
        cont--;
        if(cont == -1){
            printf("FIM !");
        }
    }while(cont>=0);*/

   /*Ex.: 3
    int n, d = 1, s = 0, r;
    printf("Digite um n�mero:\n");
    scanf("%d",&n);
    do{
        if(n%d==0){
          s = s + d;
        }
        d++;
    }while(d<=n);
    r = s - n;
    printf("Soma dos divisores desse n�mero (sem contar o pr�prio n�mero): %d",r);*/

   /*Ex.: 4
    int n, m = 1, l = 1, j = 1;
    printf("Digite um n�mero inteiro positivo:\n");
    scanf("%d",&n);
    do{
        printf("%d ",m++);
        if(l==j){
            printf("\n");
            l = 1;
            j++;
        }else{
            l++;
        }
    }while(m<=n);*/

   /*Ex.: 5
    int n, d, m, a, q;
    float p, sp = 0, srp = 0;
    do{
        printf("N�mero do pedido:\n");
        scanf("%d",&n);
        if(n==0){break;}
        printf("Data do pedido:\n");
        scanf("%d/%d/%d",&d,&m,&a);
        printf("Pre�o do produto:\n");
        scanf("%f",&p);
        sp = sp + p;
        printf("Quantidade do produto:\n");
        scanf("%d",&q);
        srp = sp * q;
    }while(n!=0);
    printf("Total da compra: %f",srp);*/

   /*Ex.: 6
    int pes = 0, i, p, s, ec;
    int si = 0, sp = 0, ns = 0, nc = 0, nn = 0, nv = 0;
    float mi, mp;
    do{
        printf("Idade:\n");
        scanf("%d",&i);
        if(i==0){break;}
        si = si + i;
        printf("Peso (em Kg):\n");
        scanf("%d",&p);
        sp = sp + p;
        printf("Sexo:\nFeminino - 1\nMasculino - 2\nN�o quero escolher/Outro - 3\n");
        scanf("%d",&s);
        printf("Estado Civ�l:\nSolteiro(a) - 1\nCasado(a) - 2\nSeparado(a) - 3\nVi�vo(a) - 4\n");
        scanf("%d",&ec);
        if(ec==1){ns++;}
        if(ec==2){nc++;}
        if(ec==3){nn++;}
        if(ec==4){nv++;}
        pes++;
    }while(i!=0);
    mi = si/pes;
    printf("M�dia das idades: %f\n",mi);
    mp = sp/pes;
    printf("M�dia dos pesos: %f\n",mp);
    printf("N�mero de pessoas solteiras: %d\n",ns);
    printf("N�mero de pessoas casadas: %d\n",nc);
    printf("N�meros de pessoas separadas: %d\n",nn);
    printf("N�meros de pessoas vi�vas: %d\n",nv);*/

   /*Ex.: 7
    char c[25];
    float l, com, sl = 0, scom = 0, a = 0, at = 0;
    do{
        printf("Digite o nome do c�modo (ou ''FIM'' para terminar):\n");
        scanf("%s",c);
        if(strcmp(c, "FIM") == 0){break;}
        printf("Largura (em metros):\n");
        scanf("%f",&l);
        printf("Comprimento (em metros):\n");
        scanf("%f",&com);
        a = l * com;
        at = at + a;
    }while(1);
    printf("�rea total da resid�ncia: %f",at);*/


    return 0;
}
