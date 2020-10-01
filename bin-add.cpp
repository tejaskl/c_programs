
#include<stdio.h>
main()
/* code by Tejas KL
		https://github.com/tejaskl/		   
 */
{
	int a[5]={0},b[5]={0},c[5]={0},i,k=0;
	printf("Enter the binary number with spaces       :");
	for(i=1;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter the other binary number with spaces :");
	for(i=1;i<5;i++)
		scanf("%d",&b[i]);
	printf("-----------------------------------------------------\n");
	for(i=4;i>=0;i--)
	{
		if(a[i]==0&&b[i]==0)
		{
			if(k==0)
			{
				c[i]=0;
			}
			else
			{
				c[i]=1;
			}
			k=0;
		}
		else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==0))
		{
			if(k==0)
			{
				c[i]=1;
			}
			else
			{
				c[i]=0;
				k=1;
			}
		}
		else if(a[i]==1&&b[i]==1)
		{
			if(k==0)
			{
				c[i]=0;
				k=1;
			}
			else
			{
				c[i]=1;
				k=1;
			}
		}
	}
	printf("                                        ");
	printf("%d |",c[0]);
	for(i=1;i<5;i++)
	printf("%d ",c[i]);
	return 0;
	}
