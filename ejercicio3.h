#ifndef ejercicio3_H
#define ejercicio3_H
#include <stdbool.h>

typedef struct _nodo NODO;
typedef int INFO;

struct _nodo{
    INFO info;
    NODO *sig;
};

NODO* crear_nodo_malloc(INFO info);
NODO* crear_nodo_calloc(INFO info);
#endif

