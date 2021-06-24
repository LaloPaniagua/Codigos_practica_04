#include<stdio.h>
#include<stdlib.h>
#include"ejercicio4.h"
NODO* crear_nodo(INFO info){
    NODO* t=(NODO*)malloc(sizeof(NODO));
    t->sig=NULL;
    t->info=info;
    return t;
}
LISTA* crear_lista(){
    LISTA* l=(LISTA*)malloc(sizeof(LISTA));
    l->head=l->tail=NULL;
    l->num=0;
    return l;
}
bool insertar_inicio(LISTA* l,INFO info){
    NODO* nuevo=crear_nodo(info);
    if(l->head==NULL  && l->tail==NULL){
        l->head=l->tail=nuevo;
        l->num++;
        return true;
    }
    else{
        nuevo->sig=l->head;
        l->head=nuevo;
        l->num++;
        return true;
    }
    return false;
}
void imprimir_direcciones_lista(LISTA *l){
    for(NODO* t=l->head;t != NULL;t=t->sig){
        printf("%p  ",t);
    }
    printf("\n");
}
int main(){
    LISTA* l1=crear_lista();
    INFO a=1;
    INFO b=2;
    INFO c=3;
    INFO d=4;
    insertar_inicio(l1, a);
    insertar_inicio(l1, b);
    insertar_inicio(l1, c);
    insertar_inicio(l1, d);
    printf("Direcciones de memoria de cada uno de los elementos: ");
    imprimir_direcciones_lista(l1);
    getchar();
    return EXIT_SUCCESS;
}
//Programa creado por Paniagua Broca Eduardo Miguel el 17/6/2021
