#include<iostream>
using namespace std;

int *stack;
int SIZE;
int top = -1;

void push()
{
    int x;
    cout<<"Enter data: ";
    cin>>x;
    if(top == SIZE - 1)
        cout<<"Stack overflow"<<endl;
    else
    {
        top++;
        stack[top] = x;
    }
}
void isfull()
{
    if(top==SIZE-1)
        cout<<"Stack is full."<<endl;
    else
        cout<<"stack is not full."<<endl;
}
void pop()
{
    if(top==-1)
        cout<<"Stack underflow!"<<endl;
    else
    {
        cout<<stack[top]<<" Poped from stack"<<endl;
        top--;
    }
}
void peek()
{
    if(top==-1)
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Top element is :"<<stack[top]<<endl;
}
void isempty()
{
    if(top==-1)
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;
}
void display()
{
    if(top==-1)
        cout<<"Stack is empty.";
    else
        {
            cout<<"Stack elements are: ";
          for(int i=top;i>=0;i--)
            {
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }
}
int main()
{
    cout<<"Enter stack size: ";
    cin>>SIZE;
    stack = new int [SIZE];

    int choose;
    while(true)
    {
        cout<<"Stack menu: "<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Isfull"<<endl;
        cout<<"5.Isempty"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Exit"<<endl;

        cout<<"Enter your choose: ";
        cin>>choose;

        switch(choose)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isfull();
            break;
        case 5:
            isempty();
            break;
        case 6:
            display();
            break;
        case 7:
            cout<<"Exiting program."<<endl;
            return 0;
        default:
            cout<<"Invalid choose!Try again"<<endl;
        }
    }

}
