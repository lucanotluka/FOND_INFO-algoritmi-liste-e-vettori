#include <stdio.h>
#define DIM 5

int main(){
	int arr[DIM], i, flag;
	flag=1
	for(i=0;i<DIM;i++)
		scanf(" %d\n", &arr[i]);

	for(i=0;i<DIM/2 && flag;i++)
	{
		if(arr[i]!=arr[DIM-1-i])
			flag=0;
	}
	printf("%d", flag);
	return 0;
}