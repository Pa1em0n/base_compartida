#include "estructuras.h"

int
indicadora(cancion * can, char * nombre)
{
	if (nombre == can->nombre)
		return 1;
	else
		return 0;
}


