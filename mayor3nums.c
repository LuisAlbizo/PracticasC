main(){
	int x, y, z;
	printf("Escribe el valor de x: ");
	scanf("%i", &x);
	system("clear");
	printf("Escribe el valor de y: ");
	scanf("%i", &y);
	system("clear");
	printf("Escribe el valor de z: ");
	scanf("%i", &z);
	system("clear");
	if (x > z && x > y)
		printf("%i es mayor que %i y que %i", x, y, z);
	else if (y > z && y > x)
		printf("%i es mayor que %i y que %i", y, x, z);
	else
		printf("%i es mayor que %i y que %i", z, x, y);
}