#include <stdio.h>
#include <stdlib.h>
#include "estructuras.h"

void leeArchivo(){
	FILE *archivo;
    char caracter;
  	archivo = fopen("base.txt","r");//se abre el archivo.
    if (archivo == NULL){//si el archivo no existe lo crea.
        printf("No existe el fichero\nCreando fichero...");
        archivo = fopen("base.txt", "wt");
        fclose(archivo);
    }else{
        while (!feof(archivo)){
            caracter = fgetc(archivo);
        	char *linea = readLine(archivo);

            if(caracter != '\377'){
                if(caracter == '|'){
                    printf("x");
                }
                else{
                    printf("%c",caracter);
                }
            }else{
                printf("fin");
            }
        }
    }
    fclose(archivo);

}

int main(){
	leeArchivo();
	return 0;
}