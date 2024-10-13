#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=0;
void push(int val)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=top;
    top=newNode;
    return;
}

void pop()
{
    struct node *temp;
    temp=top;
    top=temp->next;
    free(temp);
    return;
}

void display()
{
    printf("\n--------------Display linked list--------------");
    struct node *temp;
    
    temp=top;
    if(top==0)
    {
        printf("Empty...!\n");
    }else{
         while(temp!=0)
        {
        
        printf("\n%d",temp->data);
        temp=temp->next;
        }
    }
    return;
}

int main()
{
    while(1)
    {
        int ch,val;
        printf("\n1. Push\n2. Pop\n3. print\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter Data:");
            scanf("%d",&val);
            push(val);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("Existing..!\n");
            return 0;

            default:
            printf("Enter valid choice...!\n");
        }
    }
    return 0;
}


