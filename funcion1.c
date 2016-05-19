int areaRectangulo(int base, int altura){
	int areaR = base*altura;
	return areaR;
}
int areaTriangulo(int base, int altura){
	int areaT =(base*altura)/2;
	return areaT;
}

main(){
    volatile int a, b;
	printf("Escribe la base de un rectangulo: ");
	scanf("%i",&b);
	printf("Escribe la altura: ");
	scanf("%i",&a);
    printf("El area del rectangulo es: %i\n",areaRectangulo(b, a));
	printf("\nEscribe la base de un triangulo: ");
	scanf("%i",&b);
	printf("Escribe la altura: ");
	scanf("%i",&a);
    printf("El area del triangulo es: %i\n",areaTriangulo(b, a));
    
}	
