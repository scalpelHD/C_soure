#include<stdio.h>

/*判断是平年还是闰年*/
int IsLeap (int year) {
    if((year%4==0)&& (year%100!=0) || (year%400==0))
      return 1;
    else
      return 0;
}
/*计算今年的第一天是星期几*/
int FirstWeeday (int year) {
    int days = (year-1)*365 + (year-1)/4 - (year-100)/100 + (year-1)/400;
    return days%7;
}
/*打印星期*/
void PrintWeedTitl () {
    int i;
    for(i = 0;i<7;i++){
        switch(i) {
            case 0 : printf("  Sun  ");break;
            case 1 : printf("Mon  ");break;
            case 2 : printf("Tue  ");break;
            case 3 : printf("Wed  ");break;
            case 4 : printf("Thu  ");break;
            case 5 : printf("Fri  ");break;
            case 6 : printf("Sat  ");break;
            default : break;
        }
    }
    printf("\n");
}
/*打印月份*/
void PrintMonTitl(int month) {
   switch(month) {
     case 0 : printf("一月\n");break;
     case 1 : printf("二月\n");break;
     case 2 : printf("三月\n");break;
     case 3 : printf("四月\n");break;
     case 4 : printf("五月\n");break;
     case 5 : printf("六月\n");break;
     case 6 : printf("七月\n");break;
     case 7 : printf("八月\n");break;
     case 8 : printf("九月\n");break;
     case 9 : printf("十月\n");break;
     case 10 : printf("十一月\n");break;
     case 11 : printf("十二月\n");break;
     default : break;
   }
}
/*格式化输出日历*/
void PrintYear (int year) {
    int m,i,d;
    char c=' ';
    int MONTH[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(IsLeap(year)) MONTH[1] = 29;
    int firstwed = FirstWeeday(year);
    printf("Year: %d\n",year);
    printf("========================\n");
    for(m = 0;m<12;m++) {
      PrintMonTitl(m);
      PrintWeedTitl();
      for(d=1;d<=MONTH[m];d++) {
        if(d == 1) {
            for(i = 0;i<firstwed;i++)
              printf("%5c",c);
            printf("%5d",d);
        }
        else {
            printf("%5d",d);
        }           
        if((firstwed+d-1)%7 == 6) printf("\n");
      } 
      firstwed = (firstwed + MONTH[m])%7;
      printf("\n");
   }

}
/*测试结果*/
int main() {
    int year = 2018;
    PrintYear(year);
}
