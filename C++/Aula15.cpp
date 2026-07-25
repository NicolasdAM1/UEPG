// Início do 2º Semestre
// Busca Sequencial

#include <iostream>
using namespace std;
const int TAM = 10;
int vetor[TAM] = {5, 10, 37, 15, 9, 70, 15258, 32, 25, 13};

void sequencial(int chave){
    int i;
    for(i = 0; i < TAM; i++){
        if (chave == vetor[i]){
            break;
        }
    }
    if (i == TAM)
        cout << "Valor não Encontrado." << endl;
    else {
        cout << "Valor não Encontrado na Posição " << i << endl;
    }
}

int vetor2[TAM + 1] = {5, 10, 37, 15, 9, 70, 15258, 32, 25, 13};

void sequencialSentinela(int chave){
    int i;
    vetor2[TAM] = chave;
    for(i = 0; ; i++){
        if (chave == vetor2[i]){
            break;
        }
    }
    if (i == TAM)
        cout << "Valor não Encontrado." << endl;
    else {
    cout << "Valor não Encontrado na Posição " << i << endl;
    }
}

void moverfrente(int chave){
    int i;
    for(i = 0; i < TAM; i++){
        if (chave == vetor[i]){
            break;
        }
    }
    if (i == TAM){
        cout << "Valor não Encontrado." << endl;
    } else {
        cout << "Valor não Encontrado na Posição " << i << endl;
        if (i != 0){
            for (int j = i; j > 0; j--){
                vetor[j] = vetor[j-1];
            }
            vetor[0] = chave;
        }
    }
    
}

void transposicao(int chave){
    int i;
    for(i = 0; i < TAM; i++){
        if (chave == vetor[i]){
            break;
        }
    }
    if (i == TAM){
        cout << "Transposição: Valor não Encontrado." << endl;
    }
    else {
        cout << "Transposição: Valor Encontrado na Posição " << i << endl;
        if (i > 0){
            int temp = vetor[i];
            vetor[i] = vetor[i-1];
            vetor[i-1] = temp;
        }
    }
}

int main(){
    int chave = 15;
    sequencial(chave);
    sequencialSentinela(chave);
    moverfrente(chave);
    transposicao(chave);
    return 0;
}
