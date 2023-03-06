#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
}*start;
void insert()
{
    struct Node*ptr;
    int value;
    printf("enter a element to be inserted:");
    scanf("%d",&value);
    if(start==NULL)
    {
        start=(struct Node*)malloc(sizeof(struct Node));
        start->data=value;
        start->next=NULL;
        return;
    }
}
int main()
{
    int ch;
    do
    {
        printf("1.insert 2.length 3.display 4.exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                   break;
        }
    } while (ch!=4);
    
}