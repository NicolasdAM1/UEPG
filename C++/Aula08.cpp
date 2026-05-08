// ORDENAÇÃO COM BUBBLE SORT E QUICK SORT

#include <iostream>
#include <stdlib.h>
#include<cstdlib>
#include<ctime>
#include<locale.h>

using namespace std;

const int TAM = 20;
int vetor[TAM];

void imprime(){
    if(TAM == 0){
        cout << "Vetor Vazio." << endl;
        return;
    }
    for(int i = 0; i < TAM; i++){
        cout << "Elemento " << i + 1 << ":" << vetor[i] << endl;
    }
}

void gera(int ord){
    long i;

    switch(ord){
    case 1:
        cout << "Gerando Vetor Ordenado..." << endl;
        for(i = 0; i < TAM; i++)
            vetor[i]= i;
        break;
    case 2:
        cout << "Gerando Vetor Inversamente Ordenado..." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=TAM-1-i;
        break;
    default:
        cout << "Gerando Vetor Randômico..." << endl;
        for (i=0; i<TAM; i++)
            vetor[i]=(rand()%TAM*10);
    }
}

void bubblesort(){
    int pass = 1;
    int temp;
    bool sorted = 0;
    while(!sorted && pass < TAM){
        sorted = 1;
        for(int i = 0; i <= TAM - pass - 1; i++){
            if(vetor[i] > vetor[i+1]){
                 temp = vetor[i];
                 vetor[i] = vetor[i+1];
                 vetor[i+1] = temp;
                 sorted = 0;
            }
        }
        pass++;
    }
}

int partition(int p, int r){
    int piv = vetor[p];
    int temp;
    int i = p - 1;
    int j = r + 1;
    while(true){
        do{
            j = j - 1;
        }while(vetor[j] > piv);
        do{
            i++;
        }while(vetor[i] < piv);
        if (i < j){
            temp = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[j] = temp;
        } else {
            return j;
        } 
            
    }
}

void quicksort(int p, int r){
    if(p < r){
        int q = partition(p, r);
        quicksort(p, q);
        quicksort(q + 1, r);
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    clock_t tempo1;
    clock_t tempo2;

    gera(0);
    tempo1 = clock();
    bubblesort();
    //quicksort(0, TAM - 1);
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << "s" << endl;

    imprime();
}