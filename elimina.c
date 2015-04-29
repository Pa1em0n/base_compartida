/*importando bibliotecas*/
#include <stdio.h>
#include "estructuras.h"

int
indicadora1(cancion * can, char * nombre)
{
	if (nombre == can->nombre)
		return 1;
	else
		return 0;
}

int busca(nodo*n, cancion*elemento)
{
	if(n==NULL)
		return 0; //False
	if(n->valor == elemento)
		return 1;//True
	else
		return busca(n->siguiente,elemento);
}

int indicadora(nodo*lista,cancion*c)
{
	return busca(lista,c);
}

//int algo(int *estructura, int *funcion, )

int main(void)
{
	return 0;
}