/*
 ============================================================================
 Name        : SO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../commons/string.h"

/*
*   Retorna un String nuevo que es la concatenación
*   de los dos Strings pasados por parámetro
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo = string_concat("Hola ", nombre);
*   =>
*   saludo = "Hola Ritchie"
*/
char* string_concat(const char* a, const char* b){
	char *string = string_new();
	string_append(&string, a);
	string_append(&string, b);
	return string;
}

/*
 * int main(void) {
 * 	char *string = string_concat("Hola", " mundo cruel");
 * 	puts(string);
 * 	return EXIT_SUCCESS;
 * }
*/

