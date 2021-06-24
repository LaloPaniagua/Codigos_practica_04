#include<stdio.h>
#include<stdlib.h>
#include"ejercicio3.h"
NODO* crear_nodo_malloc(INFO info){
    NODO* t=(NODO*)malloc(sizeof(NODO));
    t->sig=NULL;
    t->info=info;
    return t;
}
NODO* crear_nodo_calloc(INFO info){
    NODO* t=(NODO*)calloc(1,sizeof(NODO));
    t->sig=NULL;
    t->info=info;
    return t;
}
int main(){
    INFO a=1;
    INFO b=2;
    NODO* nodo_m = crear_nodo_malloc(a);
    NODO* nodo_c = crear_nodo_calloc(b);

    printf("Direccion de memoria del nodo creado con malloc: %p\n",nodo_m);
    printf("Direccion de memoria del nodo creado con calloc: %p\n",nodo_c);
    getchar();
    return EXIT_SUCCESS;
}



