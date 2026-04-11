//LISTA LINEAR

#include <iostream>
using namespace std;

const int TAM = 6;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor) {
    if (tamanho == TAM) {
        cout << "Lista cheia." << endl;
        return;
    }
    // Simplificando: insere no próximo índice disponível
    lista[tamanho] = valor;
    tamanho++;
}

int main() {
    insereLista(10);
    insereLista(20);
    
    cout << "Primeiro elemento: " << lista[0] << endl;
    cout << "Tamanho atual: " << tamanho << endl;

    return 0;
}