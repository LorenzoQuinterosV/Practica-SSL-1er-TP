#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]){
    if(argc == 0){
        printf("No me dieron argumentos");}

    char* aux = argv[1];

    for(int i = 2; i<argc; i++){
        if(!AreEqual( aux, argv[i])){
        printf("No son iguales 0\n");
        return 0;}
    }

    printf("Son iguales 1\n");
    
    return 0;
}