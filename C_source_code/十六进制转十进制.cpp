#include <iostream> 
using  namespace std;
#include<cstring> 
class Num
{          //十六进制转换成十进制 
 char *p;       //字符串，存放十六进制   
 int n;   //存放转换后的十进制数 
public: 
 Num(char *str);   //构造函数，用 str 初始化 p  
 void fun(); 
 void print();      //输出十六进制和对应的十进制数 
 ~Num();   //析构函数，释放动态存储空间 
};
Num::Num(char *str)
 {  if(str)  {   p=new char[strlen(str)+1];   strcpy(p,str);  }  else   p=0; } 
 void Num::fun()
  {
    n=0;  for(int i=0;p[i];i++)  
	{ 
  if(p[i]>='0'&&p[i]<='9') //十六进制字符为数字字符 
   n=n*16+p[i]-'0'; 
  else if(p[i]>='a'&&p[i]<='f') //十六进制字符为小写字符 
   n=n*16+p[i]-'a'+10; 
  else                     //十六进制字符为数字字符 
   n=n*16+p[i]-'A'+10;  } 
   }
    void Num::print() 
	{ 
 cout<<"十六进制数："<<p<<endl; 
 cout<<"十进制数："<<n<<endl; 
}
 Num::~Num() 
 {  if(p) delete []p; }
  int main() 
  {  char str[100]; 
 cout<<"请输入一个十六进制数："; 
 cin.getline(str,100); 
 Num num(str);  num.fun();  num.print();  return 0; } 

