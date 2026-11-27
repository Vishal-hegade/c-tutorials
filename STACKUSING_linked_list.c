#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node* top){

    if(top==NULL){
        printf("empty stack");
    }
    else{
        struct node *ptr=top;
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}

int isEmpty(struct node* top){
    if(top==NULL){
        return 1;
    }
    return 0;
}
int isFull(struct node* top){
    struct node*p=malloc(sizeof(struct node));
    if(p==NULL){
        free(p);
        return 1;
    }
    free(p);
    return 0;
}
struct node* push(struct node* top,int x){
    struct node*new=malloc(sizeof(struct node));
    if(isFull(top)){
        printf("overflow\n");
        return top;
    }
    else{
        new->data=x;
        new->next=top;
        top=new;
        printf("pushed %d into stack\n",x);
        return top;
    }
}
struct node* pop(struct node* top){
    
    if(isEmpty(top)){
        printf("underflow\n");
        return top;
    }
    else{
        struct node*ptr=top;
        top=top->next;
        int y=ptr->data;
        free(ptr);
        printf("deleted element %d from stack\n",y);
        return top;
    }
}
int main(){
    struct node* top=NULL;
    top=push(top,10);
    top=push(top,20);
    top=push(top,30);
    top=push(top,40);
    display(top);
    return 0;
}