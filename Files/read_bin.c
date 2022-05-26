#include <stdio.h>
#define FN "ciao.bin"

int main(){
	FILE *fp;
	int n;

	fp = fopen(FN, "rb");

	if(fp)
	{
		fread(&n, sizeof(int), 1, fp);
		while(!feof(fp))
		{
			printf("%d\n", n);
			fread(&n, sizeof(int), 1, fp);
		}

		fclose(fp);
	}
	else 
		printf("Errore\n");

	return 0;
}
