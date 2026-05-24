#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]){
    if(argc == 0){
        printf("No me dieron argumentos");}

    char* aux = NULL;
    char* mayoraux = NULL;
    int tamaño = 0;
    int mayortamaño = 0;

    for(int i = 1; i<argc; i++){
        aux = argv[i];
        tamaño = (int)GetLength(aux);
        if(mayortamaño<tamaño){
            mayortamaño=tamaño;
            mayoraux=aux;
        }
    }    
    printf("el argumento %s tiene el mayor tamaño %d \n", mayoraux, mayortamaño);
    
    return 0;
}