#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]){
    if(argc == 0){
        printf("No me dieron argumentos");}

    for(int i = 1; i<argc; i++){
        char* aux = argv[i];
        int tamaño = (int)GetLength(aux);
        printf("el argumento %s tiene tamaño %d \n", aux, tamaño);
    }    
    return 0;
}