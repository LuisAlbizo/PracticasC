//punteros en C
#include <stdio.h>
main(){
	int varint;
	printf("Escribe un numero: "); 
	scanf("%i%*c",&varint);
	int *puntint = varint;
	printf("Puntero hacia un entero\n\nContenido de la variable.- %p\nDireccion en memoria.- %p\nValor de la variable.- %i",puntint, &puntint,puntint);
	printf("\n-----------------\n");
	fflush(stdin);
	char varchar;
	printf("Escribe un caracter:  ");
	scanf("%c%*c",&varchar);
	char *puntchar = varchar;
	printf("Puntero hacia un caracter\n\nContenido de la variable.- %p\nDireccion en memoria.- %p\nValor de la variable.- %c",puntchar, &puntchar,puntchar);
    printf("\n-----------------\n");
    int varstring;
    printf("Escribe una palabra: ");
    scanf("%s",&varstring);
    int *puntstring = varstring;
    printf("Puntero hacia una cadena\n\nContenido de la variable.- %p\nDireccion en memoria.- %p\nValor de la variable.- %s\n",puntstring,&puntstring,&varstring);

}
