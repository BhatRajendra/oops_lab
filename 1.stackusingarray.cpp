#include<iostream>
using namespace std;
#define size 5

class stack
{
   int stack[size];
   int top=-1;
   
   public:
   
   void push();
   int pop();
   void display();
   void peek();
 };
 

  
  void stack::push()
  {
      int i;
      if (top==size-1)
      {
       cout<<"Stack Overflow";
       return;
       }
       cout<<"Enter a number:\n";
       cin>>i;
       top++;
       stack[top]=i;
  }
  
  int stack::pop()
  {
     if (top==0)
     {
         cout<<"Stack Underflow";
         return 0;
      }
      top--;
      cout<<"The Popped Element is:\n"<<stack[top];
  }
  
 void stack::display()
 {
     int i;
     if(top==0)
     {
         cout<<"Stack Empty";
      }
      cout<<"\n Printing Elements:\n";
      for(i=top;i>-1;i--)
      {     
           cout<<stack[i];
           cout<<"\n";
       }
  }
  
  void stack::peek()
  {
   cout<< "\n The Top Element is:\n";
   cout<< stack[top];
   
   }
  
  int main()
  {
       int ch;
       stack s;
       
       
       while(1)
       {
           cout<<"\nThe operation are:";
           cout<<"\n 1.Push \n 2.Pop \n 3.Display \n 4.Peek \n 5.Exit\n";
           cout<<"Enter Choice:";
           cin>>ch;
           switch(ch)
           {
               case 1: s.push();
               break;
               case 2: s.pop();
               break;
               case 3: s.display();
               break;
               case 4: s.peek();
               break;
               case 5:exit(0);
               default:cout<<"invalid choice";
          }
     }                      
}            
           
