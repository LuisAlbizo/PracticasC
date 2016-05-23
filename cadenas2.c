#include <stdio.h>
main(){
	char nombre[]="Luis Albizo";
	printf("Cadena: nombre\nforma de declaracion: char nombre[]=\"Luis Albizo\";\nforma de imprimirla: printf(\"$s\",nombre);");
	printf("\nvalor: %s\ntamanio: %i bytes\n\n",nombre, sizeof(nombre));
	char explicacionNombre[]="Explicacion: al no declarar un tamanio del array (porque una cadena es un array de caracteres en realidad) le da el tamanio del numero de caracteres que yo le asigne que son 11 (los espacios cuentan)\npero entonces: por que 12 B?\nbueno es porque al final de una cadena/array siempre va a estar un caracter nulo o none (aun no estoy seguro) que vale \\0 o EOF que indica que cuando encuentre ese caracter va a dejar de leer la cadena/array y no exceda el tamanio de memoria o el espacio que se le asigno a la cadena/array\n\n";
	printf("%s\nla anterior explicacion fue almacenada en una cadena su tamanio en bytes es: %i\n\n", explicacionNombre, sizeof(explicacionNombre));
	char apellido[7];
	apellido[0]="A";
	apellido[1]="l";
	apellido[2]="b";
	apellido[3]="i";
	apellido[4]="z";
	apellido[5]="o";
	//apellido[6]="\0";
	printf("La cadena apellido -> %s\n", apellido);
}
