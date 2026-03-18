#include <stdio.h>

/*/Implemente uma função que troca o valor de duas variáveis 
inteiras passadas como parâmetro./*/
int troca(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}


int main()
{
    int a = 7;
    int b = 5;
    printf("Antes: a = %d b = %d\n", a,b);

    troca(&a, &b);
    printf("Depois: a = %d b = %d\n", a,b);

    return 0;
}
