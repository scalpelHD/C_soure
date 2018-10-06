#include <stdio.h>
#include <string.h> 
void main()
{
	char s[18],*p=s,x[11]={'1','0','X','9','8','7','6','5','4','3','2'},*xp=x,t[10];
	int c[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},*cp=c,sum=0;
	printf("请输入15位身份证号码：");
	fgets(s,sizeof(s),stdin);
	s[strlen(s)-1]=0;
    p=&s[6];
    strcpy(t,p);
    s[6]='1',s[7]='9';
    p=&s[8];
    strcpy(p,t);
    p=s;
    while(*p)
	{
		sum+=(*cp)*(*p-'0');
		p++,cp++;
    }
    s[17]=*(xp+sum%11);
    puts(s);
}
