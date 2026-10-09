// BUSCA

#include <iostream>

using namespace std;

struct no {
    int dado;
    struct no *esq;
    struct no *dir;
    int bal;
};

struct no *raiz=NULL, *raizAVL=NULL;

// Rotação para a esquerda
void esquerda(struct no *p) {

    struct no *q, *hold;

    q = p->dir;
    hold = q->esq;
    q->esq = p;
    p->dir = hold;

}

//Rotação para a direita
void direita(struct no *p) {

    struct no *q, *hold;

    q = p->esq;
    hold = q->dir;
    q->dir = p;
    p->esq = hold;

}

// Cira um no e preenche os membros
struct no *criaNo(int valor) {
    struct no *novo = new (struct no);
    novo->dado=valor;
    novo->dir=NULL;
    novo->esq=NULL;
    novo->bal=0;
    return novo;
};

//Insere valor em uma árvore AVL
void insereArvoreAVL(int chave) {

    struct no *pp=NULL, *p=raizAVL, *pajovem=NULL, *ajovem=raizAVL, *q, *filho;
    int imbal;

    if (p==NULL) {                 /* Arvore vazia */
        raizAVL = criaNo(chave);  /* Funcao para criacao de um novo no */
        return;
    }

    /* Insere chave e descobre ancestral mais jovem a ser desbalanceado */
    while (p!=NULL) {
        if (chave < p->dado)
            q = p->esq;
        else
            q = p->dir;
        if (q!=NULL)
            if (q->bal != 0) {
                pajovem=p;
                ajovem=q;
            }
        pp = p;
        p = q;
    }

    q = criaNo(chave);

    if (chave<pp->dado)
        pp->esq=q;
    else
        pp->dir=q;

    /* Balanceamento de todos os nós entre ajovem e q devem ser ajustados */
    if (chave<ajovem->dado)
        filho = ajovem->esq;
    else
        filho = ajovem->dir;

    p = filho;

    while (p!=q) {
        if (chave < p->dado) {
            p->bal=1;
            p=p->esq;
        } else {
            p->bal = -1;
            p=p->dir;
        }
    }

    if (chave<ajovem->dado)
        imbal = 1;
    else
        imbal = -1;

    if (ajovem->bal==0) {      /*Não houve desbalanceamento */
        ajovem->bal=imbal;
        return;
    }


    if (ajovem->bal!=imbal) {   /*Não houve desbalanceamento */
        ajovem->bal=0;
        return;
    }

    /* Houve desbalanceamento */
    if (filho->bal == imbal) {
        p=filho;
        if (imbal==1)        /* Faz rotação simples */
            direita(ajovem);
        else
            esquerda(ajovem);
        ajovem->bal=0;
        filho->bal=0;
    } else {
        if (imbal==1) {	  /*Faz rotação dupla */
            p=filho->dir;
            esquerda(filho);
            ajovem->esq=p;
            direita(ajovem);
        } else {
            p=filho->esq;
            direita(filho);
            ajovem->dir=p;
            esquerda(ajovem);
        }
        if (p->bal==0) {
            ajovem->bal=0;
            filho->bal=0;
        } else {
            if (p->bal == imbal) {
                ajovem->bal = - imbal;
                filho->bal = 0;
            } else {
                ajovem->bal = 0;
                filho->bal = imbal;
            }
        }
        p->bal=0;
    }

    if (pajovem == NULL)  /* Ajusta ponteiro do pai do ancestral mais jovem */
        raizAVL = p;
    else if (ajovem==pajovem->dir)
        pajovem->dir = p;
    else
        pajovem->esq = p;

    return;
}

void insereArvore(int valor) {

    struct no *atual, *anterior, *novo;

    novo = new(struct no);
    novo->dado = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    if (raiz==NULL) {
        raiz = novo;
        return;
    }

    atual=raiz;

    while (atual!=NULL) {
        anterior=atual;
        if (valor < atual->dado)
            atual=atual->esq;
        else atual=atual->dir;
    }
    if (valor < anterior->dado)
        anterior->esq=novo;
    else anterior->dir=novo;
}


void emOrdem(struct no *atual) {
    if (atual!=NULL) {
        emOrdem(atual->esq);
        cout << atual->dado << " ";
        emOrdem(atual->dir);
    }
}

// Apaga todos os elementos de uma árvore binária.
// Maneira de executar: raiz = apaga(raiz);
struct no *apaga(struct no *atual) {
    if (atual!=NULL) {
        atual->esq = apaga(atual->esq);
        atual->dir = apaga(atual->dir);
        delete(atual);
    }
    return NULL;
}

//void buscaAVL(int valor)
//void buscaArvore(int valor)
//void buscaSequenciaIneficiente(int valor)
//void buscaSequencia(int valor)
//void buscaBinaria(int valor)

//void geraVetorOrdenado()

//void geraArvores()

int main() {

}

