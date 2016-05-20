main(){
	int ih,im,is, h=0, m=0, s=0;
	for(ih=0;ih<24;ih++){
		for(im=0;im<60;im++){
			for(is=0;is<60;is++){
				printf("Hora: %i minuto: %i segundo: %i\n", h, m, s);
				s+=1;
			}
			if (s==60){s=0;}
			m+=1;
		}
		if(m==60){m=0;}
		h+=1;
		if (h==24){ih=61,im=61,is=61;}
	}
	printf ("\n1 dia\n");
}
