#ifndef ejercicio4_H
#define ejercicio4_H
#include <stdbool.h>
typedef struct _nodo NODO;
typedef int INFO;

struct _nodo{
    INFO info;
    NODO *sig;
};

typedef struct _lista LISTA;
struct _lista{
    NODO *head;
    NODO *tail;
    int num;
};

NODO* crear_nodo(INFO info);
LISTA* crear_lista();
bool insertar_inicio(LISTA* l,INFO info);
void imprimir_direcciones_lista(LISTA *l);
#endif