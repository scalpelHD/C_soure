#include <stdio.h>
#include<time.h> 
void main()
{
	int x,r,i,y;
	float t,z,a;
	while(1)
	{
		srand(time(NULL));
		r=rand()%10+1;
		y=rand()%10+1;
		i=1;
	while(3)
	{
		printf("���������ֽ��в²⣺");
		scanf("%d",&x);
		if(x==r) {printf("��¶��ˣ��������ѡ��������%d��\n\a",r);break;} 
		if(i==3) {printf("���ν�������û�в¶ԣ����ź�����ѡ��������%d��\n",r);break;} 
		if(x<r) printf("��С�ˣ�����ҪŬ����\n");
		if(x>r) printf("�´���, �������Ͱ���\n");
	    i++;
	}
	if(y==2) printf("�������ĵ���Ϸ�㶼�棬�㻹��������͸���ˡ���������\n");
	if(y==4) printf("����ҵ�Ĭ�����Ǹ��գ���������\n");
	if(y==5) printf("�����������һ�󲽣�\n\n\n\n\n\n\n\n");
	if(y==7) {printf("����������������ˣ���ɵ�˰ɣ��治���˰ɣ�����������������������");break;} 
	if(y==3)
	{
		for ( z = 1.5f; z > -1.5f; z -= 0.1f) 
		{  
        for ( t = -1.5f; t < 1.5f; t += 0.05f)
		 {  
             a = t * t + z * z - 1;  
            putchar(a * a * a - t * t * z * z * z <= 0.0f ? '*' : ' ');  
        }  
        putchar('\n');  
    } 
		printf("лл����������ô���ĵ���Ϸ�������о!!!\n"); 
	}
    }
    while(1);
 } 
