#include <stdio.h>
#define MAX 4
int q[MAX];
int front = -1, rear = -1;
void insertasc()
{
    int i, ele;
    if (rear == MAX - 1)
    {
        printf("queue over flow\n");
    }
    else
    {
        printf("enter a element");
        scanf("%d", &ele);
        i = rear;
        rear = rear + 1;
        while (q[i]!=-9999 && q[i]>ele && i >= front+1)
        {
            q[i + 1] = q[i];
            i--;
        }
        q[i + 1] = ele;
    }
}
void display()
{
    int i;
    if (front > rear)
    {
        printf("queue is under flow\n");
    }
    for (i = front+1 ; i <= rear; i++)
    {
        printf("%d\n", q[i]);
    }
}
void delete()
{
    if (front > rear)
    {
        printf("queue is underflow\n");
    }
    else
    {
        q[front]=-9999;
        front = front + 1;
    }
}
int main()
{
    int ch;
    do
    {
        printf("1.insert 2.display 3.delete 4.exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertasc();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        }
    } while (4 != ch);
}