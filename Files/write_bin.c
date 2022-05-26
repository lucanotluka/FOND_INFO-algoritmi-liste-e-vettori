#include <stdio.h>
#define FN "ciao.bin"

int main(){
	FILE *fp;
	int quanti, n, i;

	fp = fopen(FN,"wb");
	if (fp)
	{
		scanf(" %d", &quanti);
		for(i=0; i<quanti; i++)
		{
			scanf(" %d", &n);
			fwrite(&n, sizeof(n), 1, fp);
		}

		fclose(fp);
	}
	else
		printf("Errore\n");

	return 0;
}

