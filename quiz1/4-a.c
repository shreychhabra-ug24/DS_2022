#include <stdio.h>
//code from heapsort.c on my github repo

void heapify(int a[], int x, int k){
    int root = k;
    int l = 2*k+1;
    int r = 2*k+2;
    //now, we compare the root and the 2 children nodes 
    //to find the largest elements for the max heap

    if(l<x, a[l]>a[root]){
        root = l;
    } 
    if(r<x, a[r]>a[root]){
    root = r;
    }
    //at this point, if the root is still not the largest element
    //we continue to heapify with a swap
    if(root!=k){
        int temp = &a[k];
        a[k] = &a[root];
        a[root] = temp;
        heapify(a,x, root);

    }
}

void heapsort(int a[], int x){
    for (int k = x/2-1; k>=0; k--){
        heapify(a, x, k);
    }
    for (int k = x-1; k>=0; k--){
        int temp = &a[0];
        a[0] = &a[k];
        a[k] = temp;
        heapify(a,k,0);
    }
}

//printing the array
void prt(int a[], int x){
    for(int k = 0; k<x; k++){
        printf("%d", a[k]);
    printf("\n");
    }
}

int main(){
    int a[] = {54,32,78,99,1,92};
    int x = sizeof(a)/sizeof(a[0]);
    //putting the max element as first element of array
    int maxElt = a[0];
    //looping through a
    for(int k = 0; k<x; k++){
        if (a[k]>maxElt){maxElt = a[k];}
    }
    printf("max element of the heap is %d\n ", maxElt);
    heapsort(a,x);
    prt(a,x);
    return 0;
}