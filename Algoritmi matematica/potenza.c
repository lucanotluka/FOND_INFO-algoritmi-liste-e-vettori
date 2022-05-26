#include <stdio.h>

int main(){
	int n, m;
	float pow;
	scanf(" %d\n %d", &n, &m);

	while(n==0 && m==0)
	{
		printf("Error");
		scanf(" %d\n %d", &n, &m);
	}
	pow=1;

	while(m!=0 && m>0)
	{
		pow = pow*n;
		m=m-1;
	}

	while(m!=0 && m<0)
	{
		pow = 1/(pow*n);
		m=m+1;
	}
	scanf(" %f", pow);
	return 0;
}