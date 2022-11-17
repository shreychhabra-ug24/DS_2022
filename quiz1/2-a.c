#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node*next;
    struct node*next2;
};
typedef struct node * NodeAddress;

NodeAddress arrayToLLWithNext2(int *a, int n){
    NodeAddress head = NULL;
    NodeAddress n2 = NULL;
    NodeAddress n3 = NULL;
    int x;

    head = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));
if(n>0){
        head->val = a[0];
        head->next = n2;
        head->next2 = n3;
        n2 = head;
        n3 = head;
    }

        n2->val = a[1];
        n2->next = n3;
        n2->next2 = NULL;
        }

    n3->val = a[2];
    n3->next = NULL;
    n3->next2 = NULL;

    return 0;

}
