#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct cqueue
{
    int Sid;
    char name[20];
    float cgpa;
};

struct cqueue queue[MAX];
int front = -1;
int rear = -1;

void insert()
{
    if(front == -1)
    {
        front = 0;
    }

        printf("Enter name of student\n ");
        rear = (rear +1)%MAX;
        scanf("%s",queue[rear].name);

        printf("Enter Sid\n");
        scanf("%d",&queue[rear].Sid);

        printf("Enter CGPA\n");
        scanf("%f",&queue[rear].cgpa);


}

void delete()
{
    if(front == -1)
    {
        printf("Que is empty\n");
    }
    else{
        front= (front +1)%MAX;
    }
    else if(front == rear )
    {
        front = rear = 0;
    }
}
void display()
{
    if(front == -1)
    {
        printf("Que is empty\n");
    }
    int i= front;
    while(i != rear)
    {
         printf("\n================\n");
        printf("%d name of student %s\n",i,queue[i].name);
        printf("%d Sid %d\n",i,queue[i].Sid);
        printf("%d CGPA %2.f\n",i,queue[i].cgpa);
         printf("\n================\n");
     i = (i +1)%MAX;
    }

     printf("%d name of student %s\n",i,queue[i].name);
        printf("%d Sid %d\n",i,queue[i].Sid);
        printf("%d CGPA %2.f\n",i,queue[i].cgpa);
        printf("\n================\n");
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nEnter 1.Insert\n2.Delete\n3.display\n4.exit\n ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
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
    return 0;
}
