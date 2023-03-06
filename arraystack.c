#include<stdio.h>
#define MAX 7
int stack,n,i,j,top,x;
void push()
{
   if(top<=n)
   {
    printf("stack is over flow\n");
   }
   else
   {
    printf("Enter a element to be pushed\n");
    scanf("%d",&x);
    top++;
    stack[top]=x;
   }
}
void pop()
{
    if(top>=n)
    {
        printf("stack is under flow\n");

    }
    else
    {
        printf("deleted element is=%d\n",stack[top]);
        top--;
    }
}
int main()
{
    top=-1;
    push();
    pop();
}