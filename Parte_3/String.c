#include "String.h"

bool IsEmpty(const char * cadena){
    return cadena[0] == '\0' || cadena == NULL;
}

size_t GetLength(const char * cadena){
    if (*cadena != '\0'){
        return 1 + GetLength(cadena+1);
    }
    return 0;
}

bool AreEqual(const char * cadena1, const char * cadena2){
    if(cadena1 == NULL || cadena2 == NULL){
        return cadena1 == cadena2;}

    if (*cadena1 == '\0' && *cadena2 == '\0') {
        return true;}

    if(* cadena1 == * cadena2){
        return AreEqual(cadena1 + 1, cadena2 + 1);}

    return false;
}

bool AreEqualNotRecursive(const char * cadena1, const char * cadena2){
    if(GetLength(cadena1)!=GetLength(cadena2)){
        return false;}
    
    for(int i=0; i < (int)GetLength(cadena1); i++){
        if(cadena1[i]!=cadena2[i]){
            return false;}}

    return true;
}

bool AreDecimalDigits(const char * cadena){
    if(cadena==NULL || *cadena == '\0'){
        return false;}
    
    bool confirmacion;
    for(int i=0; i < (int)GetLength(cadena); i++){
        switch(cadena[i]){
            case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                confirmacion = true;
                break;

            default: 
                confirmacion = false;
                break;}
        
        if(confirmacion == false){
            return false;}}

    return true;
}

bool Contains(const char * cadena, char caracter){
    if(cadena == NULL){
        return false;}
    
    for(int i=0; i < (int) GetLength(cadena); i++){
        if(cadena[i]==caracter){
            return true;}}
    
    return false;
}

int ToInteger(const char * cadena){
    int index = 0;
    int signo = 1;
    int entero = 0;

    if(cadena[index] == '-'){
        signo = -1;
        index ++;}

    for(;index < (int)GetLength(cadena); index++){
        entero = entero*10 + (cadena[index] - '0');}
    //ese -0 es clave ya que eso te da la diferencia entre los valores de ascii que es como se interpretan los numeros, de otra manera te sumaria 48 para 0, 49 para 1 y asi...
    entero=entero*signo;
    return entero;
}

int SizeCompare(const char * cadena1, const char * cadena2){
    return (int) GetLength(cadena1) - (int) GetLength(cadena2);
}

char * Concatenate(char * cadena1, char * cadena2){
    if(cadena1 == NULL || *cadena1 == '\0'){
        return cadena2;}

    if(cadena2 == NULL || *cadena2 == '\0'){
        return cadena1;}
    
    int tamañoC2 = (int) GetLength(cadena2);
    int tamañoC1 = (int) GetLength(cadena1);
    for(int i=0; i < (int) GetLength(cadena2); i++){
        cadena1[tamañoC1+i]=cadena2[i];}

    cadena1[tamañoC1 + tamañoC2] = '\0';

    return cadena1;
}

char * Potenciar(char * cadena, __u_int potencia){
    if (cadena == NULL || *cadena == '\0'){
        return cadena;}
    
    int tamaño = (int)GetLength(cadena);
    char * auxiliar = malloc((tamaño * (int) potencia) + 1);

    if(auxiliar==NULL){
        return NULL;}

    for(int i = 0; i < (int) potencia; i++){

        for(int j = 0; j < tamaño; j++){
            auxiliar[(i*tamaño) + j] = cadena[j];}
    }
    auxiliar[(tamaño * (int) potencia)] = '\0';
    return auxiliar;
}

char * revertir(char * cadena){
    if (cadena == NULL || *cadena == '\0'){
        return cadena;}
    
    int tamaño = (int)GetLength(cadena);
    char * auxiliar = malloc(tamaño + 1);

    if(auxiliar==NULL){
        return NULL;}

    for(int i = 0; i<tamaño; i++){
        auxiliar[i]=cadena[(tamaño-1)-i];}
    
    auxiliar[tamaño]='\0';
    return auxiliar;
}