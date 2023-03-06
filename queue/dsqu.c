#include<stdio.h>
#define MAX 4
int front=-1,rear=-1;
int q[MAX];
void insert(){
    int i,ele;
    if(rear==MAX-1)
    {
        printf("queue is full");

    }
    else{
        printf("enter a element\n");
        scanf("%d",&ele);
         i=rear;
         rear=rear+1;
       
        while(q[i]<=ele && i>=0)
        {
            q[i+1]=q[i];
            i--;
        }
        q[i+1]=ele;
    }
}
void delete(){
    if(front>rear)
    {
        printf("queuq is empty\n");
    }
    else
    {
       
        front=front+1;

    }
}
void display(){
    int i;
    if(front>rear)
    {
        printf("queuq is empty\n");
    }
    else
    {
        for(i=front+1;i<=rear;i++)
        {
            printf("%d\n",q[i]);
        }
    }
    }



int main(){
    int ch;
    do{
        printf("1.insert 2.delete 3.display 4.exit");
        printf("enter a choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;

        }
    }while(4!=ch);
}