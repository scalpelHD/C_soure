#include <iostream> 
using  namespace std;
#include<cstring> 
class Num
{          //ʮ������ת����ʮ���� 
 char *p;       //�ַ��������ʮ������   
 int n;   //���ת�����ʮ������ 
public: 
 Num(char *str);   //���캯������ str ��ʼ�� p  
 void fun(); 
 void print();      //���ʮ�����ƺͶ�Ӧ��ʮ������ 
 ~Num();   //�����������ͷŶ�̬�洢�ռ� 
};
Num::Num(char *str)
 {  if(str)  {   p=new char[strlen(str)+1];   strcpy(p,str);  }  else   p=0; } 
 void Num::fun()
  {
    n=0;  for(int i=0;p[i];i++)  
	{ 
  if(p[i]>='0'&&p[i]<='9') //ʮ�������ַ�Ϊ�����ַ� 
   n=n*16+p[i]-'0'; 
  else if(p[i]>='a'&&p[i]<='f') //ʮ�������ַ�ΪСд�ַ� 
   n=n*16+p[i]-'a'+10; 
  else                     //ʮ�������ַ�Ϊ�����ַ� 
   n=n*16+p[i]-'A'+10;  } 
   }
    void Num::print() 
	{ 
 cout<<"ʮ����������"<<p<<endl; 
 cout<<"ʮ��������"<<n<<endl; 
}
 Num::~Num() 
 {  if(p) delete []p; }
  int main() 
  {  char str[100]; 
 cout<<"������һ��ʮ����������"; 
 cin.getline(str,100); 
 Num num(str);  num.fun();  num.print();  return 0; } 

