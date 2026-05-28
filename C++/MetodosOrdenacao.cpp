//

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 20000;
int A[TAM];
int scratch[TAM];

void gera(int ord){
    long i;

    switch(ord){
    case 1:
        cout << "Gerando vetor Ordenado..." << endl;
        for(i = 0; i < TAM; i++)
            A[i]= i;
        break;
    case 2:
        cout << "Gerando vetor Inversamente Ordenado..." << endl;
        for (i=0; i<TAM; i++)
            A[i]=TAM-1-i;
        break;
    default:
        cout << "Gerando vetor Randômico..." << endl;
        for (i=0; i<TAM; i++)
            A[i]=(rand()%TAM*10);
    }
}

void imprime(){
    if(TAM == 0){
        cout << "Vetor Vazio." << endl;
        return;
    }
}

void bubbleSort(){
    int pass = 1;
    int temp;
    bool sorted = 0;
    while(!sorted && pass < TAM){
        sorted = 1;
        for(int i = 0; i <= TAM - pass - 1; i++){
            if(A[i] > A[i+1]){
                 temp = A[i];
                 A[i] = A[i+1];
                 A[i+1] = temp;
                 sorted = 0;
            }
        }
        pass++;
    }
    cout << "Bubble sort" << endl;
}

int partition(int p, int r){
    int piv = A[p];
    int temp;
    int i = p - 1;
    int j = r + 1;
    while(true){
        do{
            j = j - 1;
        }while(A[j] > piv);
        do{
            i++;
        }while(A[i] < piv);
        if (i < j){
            temp = A[i];
            A[i] = A[i + 1];
            A[j] = temp;
        } else {
            return j;
        } 
            
    }
    cout << "Quicksort" << endl;
}

void quickSort(int p, int r){
    if(p < r){
        int q = partition(p, r);
        quickSort(p, q);
        quickSort(q + 1, r);
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
    cout << "Selection sort" << endl;
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

void insertionSort(){
    int temp;
    int x;
    for (int k = 1; k <= TAM - 1; k++){
        x = A[k];
        int i = k - 1;
        bool found = 0;
        while (!found && i >= 0){
            if (A[i] > x){
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                i = i - 1;
            } else {
                found = 1;
            }
        } 
    }
    cout << "Insertion sort" << endl;
}

void shellSort(){
    int k = 1;
    int temp;
    do {
        k = k * 2 + 1;
    } while (k < TAM);
    do {
        k = k / 2;
        for (int i = k; i <= TAM - 1; i++){
            int j = i - k;
            bool found = 0;
            while (j >= 0 && !found){
                if (A[j] > A[j + k]){
                    temp = A[j];
                    A[j] = A[j + k];
                    A[j + k] = temp;
                    j = j - k;
                } else {
                    found = 1;
                }
            }

        }
    } while (k != 1);
    cout << "Shell sort" << endl;
}

int main(){

    clock_t tempo1;
    clock_t tempo2;

    gera(0);

    cout << "Método: ";

    tempo1 = clock();
    bubbleSort();
    /*cout << "Quick sort" << endl;
    quickSort(0, TAM - 1);*/
    //selectionSort();
    //mergeSort(0, TAM - 1);
    //insertionSort();
    //shellSort();
    
    tempo2 = clock() - tempo1;
    cout << "Tempo: " << (float) tempo2/CLOCKS_PER_SEC << "s" << endl;

    imprime();
}