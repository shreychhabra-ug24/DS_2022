//sorting every third element of a list a of length n
#include<stdio.h>
#include<stdlib.h>
void insort(int a[], int n){
for (int i=2; i<n; i=i+3){ 
    //the logic here is that instead of the usual i = i+1 pass, we do i = i+3 passes
    //this performs the inclusion of every 3rd element of the list
    int j=i;
    int elt=a[i];
    //this portion loops over the list and adds a condition
    //when the condition is true, the jth index in a is decremented by 3 
    //and after the decrement it is initialised in the value of elt
    while (elt<a[j-3] && j>0){a[j]=a[j-3]; a[j-3]=elt; j = j-3;}
       }
}
int * sortEveryThirdElement( int *a, int n )
{   insort(a,n); 
    return a;
    }

    int main(){
        int a[]={78, 232, 44, 1, 983, 7, 10293, 3, 5737, 83, 31, 100};
        sortEveryThirdElement(a, 12);
        printf("every 3rd element sorted list is: \n");
        for (int p =0; p<12; p++){printf("%d ", a[p]);}
    }