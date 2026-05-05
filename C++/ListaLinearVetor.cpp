#include <iostream>
#include <locale.h>
using namespace std;


const int TAM = 10;
int vetor[TAM];
int tamanho = 0;

void insereLista(int valor){
    if (tamanho >= TAM){
        cout << "Lista Cheia." << endl;
        return;
    }
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == valor){
            cout << "Valor (" << valor << ") já existe na lista." << endl;
            return;
        }
    }
    int i = tamanho - 1;
    vetor[i + 1] = valor;
    tamanho++;
    cout << "Valor (" << valor << ") Inserido." << endl;
}

void recuperaLista(int posicao){
    if (posicao < 0 || posicao >= tamanho){
        cout << "Posição Inválida." << endl;
        return;
    }
    cout << "O Valor na posição [" << posicao << "] é (" << vetor[posicao] << ")" << endl;
}

void removeLista(int posicao){
    if (posicao < 0 || posicao >= tamanho){
        cout << "Posição Inválida" << endl;
        return;
    }
    for (int i = posicao; i < tamanho - 1; i++){
    vetor[i] = vetor[i + 1];    
    }
    tamanho--;
    cout << "Valor Removido." << endl;
}

void buscaLista(int valor){
    for (int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            cout << "Valor (" << valor << ") encontrado na posição [" << i << "]" << endl;
            return;
        }
    }
    cout << "Valor não Encontrado na Lista." << endl;
}

void imprime(){
    if (tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    cout << "Lista:" << endl;
    for (int i = 0; i < tamanho; i++){
        cout << vetor[i]  << endl;
    }
}

int main(){

    setlocale(LC_ALL,"Portuguese");

    imprime();
    insereLista(1);
    insereLista(2);
    insereLista(4);
    recuperaLista(2);
    buscaLista(3);
    buscaLista(4);
    removeLista(2);
    insereLista(3);
    imprime();
}