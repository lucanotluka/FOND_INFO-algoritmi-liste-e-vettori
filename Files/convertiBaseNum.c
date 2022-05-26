#include <stdio.h>
#define BASE 10
#define FN 'testo.txt'
#define DIM 15

void convertinumero(char*,int*,int*);

int main(){
	FILE *fp;
	char str[DIM+1];
	int somma, num, valido;

	fp = fopen(FN, "r");
	if(fp)
	{
		fscanf(fp, "%s", str);
		somma=0;
		
		while(!feof(fp))
		{
			convertinumero(str, &num,&valido);
			if(valido)
				somma += num;
			fscanf(fp, "%s", str);
		}

		printf("Somma: %d\n", somma);
		
		fclose(fp);

	} else
		printf("Errore");

	return 0;
}

void convertinumero(char *str,int *num,int *valido)
{
	int i, tmp;

	for(i=0, tmp=0, *valido=1; *(str+i)!='\0' && *valido; i++)
	{
		if(!(*(str+i)>='0' && *(str+i)<='9'))
			*valido=0;
		else
			tmp = tmp*BASE +(*(str+i)-'0');
	}

	if(*valido)
		*num = tmp;
}