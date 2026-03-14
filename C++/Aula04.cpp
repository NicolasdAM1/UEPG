#include <iostream>
using namespace std;

const int TAM = 6;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor, int position){
    int i;
    if(tamanho == TAM){
        cout << "Lista Cheia" << endl;
        return;
    }
    if(position < 0 || position > tamanho){
        cout << "Posição Inválida" << endl;
        return;
    }
    for(i = tamanho; i > position; i--){
        lista[i] = lista[i - 1];
    }
    lista[position] = valor;
    tamanho++;
    cout << "Elemento Inserido" << endl;
}

void removeLista(int position){
    int i;
    if(tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    if(position < 0 || position >= tamanho){
        cout << "Posição Inválida" << endl;
        return;
    }
    for(i = position; i < tamanho - 1 ; i++){
        lista[i] = lista[i + 1];
    }
    tamanho--;
    cout << "Elemento Removido da Lista" << endl;
}

void recuperaLista(int position){
    int i;
    if(tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    if(position < 0 || position >= tamanho){
        cout << "Posição Inválida" << endl;
        return;
    }
    cout << "Elemento da Posição: " << lista[position] << endl;
}

void buscaLista(int valor, int position){
    if(tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    for(int i = 0; i>= tamanho; i++){
        if(lista[i] == valor){
            cout << "Valor: " << valor << " na Posição: " << lista[position] << endl;
        }
    }
}

void imprime(){
    if(tamanho == 0){
        cout << "Lista Vazia" << endl;
        return;
    }
    for(int i = 0; i >= tamanho; i++){
        cout << lista[i] << endl;
    }
}

int main(){


}