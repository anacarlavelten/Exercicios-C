#include <stdio.h>
#include <stdlib.h>

/*
2. Escreva um programa que implementa um vetor dinâmico, onde o usuário 
começa a digitar números inteiros positivos e estes são guardados no vetor.
 A cada momento, o vetor deve possuir tamanho igual ao número de valores digitados
  pelo usuário. Quando o usuário digitar um número negativo, significa que acabou 
  a lista de números e o programa deve imprimir todos eles na tela
*/

int main()
{
    int *vetor = NULL;
    int tam, num = 0;

    printf("Digite um número inteiro para adicionar ou um número negativo para encerrar o programa\n");

    while(1){
        scanf("%d", &num);

        if(num < 0){
            printf("Número indicado é negativo, encerrando o programa\n");
            break;
        }
        tam++;
        int *temp = (int *) realloc (vetor, tam * sizeof(int));

        if (temp == NULL){
            printf("Memória insuficiente, não foi possível alocar um espaço");
            free(vetor);
            return 1;
        }
        vetor = temp;
        vetor[tam -1] = num;
    }

    printf("Você digitou %d números\n", tam);

    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
