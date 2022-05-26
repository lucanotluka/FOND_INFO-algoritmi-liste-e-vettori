#include <stdio.h>
#define MAX 30

int lung(char*);

int main(){
	char str[MAX+1];
	int lun;
	
	scanf(" %[^\n]", str);
	lun = lung(str);
	printf("%d\n", lun);

	return 0;
}

int lung(char *str)
{
	if(*str == '\0')
		return 0;
	return lung(str+1)+1;
}
