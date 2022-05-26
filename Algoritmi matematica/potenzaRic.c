#include <stdio.h>

int pot(int,int);

int main(){
	int m,n;
	
	scanf(" %d %d", &m,&n);
	printf("%d\n", pot(m,n));
	
	return 0;
}

int pot(int base, int esp)
{
	if(esp==0)
		return 1;
	return base*pot(base,esp-1);
}


