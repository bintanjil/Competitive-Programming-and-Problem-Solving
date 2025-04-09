#include <bits/stdc++.h>
using namespace std;
struct node {
   int data;
   node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void enque(int val) {

   if (rear == NULL) {
      rear = new node();
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=new node();
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}
void dequeue() {
   temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else if (temp->next != NULL) {
      temp = temp->next;
      free(front);
      front = temp;
   } else {
      free(front);
      front = NULL;
      rear = NULL;
   }
}
void display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main()
{
    enque(4);
    enque(6);
    enque(8);
    enque(7);
    enque(9);
    enque(42);
    display();
    dequeue();
    cout<<endl;
    display();

}
