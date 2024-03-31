#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
int stack[25];
int top = -1;
int ch;

void push(int x);
int pop();

void push(int x)
{
    if (top == 25)
        printf("Stack overflow\n");
    else
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    if (top == -1)
        printf("Stack underflow\n");
    else
    {
        ch = stack[top];
        top--;
    }
    return (ch);
}

int main()
{
    char postfix[25] , ele;
    int i, num1, num2, ans;

    printf("Enter the postfix expression: ");
    scanf("%s", postfix);
    printf("Postfix = %s\n", postfix);

    i = 0;
    while (i <= strlen(postfix) - 1)
    {
        ele = postfix[i];
        if (isdigit(ele))
        {
            push(ele - '0');
        }
        else
        {
            pop();
            num1 = ch;
            pop();
            num2 = ch;

            switch (ele)
            {
            case '/':
                ans = num2 / num1;
                break;
            case '*':
                ans = num2 * num1;
                break;
            case '+':
                ans = num2 + num1;
                break;
            case '-':
                ans = num2 - num1;
                break;
            }
            push(ans);
        }
        i++;
    }

    printf("Result: %d\n", stack[top]);

    return 0;
}
*/
int stack[30];
int top=-1;
void push(int x)
{
    stack[++top]=x;
}
int pop()
{
    return(stack[top--]);
}

int main()
{
    int n1,n2,n3,num;
    char exp[30] , *e;
    printf("Enter the posstfi expression\n");
    scanf("%s",exp);

    e = exp;
    while (*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 =pop();
            n2 =pop();
            switch(*e)
            {
            case '+':
                n3 = n1+n2;
                break;
            case '-':
                n3 = n2-n1;
                break;
            case '*':
                n3 = n2*n1;
                break;
            case '/':
                n3 = n2/n1;
                break;

                default : return 1;

            }push(n3);

        }
         e++;
    }
    printf("%d",stack[top]);
    return 0;

}
