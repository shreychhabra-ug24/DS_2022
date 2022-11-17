#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
    int val;
    struct node*next;
    struct node*next2;
};

int main(){
    int a[] = {1,2,3,4,5};
    struct node* head = NULL;
    struct node* n2 = NULL;
    struct node* n3 = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));

    head->val = a[0];
    head->next = n2;
    head->next2 = n3;

    n2->val = a[1];
    n2->next = n3;
    n2->next2 = NULL;

    n3->val = a[2];
    n3->next = NULL;
    n3->next2 = NULL;

    return 0;

}

