	/*string reverse without using strrev*/
#include<stdio.h>
#include<conio.h>
main()
{
	char name[100],t;
	int length,first,last;
	clrscr();
	printf("Enter name:");
	gets(name);
	for(length=0;name[length]!='\0';length++)
	first=0;
	last=length-1;
	while(first<=last)
	{
		t=name[first];
		name[first]=name[last];
		name[last]=t;
		first++;
		last--;
	}
	printf("Reverse of string is:%s",name);
	getch();
	return 0;
}