#include <stdio.h>
#define FN "ciao.txt" /* FN = File Name */

int main(){
	char c;
	FILE *fp;	/* FILE è una struttura che definisce un tipo di dato */
	/* E' sempre necessario APRIRE un file innanzitutto */
	fp = fopen(FN, "w"); /* fopen apre il file (FN) in modalità write ("w") */
		/* Se apre il file, ad fp è assegnato un indirizzo di memoria
		   altrimenti gli viene assegnato il NULL */

	if(fp==NULL)
		printf("Errore di apertura del file\n");
	else
	{
		for(c='0';c<='9';c++)
			fprintf(fp, "%c", c);
		fclose(fp);	/* Chiudere sempre il file aperto */
	}
	return 0;
}