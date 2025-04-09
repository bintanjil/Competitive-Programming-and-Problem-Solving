#include<iostream>
#define endl     '\n'
using namespace std;

struct node
{
    int data;
    node *next;
};


struct node *head = NULL;

void append(int val)
{

    if (head == NULL)
    {
        head = new node();  //creating a new node
        head->data=val;
        head->next=NULL;
    }
    else
    {
        node *curr = head;    //make a copy of head

        while(curr->next != NULL)
        {
            curr = curr->next; //go to next node
        }
        node *newNode=new node();
        newNode->data=val;
        newNode->next=NULL;

        curr->next=newNode; //link the new node with the last node
    }
}

void insert(node *prev_node,int val)
{
    if(prev_node==NULL)
    {
        cout<<"The given previous node can not be null;"<<endl;
    }
    node *newNode=new node();
    newNode->data=val;
    newNode->next=prev_node->next;
    prev_node->next=newNode;

}
void delete_node(int val)
{
    node * curr=head;
    node *prev=NULL;
    while(curr->data!=val)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==head)
    {
        node *temp=head;
        head=head->next;
        delete(temp);
    }
    else
    {
        prev->next=curr->next;
        delete(curr);
    }
}

void searchList(node *head,int x)
{
    node *curr=head;
    int flag=0;
    while(curr!=NULL)
    {
        if(curr->data==x)
        {
            flag=1;
        }


        curr=curr->next;

    }


    if(flag==1)
    {
        cout<<"Found"<<endl;
    }
    else if(flag==0)
        cout<<"Not found"<<endl;
}



void display()
{
    node *temp = head;

    if(temp != NULL)
    {
        while(temp != NULL)
        {
            cout<<temp->data<<"  ";

            temp = temp->next;
        }
    }
}


int main()
{
    append(6);
    append(8);
    append(12);
    append(10);
    append(2);
    append(7);
    append(3);
    append(4);
    append(9);
    insert(head,5);
    display();
    cout<<endl;
    //cout<<head->data;
    cout<<endl;
    delete_node(10);
    display();
   searchList(head,18);

    return 0;

}
