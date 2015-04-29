#include "estructuras.h"
#include <stdlib.h>
#include <string.h>

int
indicadora1(cancion *can, char *nombre)
{
	if (strcmp(nombre,can->nombre) == 1)
		return 1;
	else
		return 0;
}

int
indicadora2(cancion *can, char *interprete)
{
    if(strcmp(interprete,can->interprete) == 1)
        return 1;
    else
        return 0;
}

int indicadora3(cancion *can, char *genero)
{
    if(strcmp(genero,can->genero) == 1)
        return 1;
    else
        return 0;
}

nodo * 
busqueda(nodo * lista, int (*funcion) ())
{
    nodo *list = (nodo*) malloc(sizeof(nodo));
    while(lista != NULL)
    {}
}   

void
agregaLista(nodo *lista, cancion * ag)
{
    if(lista->siguiente == NULL)
        lista->siguiente = ag;                      
}
