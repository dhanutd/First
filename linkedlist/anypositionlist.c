#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
}*start;
void insert()
{
    struct Node*ptr,*ptr2,*st;
    int value,pos;
    printf("enter a element to be inserted:");
    scanf("%d",&value);
    if(start==NULL)
    {
        start=(struct Node*)malloc(sizeof(struct Node));
        start->data=value;
        start->next=NULL;
        return;
    }
    printf("\nenter a position for insert\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        st=(struct Node*)malloc(sizeof(struct Node));
        st->next=start;
        st->data=value;
        start=st;
        return;
    }
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=NULL;
    ptr->data=value;
    ptr2=start;
    pos--;
    while(pos!=1)
    {
        ptr2=ptr2->next;
        pos--;
    }
    ptr->next=ptr2->next;
    ptr2->next=ptr;

}
void display()
{
    struct Node*dis;
    if(start==NULL)
    {
        printf("threr is no element \n");
        return;
    }
    dis=start;
    while(dis!=NULL)
    {
        printf("%d--->",dis->data);
        dis=dis->next;
    }
    printf("NULL");
}
void delete()
{
    struct Node*del,*pre;
    int pos;
    if(start==NULL)
    {
        printf("\nit is empty list\n");
        return;
    }
    printf("enter a position to be deleted:");
    scanf("%d",&pos);
    del=start;
    pre=NULL;
    if(pos==1)
    {
        start=del->next;
        printf("deleted element is:%d",del->data);
        free(del);
        return;

    }

    while(pos!=1)
    {
        pre=del;
        del=del->next;
        pos--;
    }
    pre->next=del->next;
    printf("deleted element is:%d",del->data);
    free(del);




}
int main()
{
    int ch;
    do
    {
        printf("\n1.insert 2.display 3.delete 4.exit\n");
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