#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array = NULL,*array2 = NULL,contador,num;
    printf("Cuantos elementos va a tener el arreglo: ");
    scanf("%d",&num);
    array = (int*) calloc(num,sizeof(int));//Creación del arreglo por medio de la función calloc
    if(array != NULL){
        for(contador=0;contador < num;contador++){
            printf("Ingrese el dato del elemento %d: ",contador);
            scanf("%d",(array+contador));
        }
        printf("Vector reservado: \n[   ");
        for(contador = 0; contador<num;contador++){
            printf("Valor: %d direccion: %p -->",*(array+contador),array+contador);
        }
        printf("    ]\n");
        
    }
    num *= 2;
    array2 = (int*) realloc(array,num*sizeof(int));// Creación del arreglo por medio de la función realloc
    if(array2 != NULL){
        for(;contador < num;contador++){
            printf("Ingrese el dato del elemento %d: ",contador);
            scanf("%d",(array2+contador));
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
//Programa creado por Avila Gonzalez Alejandra Daniela y Salgado Becerra Justheene Ezequiel el 17/6/2021
