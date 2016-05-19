#include <stdio.h>

main(){
char nombre;
int edad;
printf("Como te llamas? ");
scanf("%s", &nombre);
printf("Cuantos años tienes? ");	
scanf("%i", &edad);
printf("Hola %s, tienes %i años", &nombre, edad);		
}