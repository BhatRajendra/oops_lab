//stack using array in c++
#include<iostream>
using namespace std;
#define max 20
int stack[max];
int top=-1;


void  push()
{	
	int n;
	if(top==max-1)
		cout<<"stack  full";
	else 
	{
		cout<<"Enter the value:";
		cin>>n;
		top++;
		stack[top]=n;
		cout<< "value inserted\n";
	}
}

void pop()
{
	if(top==-1)
		cout<<"Stack empty";
	else
	{
		top--;
		cout<< "Value deleted\n";
	}
}

void  display()
{
	int i;
	if(top==-1)
		cout<<"Stack empty";
	else
	{
		cout<<"Displaying elements:\n";
		for(i=top;i>-1;i--)
			cout<< stack[i]<< "\n";
	}
}
int main()
{
	int choice;
	while(1)
	{
		cout<<"Enter your choice\n"<<"1.push\n2.pop\n3.display\n4.exit\n";
		cin>>choice;
		switch(choice)
		
           	{
		       case 1: push();
		       break;
		       case 2: pop();
		       break;
		       case 3: display();
		       break;
		       case 4:exit(0);
		       break;
		       default:cout<<"invalid choice";
		       break;
          	}
     }                      
}            
		
			
