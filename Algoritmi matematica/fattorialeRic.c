#include <stdio.h>

int fattoriale(int);

int main()
{
	int n, f;
	do
		scanf(" %d", &n);
	while(n<0);

	f=fattoriale(n);
	printf("%d\n", f);

	return 0;
}

int fattoriale(int n);
{
	if(n==0||n==1)
		return 1;
	return n*fattoriale(n-1);
}

