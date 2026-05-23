#ifndef STRING_H
#define STRING_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


bool IsEmpty(const char * cadena);


size_t GetLength(const char * cadena);


bool AreEqual(const char * cadena1, const char * cadena2);


bool AreDecimalDigits(const char * cadena);


bool Contains(const char * cadena, char caracter);


int ToInteger(const char * cadena);


int SizeCompare(const char * cadena1, const char * cadena2);


#endif