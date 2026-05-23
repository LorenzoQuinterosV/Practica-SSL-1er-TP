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
            return false;
        }
    }
    return true;
}

bool AreDecimalDigits(const char * cadena){

}

bool Contains(const char * cadena, char caracter){

}

int ToInteger(const char * cadena){

}

int SizeCompare(const char * cadena1, const char * cadena2){
    return (int) GetLength(cadena1) - (int) GetLength(cadena2);
}