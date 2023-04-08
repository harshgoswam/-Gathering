#include<stdio.h>

int fact (int num)
{
	if (num<=1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}

main()
{
	int n,factorial;
	
	printf("Enter Value Of n=");
	scanf("%d",&n);
	
	factorial=fact(n);
	printf("Factorial of %d=%d",n,factorial);
}
