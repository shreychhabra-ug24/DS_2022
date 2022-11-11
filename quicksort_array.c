#include <stdio.h>

//func to swap values
void swap(int *p, int *q) {
    int m = *p;
    *p = *q;
    *q = m;
}

//code for partition
int part(int array[], int x, int y) {
  
    int pivot = array[y];
  
    int i = (x - 1);
    for (int j = x; j < y; j++) {
        if (array[j] <= pivot) {
        
            i++;
      swap(&array[i], &array[j]);
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

void print_arr(int array[], int size) {
    for (int i = 0; i < size; ++i) {
      printf("%d  ", array[i]);
  }
    printf("\n");
}

int main() {
    int list[] = {3, 9, 5, 6, 1, 98, 0};
    int n = sizeof(list) / sizeof(list[0]);
    printf("unsorted list:  \n");
    print_arr(list, n);
    qsort(list, 0, n - 1);
    printf("sorted list: \n");
    print_arr(list, n);
}