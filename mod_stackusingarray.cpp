//stack using array in c++ with modifications

#include<iostream>
using namespace std;
#define max 20
int stack[max];
int top=-1;


void  push(int n)
{	
	
	if(top==max-1)
		cout<<"stack  full";
	else 
	{
		top++;
		stack[top]=n;
		cout<< "value inserted\n";
	}
}

void pop()
{
	if(top==-1)
		cout<<"Stack empty\n";
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
void peek()
{
	if(top==-1)
		cout<<"Stack empty";
	else
		cout<<"top element is:"<<stack[top]<<"\n";
}

int main()
{
	
		
		push(5);
		push(55);
		push(0);
		push(6);
		display();
		pop();
		display();
		pop();
		peek();
		
                    
}            
		
			
