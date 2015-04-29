#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	char entrada;
	while(1){
		printf("\n\n\n");
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
		printf("Introduce la opcion que deseas: \n");
		scanf("%c",&entrada);
		if (entrada == 's'){
			printf("Vuelve pronto XD\n");
			break;
		}
	}
	return 0;
}

	
