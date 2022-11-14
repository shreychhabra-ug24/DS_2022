#include <stdio.h>

//func to swap values
void swap(int *p, int *q) {
    int m = *p;
    *p = *q;
    *q = m;
}

//code for partitioning the array
int part(int array[], int x, int y) {
  
    int pivot = array[y];           //sets pivot element to the yth (right) element of the array
  
    int i = (x - 1);                //sets a variable i = left - 1
    for (int j = x; j < y; j++) {   //for loop that iterates over the array, if the element j is less than the right element, it increments the right pointer
        if (array[j] <= pivot) {    //however if the j pointer is < pivot, it increments left instead
        
            i++;
      swap(&array[i], &array[j]);   //after iteration, the swap is conducted
    }
  }

    swap(&array[i + 1], &array[y]);
  
    return (i + 1);
}

void qsort(int array[], int x, int y) {
    if (x < y) {
    
      int bleh = part(array, x, y);
      qsort(array, x, bleh - 1);
      qsort(array, bleh + 1, y);
  }
}


int main() {
    int list[] = {3, 9, 5, 6, 1, 98, 0};
    int n = sizeof(list) / sizeof(list[0]);
    qsort(list, 0, n - 1);
    printf("sorted list: \n");

}