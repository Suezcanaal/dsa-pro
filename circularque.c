#include <stdio.h>
#include <stdlib.h>

#define MAX 3
/*
int items[MAX];
int rear=-1;
int front =-1;

void insert(int x)
{
    if(rear == MAX-1)
    {
        printf("Que overflow\n");
    }
    else
    {
        if(front == -1)
            front=front+1;

        rear =rear +1;
        items[rear]=x;

    }
}
void delete()
{
    if(rear == -1)
    {
        printf("que Underflow\n");
    }
    else
    {
        front ++;
    }
}


void display()
{
   for(int i=front;i<=rear;i++)
   {
       printf(" %d \n",items[i]);
   }
}

int main()
{
 int ch;
    while (1)
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        int value;
        switch (ch)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &value);
            insert(value);
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
*/
struct cqueue
{
    int data;
};
int front =-1;
int rear =-1;

struct cqueue queue[MAX];

int insert(int x)
{
    if(front == -1  )
        {
            front = 0 ;
        }
        rear =(rear+1)%MAX;
    queue[rear].data = x;
}
void delete()
{
    if(front == -1)
       {
           printf("EMpty queue\n");
       }
       else{
            front = (front+1)%MAX;
       }

}

void display()
{
    if(front == -1)
    {
         printf("EMPTY queue\n");
    }
    else
    {
        int i = front;
        while(i != rear)
       {
           printf("Queue[%d] = %d\n",i,queue[i].data);
           i = (i+1)%MAX;
       }
       printf("Queue[%d] = %d\n",i,queue[i].data);
    }
}

int main()
{
    int ch;
    int x;
    while(1)
    {
        printf("\nEnter\n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the number to insert\n");
            scanf("%d",&x);
            insert(x);
            break;

            case 2:delete();
            break;

            case 3:display();
            break;

            case 4:exit(0);
            break;

            default: printf("Invalid choice\n");

        }
    }
}
