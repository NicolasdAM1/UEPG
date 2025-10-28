#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

   /*Ex.: 1
    char A[50];
    int i, len;
    fgets(A, sizeof(A), stdin);
    len = strlen(A);
    for(i = len; i >= 0; i--){
        putchar(A[i]);
    }*/

   /*Ex.: 2
    char A[50];
    int i, j, len, b;
    fgets(A, sizeof(A), stdin);
    len = strlen(A);
    if(A[len - 1] == '\n'){
        A[len - 1] = '\0';
        len--;
    }
    for(i = 0, j = len - 1; i < j; i++, j--){
        b = A[i];
        A[i] = A[j];
        A[j] = b;
    }
    printf("%s",A);*/

   /*Ex.: 3
    int vogal(char c){
        c = tolower(c);
        return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    char A[50];
    char cs;
    int i, nv = 0;
    printf("Digite uma string:\n");
    fgets(A, sizeof(A), stdin);
    for(i = 0; A[i] != '\0'; i++){
        if(vogal(A[i])){
            nv++;
        }
    }
    printf("Digite um caractere substituto:\n");
    scanf("%c",&cs);
    for(i = 0; A[i] != '\0'; i++){
        if(vogal(A[i])){
            A[i] = cs;
        }
    }
    printf("Nova string: %s\n",A);
    printf("Número de vogais: %d",nv);*/

   /*Ex.: 4
    char A[50];
    int i = 0, j = strlen(A) - 1;
    int Palindromo = 1;
    printf("Digite uma string:\n");
    fgets(A, sizeof(A), stdin);
    while(i < j){
        while (i < j && !isalnum(A[i])) i++;
        while (i < j && !isalnum(A[j])) j--;
        if (tolower(A[i]) != tolower(A[j])) {
            Palindromo = 0;
            break;
        }
        i++;
        j--;
    }
    if(Palindromo){
            printf("É um palíndromo\n");
    }else{
        printf("Não é um palíndromo\n");
    }*/

   /*Ex.: 5
    char A[100];
    char B[100];
    printf("Digite a primeira string:\n");
    fgets(A, sizeof(A), stdin);
    printf("Digite a segunda string:\n");
    fgets(B, sizeof(B), stdin);
    if(strstr(A, B) != NULL){
        printf("A segunda string está contida na primeira\n");
    }else{
        printf("A segunda string não está contida na primeira\n");
    }*/

   //Ex.: 6

   /*Ex.: 7
    char A[100];
    printf("Digite uma string:\n");
    fgets(A, sizeof(A), stdin);
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] >= 97 && A[i] <= 122) {
            A[i] = A[i] - 32;
        }
    }
    printf("String em maiúsculas: %s\n", A);*/

   /*Ex.: 8
    char A[100];
    printf("Digite uma string:\n");
    fgets(A, sizeof(A), stdin);
    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] >= 65 && A[i] <= 90){
            A[i] += 32;
        }
    }
    printf("String em minúsculas: %s",A);*/

   /*Ex.: 9
    char nome[100];
    float valor, desconto, vf;
    printf("Digite o nome da mercadoria:\n");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite o valor da mercadoria:\nR$");
    scanf("%f", &valor);
    desconto = valor * 0.10;
    vf = valor - desconto;
    printf("Mercadoria: %s\n", nome);
    printf("Valor total: R$ %.2f\n", valor);
    printf("Desconto (10%%): R$ %.2f\n", desconto);
    printf("Valor a pagar à vista: R$ %.2f\n", vf);*/

   /*Ex.: 10
    char S[100];
    int i, j;
    printf("Digite uma string:\n");
    fgets(S, sizeof(S), stdin);
    printf("Digite os valores de i e j (i <= j):\n");
    scanf("%d %d", &i, &j);
    int tamanho = strlen(S);
    printf("Segmento de S entre os índices %d e %d: ",i,j);
    for (int k = i; k <= j; k++){
        putchar(S[k]);
    }
    printf("\n");*/

   /*Ex.: 11
    char A[100];
    int i;
    printf("Digite uma string:\n");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';
    for(i = 0; A[i] != '\0'; i++){
        if(tolower(A[i]) >= 'a' && tolower(A[i]) <= 'z'){
            A[i] += 3;
        }
    }
    printf("Mensagem codificada: %s",A);*/

   /*Ex.: 12
    char A[100], B[100];
    printf("Digite a primeira string (A):\n");
    fgets(A, sizeof(A), stdin);
    printf("Digite a segunda string (B):\n");
    fgets(B, sizeof(B), stdin);
    if (strcmp(A, B) < 0) {
        printf("Ordem alfabética:\n%s\n%s\n", A, B);
    } else {
        printf("Ordem alfabética:\n%s\n%s\n", B, A);
    }*/











    return 0;
}
