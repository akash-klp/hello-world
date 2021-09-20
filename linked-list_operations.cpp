/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

by akash kalasapura 
*******************************************************************************/

#include <iostream>

using namespace std;

int num;
struct node 
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_beg()
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    
    cout<<"(insert at beg) enter element into linked list";
    cin>>num;
    
    new_node->data=num;
    
    if(head==NULL)
    {
        new_node->next=NULL;
        head=new_node;
    }
    else
    {
        new_node->next=head;
        head=new_node;
    }

    
}

void insert_end()
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node*));
    struct node *cur;
    cur=head;
    
    cout<<"\n enter element to insert at end :";
    cin>>num;
    
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    
    new_node->data=num;
    new_node->next=NULL;
    cur->next=new_node;
}

void display()
{
    struct node *cur;
    cur=head;
    cout<<endl;
    while(cur->next!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<cur->data;
}


int main()
{
    insert_beg();
    insert_beg();
    insert_end();
    insert_end();
    display();
    return 0;
}
