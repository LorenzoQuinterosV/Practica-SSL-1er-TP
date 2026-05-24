#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]){
    if(argc == 0){
        printf("No me dieron argumentos");}

    for(int i = 1; i<argc; i++){
        char* aux = argv[i];
        printf("%s \n", aux);
    }    
    return 0;
}
