#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(){

   /*Ex.: 1
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    float *p = array;
    for(int i = 0; i <= 9; i++){
        printf("%p\n",p + i);
    } */

   /*Ex.: 2
    float matriz[3][3] = { {1.1, 2.2, 3.3}, {4.4, 5.55, 6.6}, {7.7, 8.8, 9.9} };
    float *p = &matriz[0][0];
    for(int i = 0; i <= 8; i++){
        printf("%p\n", p + i);
    } */

   /*Ex.: 3
     int array[5];
     int *p = array;
     for(int i = 0; i <= 4; i++){
        printf("Digite um valor inteiro:\n> ");
        scanf("%d",&*(p + i));
     }
     for(p = array; p < array + 5; p++){
        printf("Dobro: %d\n",(*p) * 2);
     }*/

   //Ex.: 4
    int array[5];
    int *p = array;
    for(int i = 0; i <= 4; i++){
        printf("Digite um valor inteiro:\n> ");
        scanf("%d", &*(p + i));
    } 
    p = array;
    for(p = array; p < array + 5; p++){
        if(*p % 2 == 0){
            int pos = p - array;
            printf("Posição %d - Endereço: %p\n", pos, p);
        }
    }



    return 0;
}