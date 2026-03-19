#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *proximo;
}No;

void empilharInicio(No **topo, int num){
    No *novo = (No *) malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = *topo;
        *topo = novo;
    }else{
        printf("Erro ao alocar memória\n");
    }

}

void imiprimirLista(No *no){
        printf("\nLista: \n");
        while(no != NULL){
            printf("%d\n", no->valor);
            no = no->proximo;
        }
        printf("NULL\n");
}


int main(){
    No *lista = NULL;
    
    empilharInicio(&lista, 30);
    empilharInicio(&lista, 20);
    empilharInicio(&lista, 10);
 
    imiprimirLista(lista);

    return 0;
}