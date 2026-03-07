#include <iostream>
using namespace std;

const int TAM = 4;
int fila[TAM];

int inicioF = 0, fimF = 0;
int contador = 0;

bool vazia(){
    if(contador == 0)
        return true;
    else
        return false;
}

void enqueue(int valor){
    if(contador == TAM){
        cout << "Fila Cheia" << endl;
        return;
    }
    contador++;
    fila[fimF] = valor;
    if(fimF == TAM - 1)
        fimF = 0;
    else
        fimF++;
    cout << "Valor Inserido" << endl;
}

void dequeue(){
    if(vazia() == true){
        cout << "Fila Vazia" << endl;
        return;
    }
    contador--;
    if(inicioF == TAM - 1)
        inicioF = 0;
    else
        inicioF++;
    cout << "Valor Removido" << endl;
}

void inicio(){
    if(vazia() == true){
        cout << "Fila Vazia";
        return;
    }
    cout << "Valor do Início da Fila: " << fila[inicioF] << endl;
}

void imprime(){
    int i, j;
    if(vazia() == true){
        cout << "Fila Vazia";
        return;
    }
    i = inicioF;
    for(j = 0; j < contador; j++){
        cout << fila[i] << " ";
        if(i == TAM - 1)
            i = 0;
        else
            i++;
    }
    cout << endl;
}

int main(){

    imprime();
    enqueue(2);
    enqueue(3);
    dequeue();
    enqueue(5);
    imprime();

}