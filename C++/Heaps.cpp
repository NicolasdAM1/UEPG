#include <iostream>

using namespace std;

const int TAM = 1000;
int heap[TAM];

int tamanho = 0;

void heapfy(int pos){
    int esq, dir, maior, temp;

    esq = 2 * pos + 1;
    dir = 2 * pos + 2;
    if (esq < tamanho && heap[esq] > heap[pos])
        maior = esq;
    else
        maior = pos;
    if (dir < tamanho && heap[dir] > heap[maior])
        maior = dir;
    if (maior != pos){
        temp = heap[maior];
        heap[maior] = heap[pos];
        heap[pos] = temp;
        heapfy(maior);
    }
}

void insereHeap(int valor){
    int i;
    if (tamanho == TAM){
        cout << "Heap Cheia." << endl;
        return;
    }
    heap[tamanho] = valor;
    i = tamanho;
    while (i > 0 && valor > heap[(i - 1) / 2]){
        heap[i] = heap[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    heap[i] = valor;
    tamanho++;
    cout << "Elemento Inserido" << endl;
}

void maiorHeap(){
    if (tamanho == 0){
        cout << "Heap Vazia." << endl;
        return;
    }
    cout << heap[0] << endl;
}

void removeMaior(){
    if (tamanho == 0){
        cout << "Heap Vazio." << endl;
        return;
    }
    heap[0] = heap[tamanho - 1];
    tamanho--;
    if (tamanho > 0)
        heapfy(0);
}

int main(){

    insereHeap(15);
    insereHeap(258);
    insereHeap(999);
    insereHeap(1);
    insereHeap(88);
    insereHeap(15258);
    insereHeap(2);
    insereHeap(1005);

    cout << "Os 3 maiores números são:" << endl;
    for (int i = 0; i < 3; i++) {
        if (tamanho > 0) {
            maiorHeap();
            removeMaior();
        }
    }

    return 0;

}