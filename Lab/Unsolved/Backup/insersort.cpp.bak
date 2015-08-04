#include <stdio.h>

int ia[]={0,6,4,5,8,9,7};

int main()
{
	int i,j;
	int tmp;

	tmp=ia[6];
	j=5;

	while (tmp < ia[j]){
		ia[j+1]=ia[j];
		j--;
	}

	ia[j+1]=tmp;

	//출력 
	//
	for(i=1;i<7;i++)
		printf("%d ",ia[i]);
}
