#include <stdio.h>
main(){
	printf("Espacio que ocupa un dato char: %i bytes\n", sizeof(char));
	printf("Espacio que ocupa un dato short: %i bytes\n", sizeof(short));
	printf("Espacio que ocupa un dato float: %i bytes\n", sizeof(float));
	printf("Espacio que ocupa un dato int: %i bytes\n", sizeof(int));
	printf("Espacio que ocupa un dato long: %i bytes\n", sizeof(long));
	printf("Espacio que ocupa un dato unsigned: %i bytes\n", sizeof(unsigned));
	printf("Espacio que ocupa un dato double: %i bytes\n", sizeof(double));
}