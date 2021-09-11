#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node * link;    
};

struct node *top;

void push(int new_data)
{
    struct node* temp;

    temp=new node();
    if(!temp)
    {
        cout<<"\nheap overflow";

        exit(0);
    }

    temp->data=new_data;
    temp->link=top;
    cout<<temp->data<<endl;
    top=temp;
}

void display()
{   
    
    struct node* temp;
    temp=top;
    if(temp==NULL)
    {
        cout<<"stack underflow";
        exit(0);
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            cout<<" "<<temp->data<<endl<<" ";
            temp=temp->link;
        }
    }

}


int main()
{
   int num,n;
   cout<<"\nenter limit:";
   cin>>num;
   for(int i=0;i<num;i++)
   {
       cout<<"enter"<<i<<" number";
       cin>>n;
       push(n);
       cout<<"pushed "<<n<<endl;
   }
   cout<<"entered stack elements :";
   display();
}
