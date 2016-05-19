#include <stdio.h>

main(){
	int sd;
	int ds;
	int ss;
	printf("Escribe tu salario por dia: ");
	scanf("%i",&sd);
	printf("¿Cuantos dias trabajas por semana? ");
	scanf("%i",&ds);
	ss=sd*ds;
	printf("Tu salario semanal es: %i", ss);		
}