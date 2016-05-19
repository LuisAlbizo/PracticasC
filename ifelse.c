#include <stdio.h>

main(){
	int num;
	printf("Escribe un numero: ");
	scanf("%i",&num);
	if (num%2==0){
		printf("%i es un numero par",num);
	}
	else {
		printf("%i es un numero impar",num);
	}
}