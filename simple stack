
// date -----------------------------------24/07/2021



#include<iostream>
using namespace std;
#define max 50
int stack[50],top=-1;

int push(int var)
{
    if(top>=max)
    cout<<"stack overflow !!";
    else
    {
        top++;
        stack[top]=var;

    }
}

void pop()
{
    if(top==-1)
    cout<<"stack underflow !!!";
    else
    {
        cout<<"popped elemet is : |"<<stack[top]<<"|  at position :"<<top;
        top--;
    }
}

void display()
{
    int x=top;
    for(int i=top;i>=0;i--)
    {
            cout<<"\n\n"<<i<<" ."<<stack[i];
    }

}




int main()
{
    int ch,num,f=1;     
    while(f)
    {
 
        cout<<"\n\n enter your choice :\n 1. push \n 2. pop  \n 3. dipslay   \n 4.exit()";
        cin>> ch;
        
    
        switch(ch)
        {
            case 1: 
                    cout<<"\n enter number to insert :";cin>>num;
                    push(num);
                    break;
            case 2: pop() ;
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:cout<<"wrong choice !!";

        }
    }
}
