#include <stdio.h>
void main()
{
	char c;
	while(c>=0)
	{ 
	printf("ÇëÊäÈë×ÖÄ¸£º\n");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	  c=c+32;
	else
	  if(c<=122&&c>=97)
	      c=c-32;
	  else
	      c='#';
	printf("%c\n",c);
	getchar();
    }
	while(1); 
}
