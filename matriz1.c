main(){
	int matriz1[6][3] = { {4,5,6},{7,8,9},{1,2,3},{9,34,12},{0,-4,66},{99,11,20} };
	int i,j;
	for (i=0;i<6;i++){
		for (j=0;j<3;j++){
			printf("Coordenadas [%i,%i] = (%i)\t", i, j, matriz1[i][j]);
		}
		printf("\n");
	}
}
