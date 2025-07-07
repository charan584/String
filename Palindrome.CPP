#include<stdio.h>
#include<conio.h>
main()
{
	int no,i,n,r,k;
	clrscr();
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=0;
		no=i;
		while(no!=0)
		{
			k=no%10;
			r=r*10+k;
			no=no/10;
		}
		if(r==i)
			printf("\t%d",i);
	}
	getch();
	return 0;
}