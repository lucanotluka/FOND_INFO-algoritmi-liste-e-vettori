#include <stdio.h>

int fibonacci(int);

int main(){
	int i;

	scanf(" %d", &i);
	printf("%d\n", fibonacci(i));

	return 0;
}

int fibonacci(int i)
{
	if(i==0||i==1)
		return i;
	return fibonacci(i-2)+fibonacci(i-1);
}

