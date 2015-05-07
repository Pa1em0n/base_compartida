#include <stdio.h>
#include "leer.c"
#include "busqueda.c"

int main(int argc, char const *argv[])
{
	/* code */
	char entrada;
	//Hacemos un ciclo infinito para que se ejecute mientras haya cambios
	while(1){
		//Imprimimos la interfaz (menú)
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("%s\n", "╔================================================╗");
		printf("║\tHola Bienvenido A Tu Base De Datos\t ║\n");
		printf("║\t\t\t\t\t\t ║\n");
		printf("║º t - Lista todas las canciones por título \t ║\n");
		printf("║º a - Lista todas las canciones por año\t ║\n");
		printf("║º d - Lista todas las canciones por duración\t ║\n");
		printf("║º g - Lista todas las canciones por género\t ║\n");
		printf("║º i - Lista todas las canciones por intérprete  ║\n");
		printf("║º s - Salir\t\t\t\t\t ║\n");	
		printf("%s\n", "╚================================================╝");
		//Solicitamos la acción que el usuario desea ejecutar
		printf("Introduce la opción que deseas: \n");
		//Leemos la entrada 
		scanf("%c",&entrada);
		//Mandamos a llamar las funciones según la opción que haya ingresado el usuario
		switch(entrada){

			case 't':

			case'a':

			case'd':

			case'g':

			case'i':

			case's':
				printf("¡¡¡Te vemos pronto!!!");
				return;	
			default:
				printf("Opción no válida");
		}
	}
	return 0;
}

	
