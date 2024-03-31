#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int n;
    printf("Enter the no of rings\n");
    scanf("%d",&n);

    toh(n,'A','B','C');

    return 0;
}
void toh(int n,char A,char B,char C)
{

    if(n==1)
    {
        printf("move %c to %c\n",A ,C);
    }
    else{
        toh(n-1,A,C,B);
        toh (1 ,A,B,C);
        toh(n-1,B,A,C);
    }
}


*/

int step = 0;

int main()
{   int x;
    char A,B,C;
    printf("Enter the number\n");
    scanf("%d",&x);

    toh(x,'A','B','C');
    return 0;
}





void toh(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("%d. Move %c to %c\n", step++,A , C);
    }
    else{
        toh(n-1,A,C,B);
        toh(1,A,B,C);
        toh(n-1,B,A,C);
    }
}
