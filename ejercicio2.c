#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array = NULL,contador,num;
    printf("Cuantos elementos va a tener el arreglo: ");
    scanf("%d",&num);
    array = (int*) realloc(array,num*sizeof(int));
    if(array != NULL){
        printf("Vector reservado: \n[   ");
        for(contador = 0; contador<num;contador++){
            printf("Valor: %d direccion: %p -->",*(array+contador),array+contador);
        }
        printf("    ]\n");
        
    }
    num -= 1;//Reducción del tamaño del arreglo
    array = (int*) realloc(array,num*sizeof(int));
    if(array != NULL){
        for(;contador < num;contador++){
            printf("Ingrese el dato del elemento %d: ",contador);
            scanf("%d",(array+contador));
        }
        printf("Vector reservado: \n[   ");
        for(contador = 0; contador<num;contador++){
            printf("Valor: %d direccion: %p -->",*(array+contador),array+contador);
        }
        printf("    ]\n");
        free(array);
        printf("La memoria ha sido liberada.\n");
    }  
    return 0;
}
//Programa creado por Avila Gonzalez Alejandra Daniela y Barragan Rivera Diego el 17/6/2021
