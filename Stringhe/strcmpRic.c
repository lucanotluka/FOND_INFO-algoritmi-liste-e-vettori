#include <stdio.h>
#define MAX 30

int comp(char*,char*);

int main(){
	char a[MAX+1], b[MAX+1];
	int uguali;

	scanf(" %[^\n] %[^\n]", a, b);
	uguali = comp(a,b);
	printf("%d\n", uguali);

	return 0;
}

int comp(char *a, char *b)
{
	if(*a != *b)
		return 0;
	if(*a == '\0' && *b == '\0')
		return 1;
	return comp(a+1,b+1);
}