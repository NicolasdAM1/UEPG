// LISTA SEQUENCIAL com ALOC

# include <iostream>
using namespace std;

struct no{
    int dado;
    struct no *prox;
};
struct no *lista = NULL;
int tamanho = 0;

void insereLista(int valor, int position){
    struct no *atual, *novo;
    if(position < 0){
        cout << "Posição Inválida" << endl;
        return;
    }
    novo = new (struct no);
    novo -> dado = valor;
    if(position == 0){
        novo -> prox = lista;
        lista = novo;
    } else {
        atual = lista;
        for(int i = 0; i < position -1; i++){
            atual = atual -> prox;
        }
        novo -> prox = atual -> prox;
        atual -> prox = novo;
    }
    tamanho++;
}

void removeLista(int position){
    
}