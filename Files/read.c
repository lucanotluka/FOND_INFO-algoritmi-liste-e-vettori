#include <stdio.h>
#define FN "ciao.txt"

int main(){
	FILE *fp;
	char c;

	fp = fopen(FN, "r");
	if(fp!=NULL){
		fscanf(fp,"%c", &c);	/* Leggi la prima volta e poi */
		while(!feof(fp)){			/* verifica; poi leggi e verifica */
			printf("%c ", c);		/* ogni volta fino alla fine*/
			fscanf(fp, "%c", &c);
		}
		fclose(fp);
	} else
		printf("Errore di apertura file\n");

	return 0;
}