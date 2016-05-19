main(){
	int i, tab, lim, res=0;
	printf ("¿De que numero sera la tabla?... ");
	scanf ("%i",&tab);
	printf ("¿De que tamaño sera la tabla?... ");
	scanf ("%i",&lim);
	system ("clear");
	printf ("La tabla del %i es:\n",tab);
	for (i=1;i<=lim;i++) {
		res=tab*i;
		printf("%i x %i = %i\n", tab, i, res);
	}
}