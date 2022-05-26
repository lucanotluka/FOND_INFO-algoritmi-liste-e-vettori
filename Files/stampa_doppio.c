#include <stdio.h>
#define MAXS 30

int main(){
	FILE *fp;
	char fn[MAXS+1];
	int a, b;

	scanf(" %s", fn);
	fp = fopen(fn, "r");
	if(fp)
	{
		fscanf(fp, "%d", &a);
		fscanf(fp, "%d", &b);
		while(!feof(fp))
		{
			if(b==2*a)
				printf("%d %d\n", a, b);
			a = b;
			fscanf(fp, "%d", &b);
		}	
		
		fclose(fp);
	} else
		printf("Errore\n");

	return 0;
}