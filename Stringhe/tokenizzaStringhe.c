#include <stdio.h>
#define MAXW 15
#define WMAX 12
#define MAXS 150

void spezzo(char[],char[][MAXW+1], int, int*);

int main(){
	char line[MAXS+1], matrix[WMAX][MAXW+1];
	int parole_eff, i;

	scanf(" %[^\n]", line);
	spezzo(line,matrix,WMAX,&parole_eff);

	for(i=0;i<parole_eff;i++)
		printf("%s\n", matrix[i]); /* Anche *(matrix+i)*/

	return 0;
}

void spezzo(char line[],char m[][MAXW+1], int wMax, int *wNum);
{
	int i, j;
	for(i=0, j=0, *wNum=0; line[i]!='\0' && *wNum<wMax; i++)
	{
		if(line[i]==' ')
		{
			m[*wNum][j]='\0';
			(*wNum)++;
			j=0;
		}
		else{
			m[*wNum][j]=line[i];
			j++;
		}
	}
	if(*wNum<wMax)
	{
		(*wNum)++;
		m[*wNum][j]='\0';
	}
}