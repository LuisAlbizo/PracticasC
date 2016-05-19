main(){
	int x,y;
	printf("Escribe un numero: ");
	scanf("%i",&x);
	system("clear");
	printf("Escribe otro numero: ");
	scanf("%i",&y);
	system("clear");
	if (x>y){
		printf("%i es mayor que %i", x, y);
	}
	else if (x==y){
		printf("%i es igual a %i", x, y);
	}
	else {
		printf("%i es mayor que %i", y, x);
	}
}