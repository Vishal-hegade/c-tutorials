#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;

    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;

    }
}

void Push(struct stack* s,int ele){
    if(isFull(s)){
        int k=s->top;
        printf("stack overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top]=ele;
        printf("pushed %d into stack\n",ele);

    }
    
}

int Pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow!!!");
        return -1;

    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        
        return val;
        
    }
}
void display(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack is empty!");
    }else{
        int k=ptr->top;
        while(ptr->top>-1){
            printf("Element is:%d\n",ptr->arr[ptr->top]);
            ptr->top--;
        }
        ptr->top=k;
    }
}

int main()
{
    struct stack *s=malloc(sizeof(struct stack ));
    s->size=2;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    Push(s,5);
    Push(s,6);
    Push(s,7);
    display(s);
    return 0;


}