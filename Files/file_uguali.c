#include <stdio.h>
#define MAX 30

int main(){
	FILE *fpA, *fpB;
	char strA[MAX+1], strB[MAX+1], c1, c2;
	int uguali;

	scanf(" %[^\n] %[^\n]", strA, strB);
	fpA = fopen(strA, "rb");
	if(fpA)
	{
		fpB = fopen(strB, "rb");
		if(fpB)
		{
			uguali = 1;
			fscanf(fpA,"%c", &c1);
			fscanf(fpB,"%c", &c2);
			while(!feof(fpA) && !feof(fpB) && uguali)
			{
				if(c1!=c2)
					uguali = 0;
				fscanf(fpA,"%c", &c1);
				fscanf(fpB,"%c", &c2);
			}
			if(!feof(fpA) || !feof(fpB))
				uguali = 0;

			if(uguali)
				printf("Uguali\n");
			else
				printf("Diversi\n");

			fclose(fpB);
		} else
			printf("Errore file B\n");

		fclose(fpA);
	} else
		printf("Errore file A\n");

	return 0;
}