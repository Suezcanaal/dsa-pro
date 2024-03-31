#include <stdio.h>
#include <stdlib.h>
#define Max 3
int front;
int rear;
front=-1;
rear=-1;
int iteams[Max];

int insert(int cid)
{
    if(front == -1)
        front =0;

        rear++;
        iteams[rear]=cid;
        printf("\ncaller id added  '%d' \n",cid);

}

void delete()
{
    if(front == -1)
        printf("\nQueue is empty\n");
    else
    {
        printf("\nDeleted caller id is '%d' \n",iteams[front]);
        front++;
    }
}

void display()
{
    if(front == -1)
    printf("QUEUE Overflow\n");

        for(int i=front;i<=rear;i++)
        {
            printf("\n%d. %d",i+1,iteams[i]);
        }
    }
int main()
{
    int ch;
    int cid;

    while(1)
    {
        printf("\nEnter \n1.insert Caller\n2.delete Caller\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter caller id \n");
            scanf("%d",&cid);
            insert(cid);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            default : printf("\nInvalid choice\n");
                    }
    }
    return 0;
}
