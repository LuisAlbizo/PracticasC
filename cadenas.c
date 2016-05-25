main(){
    char cadena[] = "-Este mundo, que lo aprieta a uno por todos lados, que va vaciando punos de nuestro polvo aqui y alla, deshaciendonos en pedazos como si rociara la tierra con nuestra sangre. Que hemos hecho? Por que se nos ha podrido el alma? Tu madre decia que cuando menos nos queda la caridad de Dios. Y tu la niegas, Susana. Por que me niegas a mi como tu padre? Estas loca?";
	printf("Cadena:\n\n%s\n\nTamano: %i bytes\n\n",cadena, sizeof(cadena));
	int i;
	for (i=0;i<sizeof(cadena);i++){
		char *punt = &cadena[i];
		printf("Direccion de memoria:%p   ", punt);
		punt = cadena[i];
		printf("Valor:%p   =%s\n",punt,&punt);
	}
}
