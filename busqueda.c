#include "estructuras.h"
#include <stdlib.h>

int
indicadora1(cancion * can, char * nombre)
{
	if (nombre == can->nombre)
		return 1;
	else
		return 0;
}

int
indicadora2(cancion * can, char * interprete)
{
    if(interprete == can->interprete)
        return 1;
    else
        return 0;
}

int indicadora3(cancion * can, char * genero)
{
    if(genero == can->genero)
        return 1;
    else
        return 0;
}

nodo * 
busqueda(nodo * lista, int (*funcion) ())
{
    nodo * list = (nodo*) malloc(sizeof(nodo));
    while(lista != NULL)
    {
           
    }
}   

void
agregaLista(nodo * lista, char * dato)
{
    
}
