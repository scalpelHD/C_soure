#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int k;
	for(k=1;k<argc;k++)
	{
		printf("%s ",argv[k]);
	}
	while(1);
	return 0;
}
