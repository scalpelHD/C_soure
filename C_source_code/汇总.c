#include <stdio.h>
#include <math.h>
#include<string.h>
void fun1()
{
	int x,y,z,a,b;
	printf("请输入两个正整数：");
	scanf("%d%d",&x,&y);
	a=x,b=y;
	if(x<y) z=x,x=y,y=z;
	while(x%y) z=x%y,x=y,y=z;
	printf("%d和%d的最大公约数是%d,最小公倍数是%d。\n",a,b,y,(a*b)/y);
 } 
void fun2()
{
	int s=0,a,b,c;
	printf("请输入一个整数：");
	scanf("%d",&a);
	b=a;
	while(b) c=b%10,b/=10,s=s*10+c;
	if(s==a) printf("%d是回文数！\n",a);
	else printf("%d不是回文数!\n",a);
}
void fun3()
{
	int s[1000],i=0,j,k,t,n;
	char c;
	printf("请输入一个数组（以输入'/'为结束标志）：");
	do
	{
		scanf("%d%c",&s[i++],&c);
	}while(c!='/');
	n=i;
	for(i=0;i<n-1;i++)
	{
	    k=i;
		for(j=i+1;j<n;j++) if(s[j]<s[k]) k=j;
		if(k!=i) t=s[i],s[i]=s[k],s[k]=t;
	}
	for(i=0;i<n;i++) printf("%d\t",s[i]);
	printf("\n");
}
void fun4()
{
	int s1[50][50],s2[50][50],i=0,j=0,m,n;
	char c;
	printf("请输入矩阵（以输入'/'为行结束标志，输入'?'为矩阵结束标志）：\n");
	do
	{
		j=0;
		do
		{
			scanf("%d%c",&s1[i][j++],&c);
		}while(c!='/'&&c!='?');
		i++;
	}while(c!='?');
	m=i,n=j;
	printf("输入的矩阵为：\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) printf("%-4d",s1[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++) 
	for(j=0;j<n;j++) s2[j][i]=s1[i][j];
	printf("它的转置矩阵为：\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) printf("%-4d",s2[i][j]);
		printf("\n");
	}
}
double fun5_1(double x)
{
	if(x==1) return 1;
	else return x*fun5_1(x-1);
}
void fun5()
{
	double x,s;
	printf("请输入要求阶乘的数："); 
	scanf("%lf",&x);
	s=fun5_1(x);
	if(s<10000000) printf("%.0f!=%.0lf",x,s);
	else printf("%.0lf!=%e",x,s);
}
void fun6()
{
	int f1,f2,f,z,i;
	printf("请输入前两项和以及要求的项数：");
	scanf("%d%d%d",&f1,&f2,&z);
	printf("符合要求的斐波那契数列为：\n%-5d%-5d",f1,f2);
	for(i=2;i<z;i++)
	{
		f=f1+f2;
		printf("%-5d",f);
		f1=f2;
		f2=f; 
	}
	printf("\n第%d项为%d\n",z,f);
}
void fun7()
{
	double s=0.0,s1=0.0;
	int a,n,i,j;
	printf("请输入n和a的值：");
	scanf("%d%d",&n,&a);
	for(i=0;i<n;i++)
	{
		s1=0.0;
		for(j=0;j<=i;j++) s1=s1*10+a;
		s+=s1;
	}
	printf("所求的和为%.0lf\n",s);
}
int fun8_1(int x)
{
	int s[10]={0},a,f=1,i,sum;
	sum=x*x;
	while(sum) a=sum%10,s[a]++,sum/=10;
	for(i=0;i<10;i++) if(s[i]>1) f=0;
	return f;
	
}
void fun8()
{
	int i,high,low,n=0;
	printf("请输入区间上下限：");
	scanf("%d%d",&high,&low);
	printf("符合条件的整数有：\nx\tx*x\n");
	for(i=low;i<=high;i++)
	{
		if(fun8_1(i)) n++,printf("%d\t%d\n",i,i*i);
	}
	printf("符合条件的整数一共%d个。\n",n);
}
void fun9()
{
	char s[1000];
	int i;
	printf("请输入要加密的字符串：\n");
	gets(s);
	s[strlen(s)-1]=0;
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			if((s[i]>='x'&&s[i]<='z')||(s[i]>='X'&&s[i]<='Z')) s[i]=s[i]+3-26;
			else s[i]=s[i]+3;
		}
	}
	printf("加密后的字符串为：\n%s",s);
}
void fun10()
{
	char s[1000];
	int i,n=0,a=0;
	printf("请输入字符串：");
	gets(s);
	s[strlen(s)-1]=0;
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) a++;
		if(s[i]>='0'&&s[i]<='9') n++;
	}
	printf("该字符串中共有字母%d个，数字%d个。\n",a,n);
}
void fun11()
{
	double x,tax;
	printf("请输入工资(单位：元)：");
	scanf("%lf",&x);
	if(x<=1600) tax=0;
	if(x>1600&&x<=2500) tax=x*0.05;
	if(x>2500&&x<=3500) tax=x*0.1;
	if(x>3500&&x<=4500) tax=x*0.15;
	if(x>4500) tax=x*0.2;
	printf("个人所得税共%.2f元！\n",tax);
}
void fun12()
{
	int s[1000],z=0,f=0,sum=0,i=0,j;
	char c;
	printf("请输入一个整数数组(以输入'/'为结束标志)：\n");
	do
	{
		scanf("%d%c",&s[i++],&c);
	}while(c!='/');
	j=i;
	for(i=0;i<j;i++)
	{
		if(s[i]>0) z++;
		if(s[i]<0) f++;
		sum+=s[i];
	}
	printf("该数组中共有%d个正数，%d个负数，平均值为%.2f",z,f,(double)sum/j);
}
void fun13()
{
	int s[50][50],i=0,j=0,sum1=0,sum2=0,h,l;
	char c;
	printf("请输入方阵以输入'/'为行结束标志，输入'?'为方阵结束标志）：\n");
	do
	{
		j=0;
		do
		{
			scanf("%d%c",&s[i][j++],&c);
		}while(c!='/'&&c!='?');
		i++;
	}while(c!='?');
	h=i,l=j; 
	printf("输入的方阵为：\n");
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++) printf("%-4d",s[i][j]);
		printf("\n");
	}
	for(i=0;i<h;i++)
	for(j=0;j<l;j++)	
	{
	    if(i==j) sum1+=s[i][j];
		if(i+j==h-1) sum2+=s[i][j]; 
	}
	printf("该方阵主对角线元素之和为%d，副对角线元素之和为%d。\n",sum1,sum2);
}
int fun14_1(int x)
{
	int i,f=1;
	for(i=2;i<=sqrt(x);i++) if(x%i==0) f=0;
	return f;
 } 
void fun14()
{
	int x;
	printf("请输入要判断的数：");
	scanf("%d",&x);
	if(fun14_1(x)) printf("%d是素数！\n",x);
	else printf("%d不是素数",x);
} 
void fun15()
{
	int i=1,j,a=1,n;
	double e=1,b=1,m=1.0;
	printf("请输入要求的最后一项的精度（10的负几次方)：");
	scanf("%d",&n);
	for(j=0;j<n;j++)  m=m*0.1;
	while(b>m)
	{
		a=a*i;
		b=1/(double)a;
		e+=b;
		i++;
    }
	printf("e=%.20f",e);
}
void fun16()
{
	int s[1000],i=0,j,max,min;
	char c;
	printf("请输入一个由整数构成的一位数组(以输入'/'为结束标志)：");
	do
	{
		scanf("%d%c",&s[i++],&c);
	}while(c!='/');
	max=min=s[0];
	for(j=0;j<i;j++)
	{
		if(s[j]>max) max=s[j];
		if(s[j]<min) min=s[j];
	}
	printf("该数组最大值为%d，最小值为%d。\n",max,min);
}
int fun17_1(int y)
{
	return ((y%4==0&&y%100!=0)||y%400==0)?1:0;
}
void fun17()
{
	int y;
	printf("请输入年份：");
	scanf("%d",&y);
	if(fun17_1(y)) printf("%d年是闰年！\n",y);
	else printf("%d年不是闰年！\n",y); 
}
void fun18()
{
	int a,b,i,s=0;
	for(i=100;i<1000;i++)
	{
		b=i;
		s=0;
		while(b)
		{
			a=b%10;
			s+=pow(a,3);
			b/=10;
		}
		if(s==i) printf("%d\t",i);
	}
	printf("\n");
}
void fun19()
{
	int i,j;
	for(i=0;i<21;i++)
    for(j=0;j<34;j++) if((100-i-j)%3==0) if(i*5+j*3+(100-i-j)/3==100) printf("可以买公鸡%d只，母鸡%d只，小鸡%d只。\n",i,j,100-i-j);
}
void main()
{
	int x;
	char c,c0;
	while(1)
	{
		printf("请选择要测试的算法：\n1，求最大公约数、最小公倍数\n2，求回文数\n3，数组排序\n4，二维数组的转置\n5，递归函数求阶乘\n6，求斐波那契数列\n7，a+aa+aaa……求和\n8，求某一区间内符合其平方各位不同的整数\n");
		printf("9，字符串加密\n10，统计字符串中字母和数字的个数\n11，个人所得税计算\n12，求一组数的正负数的个数和平均值\n13，二维数组主副对角线求和\n14，判断素数\n15，求自然数e\n16，求一位数组最大最小值\n");
		printf("17，判断闰年\n18，求水仙花数\n19，百钱白鸡\n");
		scanf("%d%c",&x,&c0); 
		switch(x)
		{
			case 1:fun1();break;
			case 2:fun2();break;
			case 3:fun3();break;
			case 4:fun4();break;
			case 5:fun5();break;
			case 6:fun6();break;
			case 7:fun7();break;
			case 8:fun8();break;
			case 9:fun9();break;
			case 10:fun10();break;
			case 11:fun11();break;
			case 12:fun12();break;
			case 13:fun13();break;
			case 14:fun14();break;
			case 15:fun15();break;
			case 16:fun16();break;
			case 17:fun17();break;
			case 18:fun18();break;
			case 19:fun19();break;
		}
		c0=getchar();
	    printf("\n是否还要继续测试？\nA YES\nB NO\n");
	    c=getchar();
	    if(c=='B') break;
	}
}
