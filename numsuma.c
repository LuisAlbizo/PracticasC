#include <conio.h>
int i, num, r=0, lim;
main(){
	printf("Cuantos numeros desea sumar?... ");
	scanf("%i",&lim);
	for(i=1;i<=lim;i++){
		printf("Anote el %i numero: ", i);
		scanf("%i", &num);
		r=r+num;
//system("clear"); no se necesita conio
		clrscr(); //se necesita conio
//clrscr es mas rapido al parecer
	}
	printf("La suma de los %i numeros es: %i",lim, r);
}