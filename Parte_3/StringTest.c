#include "String.h"
#include <assert.h>

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

    assert(Concatenate("hola","chau") == "holachau");
    assert(Concatenate("hola","") == "hola");
    assert(Concatenate("","chau") == "chau");

    assert(Potenciar("hola", 3) == "holaholahola");
    assert(Potenciar("hola", 0) == "");
    assert(Potenciar("", 3) == "");

    assert(revertir("hola") == "aloh");
    assert(revertir("") == "");
    assert(revertir(NULL) == NULL);




}