#include<stdio.h>

main()
{
	int a,n,fact=1;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	for (a=1; a<=n; a++)
	{
		printf("%d\n",a);
    	fact=fact*a;	
	}
        printf("Factorial of all elements are=""%d",fact);
}
