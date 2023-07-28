/* WAP to read the data of n emplyees and compute net salary of each using pointer . */
using namespace std;
#include<iostream>
class employee
{
	int num , basic;
	long da ,it, net,gross;
	char name[20];
	public:
		void read();
		void calc();
		void display();
};
void employee::read()
{
	cout<<"Enter emplyee's ID , name and basic salary:"<<endl;
	cin>>num>>name>>basic;
}

void employee::calc()
{
	da=(0.52)*basic;
	gross=da+basic;
	it=(0.30)*gross;
	net=da+basic-it;
}

void employee::display()
{
	cout<<endl<<"Employee ID:  "<<num<<endl<<"Empoyee's name:  "<<name<<endl<<"Basic Salary:  "<<basic<<endl<<"DA:  "  <<da<<endl<<"Income Tax:"<<it<<endl<<"Net salary:"<<net<<endl<<"Gross salary:"<<gross<<endl<<endl;
}


int main()
{
	int n;
	cout<<"Enter the number of employees:";
	cin>>n;
	employee e[n];
	for(int i=0;i<n;i++)
	{
		e[i].read();
		e[i].calc();
	}
	for(int i=0;i<n;i++)
	{
		
		e[i].display();
	}
	return 0;
}
















































