#include <stdio.h>
void calgrade(int score)
{
	if(score<0||score>100)
	  printf("����ĵ÷ִ���\n");
	else
	  switch(score/10)
	  {
	  	case 10:
	  	case 9:printf("�ȼ�ΪA\n\a");break;
	  	case 8:printf("�ȼ�ΪB\n");break;
	  	case 7:printf("�ȼ�ΪC\n");break;
	  	case 6:printf("�ȼ�ΪD\n");break;
	  	default:printf("�ȼ�ΪE\n"); 
	  }
}
int main(void)
{
	int score;
	while(score>=0) 
	{
	printf("������ٷ��Ƶ÷֣�\n");
	scanf("%d",&score);
	calgrade(score);
    }
	while(1);
	return 0;
 } 
