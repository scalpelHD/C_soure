#include <iostream>
using namespace std;
int main(void)
{
	int number,type1,type2;
	float prise;
	cout<<"��ѡ����Ʒ����: 1.����Ʒ�� 2.�ľߣ� 3.ʳƷ."<<endl;
	cin>>type1;
	if(type1==1)
	{
		cout<<"��ѡ����Ʒ��"<<endl<<"1.��ˢ(3.5); 2.����(9.5); 3.����5.0��."<<endl;
		cin>>type2;
		if(type2==1) 
		   prise=3.5;
		else if(type2==2)
		   prise=9.5;
		else 
		   prise=5.0;
		cout<<"������������"<<endl;
		cin>>number; 	
		cout<<"�ܼ۸�Ϊ��"<<prise*number<<"Ԫ"<<endl;
	}
	else if(type1==2)
	{
		cout<<"��ѡ����Ʒ��"<<endl<<"1.Ǧ��(1.0); 2.��Ƥ(2.5); 3.ֱ�ߣ�2.0��."<<endl;
		cin>>type2;
		if(type2==1) 
		   prise=1.0;
		else if(type2==2)
		   prise=2.5;
		else 
		   prise=2.0; 
		cout<<"������������"<<endl;
		cin>>number; 	
		cout<<"�ܼ۸�Ϊ��"<<prise*number<<"Ԫ"<<endl;
	}
	else
	{
		cout<<"��ѡ����Ʒ��"<<endl<<"1.����(5.0); 2.����(2.5); 3.�����棨2.0��."<<endl;
		cin>>type2;
		if(type2==1) 
		   prise=5.0;
		else if(type2==2)
		   prise=2.5;
		else 
		   prise=2.0; 
		cout<<"������������"<<endl;
		cin>>number; 	
		cout<<"�ܼ۸�Ϊ��"<<prise*number<<"Ԫ"<<endl;
	}
	return 0;
}
