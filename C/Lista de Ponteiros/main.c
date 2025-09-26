#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
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

   //Ex.: 2 
    int a, b;
    printf("Digite dois valores inteiros:\n> ");
    scanf("%d %d",&a,&b);
    printf("Antes:\na = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("Depois:\na = %d\nb = %d\n",a,b);


}