#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *fgetcol(char *c,int sizes,FILE * f1){
	int ipos=0;
	int poss=0;
	char *lns="\n";
	char *cc;
	char *ccc;
	cc=c;
	if (sizes>3){
		ipos=ftell(f1);
		poss=fread(c,sizes-2,1,f1);
		c[sizes-1]=0;
		if (poss >4)c[poss+1]=0;
		ccc=strstr(c,lns);
		if (ccc!=NULL){
			ccc[0+strlen(lns)]=0;
			ipos=ipos+strlen(c);
			fseek(f1,ipos,SEEK_SET);
		}
		
	}else{
		cc=NULL;
		return cc;
	}
	return cc;
}
