#include <stdio.h>
#define MAX 30

int main(){
	FILE *fp;
	char nf[MAX+1];
	int quanti, i, n;

	scanf(" %[^\n]", nf);
	fp = fopen(nf, "w");
	if(fp!=NULL)
	{
		scanf(" %d", &quanti);
		for(i=0;i<quanti;i++){
			scanf(" %d", &n);
			fprintf(fp,"%d ", n);
		}
		fclose(fp);

	} else
		printf("Errore nell'apertura\n");

	return 0;
}