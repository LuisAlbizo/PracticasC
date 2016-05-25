#include <stdio.h>
main(){
	char nombre[]="Luis Albizo";
	printf("Cadena: nombre\nforma de declaracion: char nombre[]=\"Luis Albizo\";\nforma de imprimirla: printf(\"$s\",nombre);");
	printf("\nvalor: %s\ntamanio: %i bytes\n\n",nombre, sizeof(nombre));
	char explicacionNombre[]="Explicacion: al no declarar un tamanio del array (porque una cadena es un array de caracteres en realidad) le da el tamanio del numero de caracteres que yo le asigne que son 11 (los espacios cuentan)\npero entonces: por que 12 B?\nbueno es porque al final de una cadena/array siempre va a estar un caracter nulo o none (aun no estoy seguro) que vale \\0 o EOF que indica que cuando encuentre ese caracter va a dejar de leer la cadena/array y no exceda el tamanio de memoria o el espacio que se le asigno a la cadena/array\n\n";
	printf("%s\nla anterior explicacion fue almacenada en una cadena su tamanio en bytes es: %i\n\n", explicacionNombre, sizeof(explicacionNombre));
	char apellido[6];
	apellido[0]='A';
	apellido[1]='l';
	apellido[2]='b';
	apellido[3]='i';
	apellido[4]='z';
	apellido[5]='o';
	printf("Cadena: apellido\nforma de declaracion: \nchar apellido[6];\napellido[0]='A';\napellido[1]='l';\napellido[2]='b';\napellido[3]='i';\napellido[4]='z';\napellido[5]='o';\nforma de imprimirla: printf(\"$s\", apellido);\nvalor: %s\ntamanio: %i bytes\n\n", apellido, sizeof(apellido));
char nomb[8];	
nomb[0]='L';
nomb[1]='u';
nomb[2]='i';
nomb[3]='s';
nomb[4]='\0';
nomb[5]='x';
nomb[6]='y';
nomb[7]='z';
printf("Cadena: nomb\nvalor: %s\ntamanio: %i bytes\n", nomb, sizeof(nomb));
}
