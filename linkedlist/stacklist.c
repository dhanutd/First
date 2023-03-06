#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
}*start;
void insert()
{
    
    struct Node*top;
    int value;
    printf("enter a element to be insert:");
    scanf("%d",&value);
    if(start==NULL)
    {
        start=(struct Node*)malloc(sizeof(struct Node));
        start->next=NULL;
        start->data=value;
        return;
    }
    top=(struct Node*)malloc(sizeof(struct Node));
    top->data=value;
    top->next=start;
    start=top;

}
void display()
{
    struct Node*dis;
    if(start==NULL)
    {
        printf("there is no element\n");
    }
    else{
        dis=start;
        while(dis!=NULL)
        {
            printf("%d-->",dis->data);
            dis=dis->next;
        }
        printf("NULL");

    }
}
int main()
{
    int ch;
    do{
        printf("\n1.insert 2.display 3.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                   insert();
                   break;
            case 2:
                   display();
                   break;
        }
    }while(ch!=3);
}