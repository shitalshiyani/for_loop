#include<stdio.h>

main()
{
	int a,n,sum=0;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	for (a=1; a<=n; a++)
	{
		printf("%d\n",a);
		sum=sum+a;
	}
	a++;
	printf("Sum of all elements are=""%d",sum);
	
}
