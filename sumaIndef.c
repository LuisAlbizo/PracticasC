#include <stdio.h>
main(){
	int a,b,res,opcion = 1, opcion2 = 1;
	
	while (opcion == 1){
		opcion2=1;
		printf("Escribe un numero: ");
		scanf("%i", &a);
		printf("Escribe otro numero: ");
		scanf("%i", &b);
		res = a+b;
		printf("La suma de esos 2 numeros es: %i\n", res);
		while (opcion2 == 1){
		printf("¿Desea continuar? \n1.- si\n2.- no\n\nEscoge: ");
		scanf("%i", &opcion);
		system("clear");
		if (opcion != 1 && opcion != 2){
			printf("No escogiste una opcion correcta\n\n");
			opcion = 1;
		}
		else {
			opcion2=2;
		}
		}
	}
	printf("Hasta luego");
}	