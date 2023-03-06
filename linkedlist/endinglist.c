#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
}*start;
void insert()
{
    struct Node *end;
    struct Node *ptr;
    int value;
    printf("enter a element to be inserted\n");
    scanf("%d",&value);
    if(start==NULL)
    {
        start=(struct Node*)malloc(sizeof(struct Node));
        start->next=NULL;
        start->data=value;
        
    }
    else
    {
    end=(struct Node*)malloc(sizeof(struct Node));
    end->data=value;
    end->next=NULL;
    ptr=start;
    while(ptr->next!=NULL)
    {
    ptr=ptr->next;
    }
    ptr->next=end;
    }

}
void display()
{
    struct Node*dis;
    if(start==NULL)
    {
        printf("there is no element in list\n");
    }
    else{
        dis=start;
    while(dis!=NULL)
    {
        printf("%d-->",dis->data);
        dis=dis->next;
    }
    }
    printf("NULL");
}
void delete()
{
    struct Node*del;
    struct Node*pre;
    if(start==NULL)
    {
        printf("empty list");
    }
    else{
        del=start;
        pre=NULL;
        while(del->next!=NULL)
        {
            pre=del;
            del=del->next;
        }
        pre->next=NULL;
        printf("deleted element is %d",del->data);
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
    } while (ch!=4);
    
}