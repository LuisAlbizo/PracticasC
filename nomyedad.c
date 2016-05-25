#include <stdio.h>

main(){
char nombre;
int edad;
printf("Como te llamas? ");
scanf("%s", &nombre);
printf("Cuantos anos tienes? ");	
scanf("%i", &edad);
printf("Hola %s, tienes %i anos\n", &nombre, edad);		
}
