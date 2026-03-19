#include <stdio.h>
#include <stdlib.h>

//Struct chamada No que guarda um dado e um ponteiro
typedef struct{
    int dado;
    struct No *ponteiro;
}No; //Alias da struct


int main (){

 No idade;
 No *ptr = &idade;

 idade.dado = 50;

 ptr -> dado = 50;

printf("%d",idade.dado);
printf("%d",ptr->dado);

}
