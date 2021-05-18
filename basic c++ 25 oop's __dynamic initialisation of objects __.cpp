#include<iostream>
using namespace std;
class bank_deposit{
	int principle;
	int years;
	float rate_of_int;
	float return_value;
	public:
		int i=0;
		bank_deposit(){};
		bank_deposit(int p,int y,float r);
		bank_deposit(int p,int y,int r);
		void show();
		
};
bank_deposit::bank_deposit(int p,int y,float r)
{
	
	principle=p;
	years=y;
	rate_of_int=r;
	return_value=principle;
	for(i=0;i<y;i++)
	{
		return_value = return_value*(1+rate_of_int);
	}	
}

bank_deposit::bank_deposit(int p,int y,int r)
{
	
	principle=p;
	years=y;
	rate_of_int=float(r)/100;
	return_value=principle;
	for(i=0;i<y;i++)
	{
		return_value = return_value*(1+rate_of_int);
	}	
}
void bank_deposit::show()
{
	cout<<endl<<"the amount was"<<principle<<"after "<<years<<"and on interest rate of "
	<<rate_of_int<<"it is now"<<return_value<<endl;
	
}
int main()
{
	bank_deposit obj1,obj2,obj3;
	int p,y;
	float r;
	int R;
	cout<<"Enter the values for your account:"<<endl;
	cin>>p>>y>>r;
	obj1=bank_deposit(p,y,r);
	obj1.show();
	
	cout<<"enter the values for your account :"<<endl;
	cin>>p>>y>>R;
	obj2=bank_deposit(p,y,R);
	obj2.show();
	
}
