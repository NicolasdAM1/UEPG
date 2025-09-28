#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 201
#define PI 3.1415

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void reverse(char *s){
    int i = 0;
    int j = strlen(s) - 1;
    char k;
    while(i < j){
        k = s[i];
        s[i] = s[j];
        s[j] = k;
        i++;
        j--;
    }
}

void calcular_e_somar(int *A, int B) {
    *A = *A + B;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4.0 * PI * R * R; 
    *volume = (4.0/3.0) * PI * R * R * R;    
}


int main(){

    setlocale(LC_ALL, "Portuguese");

   /*Ex.: 1
    int a, b;
    int *p, *p2;
    p = &a;
    p2 = &b;
    printf("Digite dois valores inteiros:\n> ");
    scanf("%d %d",&a, &b);
    printf("Endereço de a: %p\n",p);
    printf("Endereço de b: %p\n",p2);
    if(p > p2){
        printf("Conteúdo do maior endereço: %d",a);
    } else {
        printf("Conteúdo do maior endereço: %d",b);
    }*/

   /*Ex.: 2 
    int a, b;
    printf("Digite dois valores inteiros:\n> ");
    scanf("%d %d",&a,&b);
    printf("Antes:\na = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("Depois:\na = %d\nb = %d\n",a,b);*/

   /*Ex.: 3
    char l[MAX_SIZE];
    printf("Digite uma linha (até 200 caracteres):\n> ");
    if (fgets(l, MAX_SIZE, stdin) == NULL){
        return 1;
    }
    l[strcspn(l,"\n")] = '\0';
    printf("String original: \"%s\"\n",l);
    reverse(l);
    printf("String invertida: \"%s\"\n",l);*/

   /*Ex.: 4
    int A, B;
    printf("Digite um valor para A e outro para B:\n> ");
    scanf("%d %d",&A,&B);
    calcular_e_somar(&A, B);
    printf("A = %d", A);}*/
 

   /*Ex.: 5
    float raio, area_superficie, volume_esfera;
    printf("Digite o raio da esfera: ");
    fflush(stdin); 
    if (scanf("%f", &raio) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    calc_esfera(raio, &area_superficie, &volume_esfera); 
    printf("Raio (R): %.2f\n", raio);
    printf("Area da superficie: %.2f\n", area_superficie);
    printf("Volume: %.2f\n", volume_esfera);*/
     

}