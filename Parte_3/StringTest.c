#include "String.h"
#include <assert.h>
#include <stdlib.h>

int main(){

    assert(IsEmpty("HOLAAA") == false);
    assert(IsEmpty("") == true);

    assert(GetLength("tamano 8") == 8);
    assert(GetLength("tamano") == 6);

    assert(AreEqual("hola","chau") == false);
    assert(AreEqual("hola","hola") == true);

    assert(AreEqualNotRecursive("hola","chau") == false);
    assert(AreEqualNotRecursive("hola","hola") == true);

    assert(AreDecimalDigits("123") == true);
    assert(AreDecimalDigits("12a3") == false);
    
    assert(Contains("holaaa", 'a') == true);
    assert(Contains("holaaa", 'p') == false);

    assert(ToInteger("-985") == (-985));
    assert(ToInteger("8") == 8);

    assert(SizeCompare("hola","chau") == 0);
    assert(SizeCompare("hola","holaa") == -1);
    assert(SizeCompare("holaa","hola") == 1);

    char buffer[50] = "hola"; 
    assert(AreEqual(Concatenate(buffer, "chau"), "holachau") == true);
    char buffer2[50] = "hola";
    assert(AreEqual(Concatenate(buffer2, ""), "hola") == true);
    char buffer3[50] = "";
    assert(AreEqual(Concatenate(buffer3, "chau"), "chau") == true);
    
    char* str_pot1 = Potenciar("hola", 3);
    assert(AreEqual(str_pot1, "holaholahola") == true);
    free(str_pot1); 
    char* str_pot2 = Potenciar("hola", 0);
    assert(AreEqual(str_pot2, "") == true);
    free(str_pot2);

    char* str_rev1 = revertir("hola");
    assert(AreEqual(str_rev1, "aloh") == true);
    free(str_rev1);
    char* str_rev2 = revertir("");
    assert(AreEqual(str_rev2, "") == true);
    free(str_rev2);    
    assert(revertir(NULL) == NULL);

    return 0;

}