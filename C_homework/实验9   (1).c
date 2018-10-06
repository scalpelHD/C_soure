#include <stdio.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2
#define area(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c))
void main()
{
	int a,b,c;
	printf("请输入三边长：");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&c+b>a) printf("三角形面积为%.2f\n",area(a,b,c));
	else printf("输入错误！"); 
 } 
