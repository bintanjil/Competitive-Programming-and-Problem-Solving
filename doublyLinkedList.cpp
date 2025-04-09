#include<bits/stdc++.h>
#define endl     '\n'
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
struct node *head = NULL;
struct node *tail=NULL;
void insertAthead(int val)
{
    node *temp=new node();

    if(head==NULL)
    {
        temp->next=NULL;
        temp->prev=NULL;
        temp->data=val;
        head=temp;
    }
    else
    {
        temp->data=val;
        temp->prev=NULL;
        temp->next=head;
        head=temp;
    }
}
void append(int val)
{
	if(head==NULL)
	{
		head=new node();
		head->data=val;
		head->next=NULL;
		tail=head;
	}
	else
	{
		node *newnode=new node();
		newnode->data=val;
		newnode->next=NULL;
		tail->next=newnode;
		tail=tail->next;
	}
}
void delete_node(int val)
{
    node *ptr,*temp;
    ptr=head;
    while(ptr->data!=val)
    {
        ptr=ptr->next;
    }
    if(ptr->next==NULL)
    {
        cout<<"Value doesn't exist"<<endl;
    }
    else if(ptr->next->next==NULL)
    {
        ptr->next=NULL;
    }
    else
    {
        temp=ptr->next;
        ptr->next=temp->next;
        temp->next->prev=ptr;
        free(temp);

    }
}
void display()
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
}
void search(int val)
{
    node *temp;
    temp=head;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            flag=1;
            break;
        }
        else{
            flag=0;
        }
        temp=temp->next;
    }
    if(flag==1)
    {
        cout<<"Data found"<<endl;
    }
    else
        cout<<"Data not found"<<endl;
}
int main()
{
     append(10);
     append(6);
     append(5);
     append(16);
     append(100);
     insertAthead(12);

    display();
    delete_node(16);
    cout<<endl;
    display();
    search(1234234234234424223);

}
