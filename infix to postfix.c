#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int stack[20];
int top=-1;

void push(char x)
{
    stack[++top]= x;
}
char pop()
{
    if(top == -1)
    return -1;
    else
    return stack[top--];

}
int pre(char x)
{
    if(x == '(' )
    return 0;
    else if(x=='+' || x== '-')
    return 1;
   else if(x== '*' || x=='/')
    return 2;
    else return -1;
}
int main()
{
    char exp[20],*e,x;
    printf("Enter an expression \n");
    scanf("%s",exp);

    e= exp;

    while(*e != '\0')
    {
        if(isalnum(*e))
        {
           printf("%c",*e);
        }
        else if(*e == '(')
        {
             push(*e);
        }
        else if (*e == ')')
        {
            while((x=pop()) != '(')
                printf("%c",x);
        }
        else{
            while(pre(stack[top])>= pre(*e))
        printf("%c",pop());
        push(*e);
        }
        e++;

    }
    while(top != -1)
    {
        printf("%c",pop());
    }

    return 0;
}
