#include <stdio.h>
main(){
int x, y, z, res1, res2;	
printf("Escribe un numero: ");
scanf("%i",&x);	
printf("Escribe otro numero: ");
scanf("%i",&y);
printf("Escribe un ultimo numero: ");
scanf("%i",&z);		
res1=x+y+z;
printf("La suma de esos 3 numeros es: %i \n", res1);
res2=res1/x;
printf("El resultado de la suma de los 3 numeros entre el primer numero es: %i", res2);
}