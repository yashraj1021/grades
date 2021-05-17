#include<stdio.h>
main()
{
	printf("Enter your marks:");
	int mrks=0;
	scanf("%d", &mrks);
	if(mrks>85 && mrks<=100)
	{
		printf("GRADE A");
	}
	else if(mrks>70 && mrks<=84)
	{
		printf(" GRADE B");
	}
	else if(mrks>55 && mrks<=69)
	{
		printf("GRADE C");
	}
	else if(mrks>40 && mrks<=54)
	{
		printf("GRADE D");
	}
	else
	{
		printf("GRADE F");
	
	}
	
}
