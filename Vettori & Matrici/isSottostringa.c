#include <stdio.h>
#include <string.h>
#define DIM 30

int main(){
	char s[DIM+1], t[DIM+1];
	int i, j, conta, l_s, l_t;

	scanf("%[^\n] %[^\n]", s, t);

	l_s=strlen(s);
	l_t=strlen(t);

	for(i=0, conta=0; i<=l_s-l_t; i++)
	{
		for(j=0; j<l_t && s[i+j]==t[j]; j++);
		if(j==l_t)
			conta++;		
	}
	printf("%d", conta);

	return 0;
}