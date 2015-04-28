#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H
typedef struct nodo nodo;
typedef struct cancion cancion;

struct cancion {
   char *nombre;
   char *interprete;
   char *duracion;
   char *genero;
   char *anio;
};

struct nodo {
   cancion *valor;
   nodo *siguiente;
};

#endif /* ESTRUCTURAS_H */