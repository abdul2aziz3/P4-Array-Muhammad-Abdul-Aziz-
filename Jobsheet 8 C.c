#include <stdio.h>
int main()
{
	char x[5],i;
	printf("Muhammad Abdul Aziz");
	printf("\nNIM : F1B019095");
	printf("\n===================\n\n");
	for(i=0;i<5;i++)
	{
		printf("masukan nilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("nilai ke %i = %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
