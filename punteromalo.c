//si cambio el tipo de ountero por char,
//solo puedo acceder al ultimo byte :v
main(){
	int num = 0x0000112a; /*no son
	 necesarios los 4 "0" a la izquierda*/
	int *punt = &num;
	printf("El valor original del numero es: %i\n\n",num);
	printf("Numero Original: %#X\n", num);
	printf("Numero desde puntero original: %#X\n\n", *punt);
	*punt = 0xff2f; /*solo toma en cuenta
	los 2 ultimos digitos{no es asi, me 
	equivoque :v}*/
	printf("Puntero: %#X\n",*punt);
	printf("Numero: %#X\n",num);
	printf("\nEl nuevo valor del numero es: %i\n\n\n\nDireccion en memoria de la variable: %#X",num, punt);
}	
//%#X es para mostrar un valor
//hexadecimal o algo asi :v	
/*El puntero solo modifica los 2 ultimos
valores--- que pendejo que soy :'v era
porque el puntero era tipo char y debia
ser igual que el numero; tipo int */
//Augustus Waters