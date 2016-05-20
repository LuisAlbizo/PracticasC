main(){
	int x,y;
	printf("Numero de filas: ");
	scanf("%i",&x);
	printf("Numero de columnas: ");
	scanf("%i",&y);
	int matriz[x][y];
	int i,j;
	for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			printf("Introduce un valor para las coordenadas (%i,%i): ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	system("clear");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Coordenadas(%i,%i)=%i ", i+1,j+1,matriz[i][j]);
		}
		printf("\n");
	}
}
