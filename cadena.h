#ifndef __CADENA_H__
#define __CADENA_H__

#include <wchar.h>

#define LONGITUD 35
#define DELIMITADORES L" \n\r:;,.!?¡¿\"()[]{}"
#define ALFABETO L"abcdefghijklmnopqrstuvwxyzáéíóúüñ"
#define MINSUGERENCIAS 5

typedef wchar_t* String;

void toLower(String s);

int isDelimiter(wchar_t c);

#endif
