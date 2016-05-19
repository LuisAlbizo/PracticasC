promedio();

main(){
	int puntos=0, calificacion, materias, i;
	printf("Cuantas materias deseas calcular?  ");
	scanf("%i",&materias);
	for(i=0;i<materias;i++){
		printf("Anota una calificacion: "); 
		scanf("%i",&calificacion);
		puntos+=calificacion;
	}
	system("clear");
	printf("El promedio es: %i\n", promedio(puntos, materias));
}

promedio(int puntos, int materias){
	int promedio = puntos/materias;
	return promedio;
}
