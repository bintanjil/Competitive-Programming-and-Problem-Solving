#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;

        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top]=0;
            return popValue;

        }

    }
    int count()
    {
        return (top+1);
    }
    int peek(int pos)
    {
         if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos,int val)
    {
        arr[pos]=val;
        cout<<"changed position="<<pos<<"changed value"<<val<<endl;
    }
    void display()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }

};
int main()
{
    Stack s1;
    int option,value,position;
    do
    {
        cout<<"Choose your option"<<"Enter 0 to exit the program"<<endl;
        cout<<"1 for push"<<endl;
        cout<<"2 for pop"<<endl;
        cout<<"3 for isEmpty"<<endl;
        cout<<"4 for isFull"<<endl;
        cout<<"5 for peek"<<endl;
        cout<<"6 for count"<<endl;
        cout<<"7 for change"<<endl;
        cout<<"8 for display"<<endl;
         cout<<"9 for clear screen"<<endl;

        cin>>option;

        switch(option)
        {
        case 1:
            cout<<"enter an integer to push"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:
            cout<<"poop function is called - pooped value="<<s1.pop()<<endl;
            break;
        case 3:
            if(s1.isEmpty())

                cout<<"stack is empty"<<endl;


            else

                cout<<"stack is not empty"<<endl;
                break;

        case 4:
                if(s1.isFull())

                cout<<"stack is Full"<<endl;


            else

            cout<<"stack is not Full"<<endl;
            break;

        case 5:
            cout<<"Enter the position of the item you want to peek"<<endl;
            cin>>position;
            cout<<"Peeked function is called"<<s1.peek(position)<<endl;
            break;
        case 6:
            cout<<"Number of items in the stack are"<<s1.count()<<endl;
        case 7:
            cout<<"enter the position"<<endl;
            cin>>position;
            cout<<"enter the value"<<endl;
            cin>>value;
            s1.change(position,value);
            break;
        case 8:
            cout<<"Display function called"<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        case 0:
            break;
        default :
            cout<<"entered improper number"<<endl;

        }


    }while(option!=0);
    return 0;

}
