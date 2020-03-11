#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *next;
} Node; //Estrutara básica dos elementos da lista

void inserir(Node *n, int data){
    Node *n1;
    n1 = (Node*) malloc(sizeof(Node));
    n1->data = data;
    n1->next = NULL;
    while(n->next != NULL){
        n = n->next;
    }
    n->next = n1;
} //Função utilizada para inserir um elemento no final da minha lista

Node *buscar(Node *n, int pos){
    int i = 0;
    while(n->next != NULL || i < pos){
        n = n->next;
        i++;
    }
    return n;
} //Buscar feita para acessar um elemento em determinada posição da lista

void display(Node *n){
    n = n->next;
    while(n != NULL){
        printf("%d ", n->data);
        n = n->next;
    }
}

int main(){

    Node *sentinela;
    sentinela = (Node*) malloc(sizeof(Node));
    sentinela->data = -1;
    sentinela->next = NULL;
    
    inserir(sentinela, 1);
    inserir(sentinela, 2);
    inserir(sentinela, 3);

    display(sentinela);

    return 0;
}