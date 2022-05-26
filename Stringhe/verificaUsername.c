#include <stdio.h>
#define DIM 20
#define N 8
#define NL 5
#define SYMB '%:;-+'

int isUser(int, int, char[], char[]);


int main(){
	char str[DIM+1];
	int check;

	scanf(" %s", str);
	check=isUser(N,NL,SYMB,str);
	printf("%d\n", check);

	return 0;
}


int isUser(int n, int nl, char symb[], char usr[]){
	int i, j, num_lettere, flag;

	for(i=0, num_lettere=0, flag=1; *(usr+i)!='\0'&&flag;i++)
	{
		if((*(usr+i)>='a'&&*(usr+i)<='z')||(*(usr+i)>='A'&&*(usr+i)<='Z'))
			num_lettere++;

		for(j=0; *(symb+j)!='\0'&&flag;j++)
			if(*(usr+i)==*(symb+j))
				flag=0;
	}

	return i>=n&&num_lettere>=nl&&flag;
}