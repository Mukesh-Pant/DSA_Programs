#include<iostream>
using namespace std;
#define MAX_SIZE 50
struct queue_structure
{
    int queue_struct[MAX_SIZE];
    int front=-1;
    int rear=-1;
}q;
class queue
{
    // int linear_queue[MAX_SIZE];
    // int front=-1;
    // int rear=-1;
    struct queue_structure q;
public:
    void enqueue();
    void dequeue();
    void traverse();
    int isempty();
    int isfull();
    int sizeofqueue();
}Q;
void queue::enqueue()
{
    if(isfull()==1)
    {
        cout<<"\n QUEUE OVERFLOW !!"<<endl;
        return;                             //exit(1);
    }
    else 
    {
        int added_item;
        if (isempty()==1)
        {
            cout<<"Queue is Empty, Your are going to create a queue"<<endl;
            q.front=0;
        }
        cout<<endl<<"Input the element for adding in queue:  ";
        cin>>added_item;
        q.rear++;
        q.queue_struct[q.rear]=added_item;
    } 
}
void queue::dequeue()
{
    if(isempty()==1)
    {
        cout<<"\n QUEUE UNDERFLOW !!"<<endl;
        return;                               //exit(1);
    }
    else
    {
        cout<<"Element deleted from queue is : "<<q.queue_struct[q.front]<<endl;
        q.front++;
    }
}
void queue::traverse()
{
    if (isempty()==1)
    {
        cout<<"Queue is empty"<<endl;
        return;                               // exit(1);
    }
    else
    {
        cout<<"Front is "<<q.front<<" and Queue is :"<<endl;
        for(int i=q.front;i<=q.rear;i++)
        {
            cout<<q.queue_struct[i]<<endl;
        }
    }
}
int queue::isempty()
{
    if(q.front==-1 && q.rear==-1)               //front>rear
    {
        return 1;
    }
    else if(q.front>q.rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int queue::isfull()
{
    if(q.rear==MAX_SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int queue::sizeofqueue()
{
    if(isempty()==1)
    {
        cout<<"The size of the queue is  "<<0<<endl;
    }
    else
    {
        cout<<"The size of the queue is  "<<q.rear-q.front+1<<endl;
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout<<endl<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. traverse"<<endl;
        cout<<"4. Size"<<endl;
        cout<<"5. Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch (choice)
        {
        case 1: Q.enqueue();
                break;
        
        case 2: Q.dequeue();
                break;

        case 3: Q.traverse();
                break;

        case 4: Q.sizeofqueue();
                break;
            
        case 5: exit(1);
        default:
            cout<<endl<<"Wrong choice"<<endl;
            break;
        }
    }
    return 0;
}