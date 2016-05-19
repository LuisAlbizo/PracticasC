#include <conio.h>
#include <stdio.h>

main(){
	int i, fac=1, n;
	printf("Que factorial quieres saber?... ");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		fac=fac*i;
	}
	printf("El factorial de %i es: %i", n,fac);
}