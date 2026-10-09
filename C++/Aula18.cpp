const int TAM = 5;
int vertice[TAM];
int adj[TAM][TAM];
int n_vertices = 0;

void inicia(){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            adj[i][j] = 0;
        }
    }
}

void insereVertice(int valor){
    if (n_vertices < TAM){
        for (int i = 0; i < n_vertices; i++){
            if(valor == vertice[i]){
                cout << "Repetido.";
                return;
            }
        }
        vertice[n_vertices] = valor;
        n_vertices++;
    } else
            cout << "Grafo Cheio.";
}

void insereAresta(int origem, int destino){
    int i = 0, j = 0;
    while(i < n_vertices && vertice[i] != origem){
        i++;
    }
    if (i == n_vertices){
        cout << "Não achado a origem.";
        return;
    }
    while(j < n_vertices && vertice[j] != destino){
        j++;
    }
    if (j == n_vertices){
        cout << "Não achado o destino.";
        return;
    }
    adj[i][j] = 1;
}

void removeAresta(int origem, int destino){
    while(i < n_vertices && vertice[i] != origem){
        i++;
    }
    if (i == n_vertices){
        cout << "Não achado a origem.";
        return;
    }
    while(j < n_vertices && vertice[j] != destino){
        j++;
    }
    if (j == n_vertices){
        cout << "Não achado o destino.";
        return;
    }
    adj[i][j] = 0;
    cout << "Aresta Removida";
}

void haAresta()