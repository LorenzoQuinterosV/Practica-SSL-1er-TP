#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]){
    if(argc == 0){
        printf("No me dieron argumentos");}
    
    int suma=0;
    int tamaño=0;
    for(int i = 1; i<argc; i++){
        char* aux = argv[i];
        tamaño = ToInteger(aux);
        suma = suma + tamaño;
    }    
    printf("La suma de todos los argumentos es %d \n", suma);
    
    return 0;
}