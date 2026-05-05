#include <iostream>
#include <locale.h>
using namespace std;

struct No {
    int dado;
    No* prox;
};

No* inicio = NULL;

void insereLista(int valor) {
    No* atual = inicio;
    while (atual != NULL) {
        if (atual -> dado == valor) {
            cout << "Valor (" << valor << ") já existe na lista." << endl;
            return;
        }
        atual = atual -> prox;
    }

    No* novoNo = new No();
    novoNo -> dado = valor;
    novoNo -> prox = NULL;

    if (inicio == NULL || inicio -> dado > valor) {
        novoNo -> prox = inicio;
        inicio = novoNo;
    } else {
        atual = inicio;
        while (atual -> prox != NULL && atual -> prox -> dado < valor) {
            atual = atual -> prox;
        }
        novoNo -> prox = atual -> prox;
        atual -> prox = novoNo;
    }
    cout << "Valor (" << valor << ") Inserido." << endl;
}

void recuperaLista(int posicao) {
    if (posicao < 0) {
        cout << "Posição Inválida." << endl;
        return;
    }

    No* atual = inicio;
    for (int i = 0; i < posicao && atual != NULL; i++) {
        atual = atual -> prox;
    }

    if (atual == NULL) {
        cout << "Posição Inválida." << endl;
    } else {
        cout << "O Valor na posição [" << posicao << "] é (" << atual -> dado << ")" << endl;
    }
}

void removeLista(int posicao) {
    if (posicao < 0 || inicio == NULL) {
        cout << "Posição Inválida." << endl;
        return;
    }

    No* temp = inicio;

    if (posicao == 0) {
        inicio = inicio -> prox;
        delete temp;
        cout << "Valor Removido." << endl;
        return;
    }

    for (int i = 0; i < posicao - 1 && temp != NULL; i++) {
        temp = temp -> prox;
    }

    if (temp == NULL || temp -> prox == NULL) {
        cout << "Posição Inválida" << endl;
        return;
    }

    No* apagar = temp -> prox;
    temp -> prox = apagar -> prox;
    delete apagar;
    cout << "Valor Removido." << endl;
}

void buscaLista(int valor) {
    No* atual = inicio;
    int posicao = 0;

    while (atual != NULL) {
        if (atual -> dado == valor) {
            cout << "Valor (" << valor << ") encontrado na posição [" << posicao << "]" << endl;
            return;
        }
        atual = atual -> prox;
        posicao++;
    }
    cout << "Valor não Encontrado na Lista." << endl;
}

void imprime() {
    if (inicio == NULL) {
        cout << "Lista Vazia" << endl;
        return;
    }

    cout << "Lista:" << endl;
    No* atual = inicio;
    while (atual != NULL) {
        cout << atual -> dado << endl;
        atual = atual -> prox;
    }
}

int main() {
    setlocale(LC_ALL,"Portuguese");

    imprime();
    insereLista(1);
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