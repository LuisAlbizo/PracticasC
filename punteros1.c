#include <stdio.h>

main(){
	char carac = 'h';
	char *punt;
	punt =carac;
	printf("%p\n",punt);
/*apuntamos al valor en hexadecimal 
de &carac y nos devuelve: 0x68*/
	punt = "h";
	printf("%p",punt);
/*nos devuelve la direccion en memoria 
de: ???(punt supongo)*/
}