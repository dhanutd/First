#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
}*start;
void insert()
{
    struct Node*ptr,*new;
    int value;
    printf("Enter element to be inserted \n ");
    scanf("%d",&value);
    if(start==NULL)
    {
        start=(struct Node*)malloc(sizeof(struct Node));
        start->data=value;
        start->next=NULL;
        return;
    }
    new=(struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
}
void display()
{
    struct Node*dis;
    if(start==NULL)
    {
        printf("there is no element in list\n");
        return;
    }
    dis=start;
    while(dis!=NULL)
    {
        printf("%d-->",dis->data);
        dis=dis->next;
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
void length()
{
    struct Node*len;
    int count=0;
    if(start==NULL)
    {
        printf("there is no element in list\n");
        return;
    }
    len=start;
    while(len!=NULL)
    {
        count=count+1;
        len=len->next;
    }
    printf("Length of linked list is: %d",count);

}
int main()
{
    int ch;
    do{
        printf("\n1.insert 2.dispaly 3.delete 4.length 5.length of nth position 6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                   break;
            case 2:display();
                  break;
            case 3:delete();
                  break;
            case 4:length();
                  break;
        }
    }while(ch!=6);
}