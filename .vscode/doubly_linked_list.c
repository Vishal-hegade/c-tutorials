#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void r_traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->prev;
    }
}
struct Node *insert_f(struct Node *head, int new_data)
{
    struct Node *new = malloc(sizeof(struct Node));

    new->data = new_data;
    if (head == NULL)
    {
        new->next = NULL;
        new->prev = NULL;
        head = new;
        return head;
    }
    new->prev = NULL;
    head->prev = new;

    new->next = head;
    head = new;

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
    head->prev = NULL;
    mid->next = last;
    mid->prev = head;
    last->next = NULL;
    last->prev = mid;

    head = insert_f(head, 4);
    traversal(head);
    r_traversal(head);

    return 0;
}