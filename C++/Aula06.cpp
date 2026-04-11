// ALOCAÇÃO DINÂMICA

#include <iostream>
using namespace std;

struct no{
    int dado;
    struct no *prox;
};
struct no *pilha = NULL;

void push(int valor){
    struct no *novo;
    novo = new (struct no);
    novo -> dado = valor;
    novo -> prox = pilha;
    pilha = novo;
    cout << "Elemento Criado.";
}

void pop(){
    struct no *apaga;
    if(pilha == NULL){
        cout << "Pilha Vazia";
        return;
    }
    apaga = pilha;
    pilha = pilha -> prox;
    delete(apaga);
}

void imprime(){
    struct no *aux;
    if(pilha == NULL){
        cout << "Pilha Vazia";
        return;
    }
}