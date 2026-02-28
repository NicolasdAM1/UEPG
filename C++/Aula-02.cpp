#include<iostream>
using namespace std;

const int TAM = 10; //#define TAM = 10

int pilha[TAM];
int topoP = -1;

void push(int valor){
    if(topoP == TAM - 1){
        cout << "Pilha sem Espaço" << endl;
        return;
    }
    topoP++;
    pilha[topoP] = valor;
    cout << "Valor inserido na pilha" << endl;
}

bool vazia(){
    if(topoP == -1){
        return true;
    } else {
        return false;
    }
    cout << vazia();
}

void pop(){
    if(vazia() == true){
        cout << "Pilha Vazia" << endl;
        return;
    }
    topoP--;
    cout << "Valor removido da pilha" << endl;
}

void topo(){
    if(vazia() == true){
        cout << "Pilha Vazia" << endl;
        return;
    }
    cout << "Valor do topo: " << pilha[topoP] << endl;
}

void imprime(){
    if(vazia() == true){
        cout << "Pilha Vazia" << endl;
        return;
    }
    for(int i = topoP; i >= 0; i--){
        cout << pilha[i] << endl;
    }
    cout << endl;
}

int main(){
    push(10);
    push(5);
    imprime();
    pop();
    topo();
    vazia();
}
