#include <bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
};
struct node *top=NULL;

void push(int val)
{
    if(top==NULL)
    {
        top=new node();
        top->data=val;
        top->next=NULL;
    }
    else
    {
        node *newNode=new node();
        newNode->data=val;
        newNode->next=top;
        top=newNode;

    }
}
void pop()
{
    int el;
    node *temp;
    if(top==NULL)
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        el=top->data;
        temp=top;
        top=top->next;
        free(temp);
    }
}
void display()
{
    node *temp = top;

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
    push(6);push(7);push(8);push(9);push(10);push(11);
    display();
    pop();
    cout<<endl;
    display();
}




