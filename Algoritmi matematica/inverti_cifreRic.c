#include <stdio.h>
#define BASE 10

void reverse(int);

int main(){
	int n;
	scanf(" %d", &n);
	reverse(n);
	return 0;
}

void reverse(int n){
	if(n<10)
	{
		printf("%d", n);
		return;
	}
	printf("%d", n%BASE);
	reverse(n/BASE);
}