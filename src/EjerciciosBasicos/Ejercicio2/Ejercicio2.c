/*
 * Ejercicio2.c
 *
 *  Created on: 18/8/2016
 *      Author: utnso
 */

#include <stdio.h>
#include <stdlib.h>
#include "../../commons/string.h"

/*
*   Asigna en el tercer parámetro, la concatenación
*   de los primeros dos Strings
*   Ejemplo:
*   char* nombre = "Ritchie";
*   char* saludo;
*   string_concat("Hola ", nombre, &saludo);
*   =>
*   saludo = "Hola Ritchie"
*/
void string_concat_dinamyc(const char* a, const char* b, char** c){
	*c = string_new();
	string_append(c, a);
	string_append(c, b);
}

/*
int main(void) {
	char* nombre = "Ritchie";
	char* saludo;
	string_concat_dinamyc("Hola ", nombre, &saludo);

	puts(saludo);
	return EXIT_SUCCESS;
}
*/
