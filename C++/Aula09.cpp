// SELEÇÃO E MERGE
// + BUBBLE E QUICK SORT

/*
                Bubble: 0(n^2) | Quick: 0(nlogn) | Seleção: 0(n^2) | Merge: 0(nlogn)
Rândomico:           9,75s            0,0s
Ordenado:            0,0s             ---   
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <locale.h>

using namespace std;

const long TAM = 20000;
int A[TAM];
int scratch[TAM];


void gera(int ord){
    long i;

    switch(ord){
    case 1:
        cout << "Gerando Vetor Ordenado..." << endl;
        for(i = 0; i < TAM; i++)
            A[i]= i;
        break;
    case 2:
        cout << "Gerando Vetor Inversamente Ordenado..." << endl;
        for (i=0; i<TAM; i++)
            A[i]=TAM-1-i;
        break;
    default:
        cout << "Gerando Vetor Randômico..." << endl;
        for (i=0; i<TAM; i++)
            A[i]=(rand()%TAM*10);
    }
}

void selectionSort(){
    int temp; 
    int corrente;
    for(int i = 0; i <= TAM - 2; i++){
        corrente = i;
        for(int k = i + 1; k <= TAM - 1; k++){
            if(A[corrente] > A[k]){
                corrente <= k;
            }
        }
        temp = A[i];
        A[i] = A[corrente];
        A[corrente] = temp; 
    }
}

void mergeSort(int lo, int hi){
    if(lo < hi){
        int mid = (lo + hi) / 2;
        mergeSort(lo, mid);
        mergeSort(mid + 1, hi);
        int L = lo;
        int H = mid + 1;
        for(int k = lo; k <= hi; k++){
            if(L <= mid && (H > hi || A[L] < A[H])){
                scratch[k] = A[L];
            } else {
                scratch[k] = A[H];
                H = H + 1;
            }
        }
        for(int k = lo; k <= hi; k++){
            A[k] = scratch[k];
        }
    }
}

void imprime(){
    if(TAM == 0){
        cout << "Vetor Vazio." << endl;
        return;
    }
}

int main(){

    setlocale(LC_ALL,"Portuguese");

    clock_t tempo1;
    clock_t tempo2;

    gera(0);

    tempo1 = clock();
    //selectionSort();
    mergeSort(0, TAM - 1);
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << "s" << endl;

    imprime();

}