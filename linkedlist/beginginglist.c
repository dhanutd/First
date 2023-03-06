#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}*start;
void insert()
{
    struct Node* temp;
    int value;
    printf("enter a element for  inserting ");
    scanf("%d",&value);
    if(start==NULL)
    {
        start=(struct Node*)malloc(sizeof(struct Node));
        start->next=NULL;
        start->data=value;
        return ;
    }
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->next=start;
    temp->data=value;
    start=temp;
}
void display()
{
    struct Node* dis;
    if(start==NULL)
    {
        printf("no element in linked list\n");
    }
    else
    {
        dis=start;
        while(dis!=NULL)
        {
            printf("%d--->",dis->data);
            dis=dis->next;
        }
        printf("NULL");
    }
}
void delete()
{
    struct Node* del;
    if(start==NULL)
    {
        printf("there is no element in list\n");
    }
    else
    {
        del=start;
        printf("deleted element is-->%d",del->data);
        start=start->next;
        free(del);

    }
}
int main()
{
    int ch;
    do
    {
         printf("\n1.insert 2.dispaly 3.delete 4.exit\n");
         scanf("%d",&ch);
         switch(ch)
         {
            case 1:
                    insert();
                    break;
            case 2:
                    display();
                    break;
            case 3:
                   delete();
                   break;
         }
    }while(ch!=4);
}