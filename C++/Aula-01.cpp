#include <iostream>

using namespace std;

const int TAM = 5; //#define TAM = 5

int vet[TAM] = {0, 1, 2, 3, 4};

void inserir(){
    cout << "Digite " << TAM << " números:" << endl;
    for(int i = 0; i < TAM; i++){
        cin >> vet[i]; //scanf("%d", &vet[i]¨);
    }
}

int main()
{

    /*a)
    cout << "a)" << endl;
    inserir();
    for(int i = 0; i < 5; i++){
        cout << "Number: " << vet[i] << endl;
    }*/


    /*b)
    cout << "b)" << endl;
    inserir();
    for(int i = 4; i >= 0; i--){
    cout << "Number: " << vet[i] << endl;
    }*/


    /*c)
    cout << "c)" << endl;
    inserir();
    int maior = vet[0];
    for(int j = 0; j <= 4; j++){
        if(vet[j] > vet[0]){
            maior = vet[j];
        }
    }
    cout << "Maior: " << maior << endl;*/


    //d)



    return 0;
}
