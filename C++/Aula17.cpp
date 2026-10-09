#include <iostream>


void inicia(){
    for(int i = 0; i < TAM; i++){
        tabela[i] = NULL;
    }
}

void insere(int chave){
    struct no *atual, *anterior, *novo;
    int pos;
    pos = espalha(chave);
    atual = tabela[pos];
    while(atual != NULL){
        if(atual->dado == chave){
            cout << "Chave Repetida";
            return;
        }
        anterior = atual;
        atual = atual -> prox;
    }
    novo = new(struct no);
    novo -> dado = chave;
    novo -> prox = NULL;
    if (tabela[pos] == NULL)
        tabela[pos] = novo;
    else
        anterior -> prox = novo;
}

void 