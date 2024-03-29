#include <stdio.h>
#include <stdlib.h>
 /*   Design, Develop and Implement a menu driven Program in C for the
following array operations.
a) Creating an array of N Integer Elements
b) Display of array Elements with Suitable Headings
c) Inserting an Element (ELEM) at a given valid Position (POS)
d) Deleting an Element at a given valid Position(POS)
e) Exit.
Support the program with functions for each of the above operations.

*/
 int arr[];
     int n;
int create(int n)
{
    arr[n];
}
void display(){
    for(int i=0;i<n;i++)
    {
        printf("a[%d] = %d\n",i+1,arr[i]);
    }

}
int insert(int pos,int x){
int temp = pos;
    arr[pos-1]=x;
}
void delete(int pos){
for(int i= pos ;i<n ; i++)
{
    arr[i-1]=arr[i];
}
   n--;

}

int main()
{

    int ch;
    int pos=0;
    int x;
    while(1)
    {
        printf("Enter \n1.Create array\n 2.Display\n 3.insert at position\n 4.delete at position\n 5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter array size\n");
                    scanf("%d",&n);
                    create(n);
            break;

            case 2: display();
            break;

            case 3:
                    printf("ENter the position \n");
                    scanf("%d",&pos);
                    printf("Enter the element \n");
                    scanf("%d",&x);
                    insert(pos,x);
            break;

            case 4:
                     printf("ENter the position \n");
                    scanf("%d",&pos);
                    delete(pos);
            break;

            case 5:
                exit(0);
                break;

                default : printf("invlid input\n");

        }

    }

    return 0;
}

