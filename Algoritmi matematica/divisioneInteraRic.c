#include <stdio.h>

void div(int, int, int*, int*);

int main(){
	int a, b;
	int ris, res;
	
	scanf(" %d %d", &a, &b);
	div(a, b, &ris, &res);
	printf("%d %d\n", ris, rest);

	return 0;
}

void div(int a, int b, int *ris, int *res)
{
	if(a-b<0)
	{
		*ris=0;
		*res=a;
	} else {
		a-=b;
		div(a,b,ris,res);
		(*ris)++;
	}
}
