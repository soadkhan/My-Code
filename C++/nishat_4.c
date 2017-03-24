#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
        int data;
        struct Node *next;
        struct Node *prev;
}node;
void insert(node *pointer, int data)
{
        while(pointer->next!=NULL)
        {
                pointer = pointer -> next;
        }
        pointer->next = (node *)malloc(sizeof(node));
        (pointer->next)->prev = pointer;
        pointer = pointer->next;
        pointer->data = data;
        pointer->next = NULL;
}
int find(node *pointer, int key)
{
        pointer =  pointer -> next; //First node is dummy node.
        while(pointer!=NULL)
        {
                if(pointer->data == key) //key is found.
                {
                        return 1;
                }
                pointer = pointer -> next;//Search in the next node.
        }
        return 0;
}
void print(node *pointer)
{
        if(pointer==NULL)
        {
                return;
        }
        printf("%d ",pointer->data);
        print(pointer->next);
}
int main()
{
        node *start,*temp;
        start = (node *)malloc(sizeof(node));
        temp = start;
        temp -> next = NULL;
        temp -> prev = NULL;
        printf("1. Insert\n");
        printf("2. Print\n");
        printf("3. Find\n");
        while(1)
        {
                int query;
                scanf("%d",&query);
                if(query==1)
                {
                        int data;
                        scanf("%d",&data);
                        insert(start,data);
                }
                else if(query==2)
                {
                        printf("The list is ");
                        print(start->next);
                        printf("\n");
                }
                else if(query==3)
                {
                        int data;
                        scanf("%d",&data);
                        int status = find(start,data);
                        if(status)
                        {
                                printf("Element Found\n");
                        }
                        else
                        {
                                printf("Element Not Found\n");

                        }
                }
        }

}
