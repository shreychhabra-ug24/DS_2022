#include <stdio.h>


//x, y are loop counters
//counter counts the total number of elements
//arr stores the numbers in the array
//blah initiates the swapping of elements
int main(){
    int arr[5] = {1,91,42,67,21};
    int x,y,counter, blah;
    for (x = 0; x<counter; x++){
        for (y = x+1; y<counter; y++){
            if(arr[x]>arr[y]){
                blah = arr[x];
                arr[x] = arr[y];
                arr[y] = blah; 
            }
        }
    }
    for (x=0; x<counter; x++)
        printf("%d", arr[x]); 
}