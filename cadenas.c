main(){
    char cadena[] = "Hola mundo, esta es una cadena larga\nSolo un array puede almacenar tantos bytes";
	printf("Cadena:\n%s\n\nTamaño: %i bytes\n\n",cadena, sizeof(cadena));
	int i;
	for (i=0;i<sizeof(cadena);i++){
		char *punt = &cadena[i];
		printf("Direccion de memoria: %p    ", punt);
		punt = cadena[i];
		printf("Valor: %p    =%s\n",punt,&punt);
	}
}