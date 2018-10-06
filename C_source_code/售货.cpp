#include <iostream>
using namespace std;
int main(void)
{
	int number,type1,type2;
	float prise;
	cout<<"请选择商品类型: 1.日用品； 2.文具； 3.食品."<<endl;
	cin>>type1;
	if(type1==1)
	{
		cout<<"请选择商品："<<endl<<"1.牙刷(3.5); 2.牙膏(9.5); 3.肥皂（5.0）."<<endl;
		cin>>type2;
		if(type2==1) 
		   prise=3.5;
		else if(type2==2)
		   prise=9.5;
		else 
		   prise=5.0;
		cout<<"请输入数量："<<endl;
		cin>>number; 	
		cout<<"总价格为："<<prise*number<<"元"<<endl;
	}
	else if(type1==2)
	{
		cout<<"请选择商品："<<endl<<"1.铅笔(1.0); 2.橡皮(2.5); 3.直尺（2.0）."<<endl;
		cin>>type2;
		if(type2==1) 
		   prise=1.0;
		else if(type2==2)
		   prise=2.5;
		else 
		   prise=2.0; 
		cout<<"请输入数量："<<endl;
		cin>>number; 	
		cout<<"总价格为："<<prise*number<<"元"<<endl;
	}
	else
	{
		cout<<"请选择商品："<<endl<<"1.蛋糕(5.0); 2.饮料(2.5); 3.方便面（2.0）."<<endl;
		cin>>type2;
		if(type2==1) 
		   prise=5.0;
		else if(type2==2)
		   prise=2.5;
		else 
		   prise=2.0; 
		cout<<"请输入数量："<<endl;
		cin>>number; 	
		cout<<"总价格为："<<prise*number<<"元"<<endl;
	}
	return 0;
}
