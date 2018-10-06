#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	char s[20],t;
	int i=0;
	printf("asdfgh");
	while((t=getch())!='\r')
	{
		if(i==0&&t=='\b') continue;
		if(i<0) 
		{
			i=0;
			continue;
		}
		if(t=='\b')
		{
			printf("\b ");
			s[--i]=0;
			printf("\b");
			continue;
		}
		putchar('*');
		s[i++]=t;
	}
	printf("\n\n");
	fflush(stdin);
	s[i]=0;
	printf("%s",s);
}
