main(){
	int array[10];
	int i,num, mayor=0;
	for(i=0;i<10;i++){
		printf("Escribe un numero: ");
		scanf("%i",&array[i]);
	}
	i=0;
	for(i=0;i<10;i++){
		if (array[i]>mayor){
			mayor=array[i];
		}
	}
	system("clear");
	printf("El numero mayor es: %i\n\n", mayor);
}
