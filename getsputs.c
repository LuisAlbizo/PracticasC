#include <stdio.h>
main(){
	char nombre[10];
	char apellido[10];
	/*char mensaje[]="este mensaje aparece si escribiste mas de 10 caracteres, esto pasa porque no se encontro el caracter nulo: \\0, y sigue imprimiendo hasta que lo encuentre al final de esta cadena.";*/
	printf("Escribe tu nombre: ");
	gets(nombre);
	printf("Escribe tu apellido: ");
	gets(apellido);
	puts(nombre);
	puts(apellido);
}
