#include <stdio.h>
int main(void)
{
	char a;
	while(a>=0)
	{
	printf("请输入字符：\n");
	scanf("%c",&a);
	if(a>=0&&a<=57)
	  if(a>=0&&a<=32)
	    printf("该字符类型为控制字符！\n");
	  else
	    if(a>=33&&a<=47)
	      printf("该字符类型为其他字符！\n");
	    else
	      printf("该字符类型为数字字符！\n");
	else
	  if((a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=126))
	    printf("该字符类型为其他字符！\n");
	  else
	    if(a>=65&&a<=90)
	      printf("该字符类型为大写字母！\n");
		else
		  printf("该字符类型为小写字母！\n");
	getchar();
	}
	while(1); 
    return 0; 
 } 
