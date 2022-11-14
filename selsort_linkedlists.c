#include <stdio.h>
#include <stdlib.h>

//initialising the structure
struct node{
    int bleh;
    struct node *next;
};
 
 
 
struct node* newnode(int bleh)
{struct node *first = (struct node*) malloc(sizeof(struct node)); first->bleh = bleh; return first;}
 
//func for new list where we'll assign pointers
void lst_new(struct node *first)
{for(;first; first = first->next){printf("%d\n", first->bleh);}}

//creating the linked list struct, setting root node as null 
struct node *linked_list(int n)
{
    struct node *first, *node = NULL;int i;
    for (i=0; i<n; i++){
        if(node){
            node->next = malloc(sizeof(struct node)); node = node->next;
        }
        else{
            first = malloc(sizeof(struct node)); node = first;
        }
        node->bleh = rand() % n;
    }
    node->next = NULL;   
    return first;
}
 
//code for selection sort
void selection_sort(struct node **first) //setting ptr to first element address
{
    struct node *head = *first, *i, *j, *min, *old, *bleh2, *list_prev;
    for(i = head; i->next; i = i->next){
        min = i;
        for(j = i; j->next; j = j->next){
            if(j->next->bleh < min->bleh){
                old = j;min = j->next;
            }
        }
        if(min != i){
            if(i == head){
                bleh2 = head->next;head->next = min->next;
                old->next = head; min->next = bleh2;
                *first = min;
            }
            else{
                for(list_prev = head; list_prev->next; list_prev = list_prev->next){
                    if(list_prev->next == i) break;
                }
                bleh2 = i;
                list_prev->next = min;
                old->next = bleh2;
                bleh2->next = min->next;
                min->next = i->next;
            }
        }
    }
}
 
 
 
 
int main(){
    struct node *first;first = linked_list(20);selection_sort(&first);lst_new(first);return 1;
}