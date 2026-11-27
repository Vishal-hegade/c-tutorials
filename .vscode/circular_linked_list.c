#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node*head){
    struct Node*ptr;
    ptr=head;
    do
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    
    } while (ptr!=head);
    
}
struct Node* insert_f(struct Node* head,int new_data){
    struct Node*new=malloc(sizeof(struct Node));
    struct Node* ptr=head;
    new->data=new_data;
    if(head==NULL){
        new->next=NULL;
        head=new;
        return head;
    }
    while(ptr->next!=head){
        ptr=ptr->next;
    }

    new->next=head;
    head=new;
    ptr->next=head;
    
    return head;

}
int main()
{
    struct Node *head;
    struct Node *mid;
    struct Node *last;
    head = malloc(sizeof(struct Node));
    mid = malloc(sizeof(struct Node));
    last = malloc(sizeof(struct Node));
    head->data = 1;
    mid->data = 2;
    last->data = 3;
    head->next = mid;
    mid->next = last;
    last->next = head;
    
    insert_f(head,4);
    traversal(head);

    return 0;
}